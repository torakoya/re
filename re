#!/bin/sh

prog=${0##*/}

if [ $# -eq 0 ]; then
    echo "Wrap the command in rbenv-exec and bundle-exec if necessary" >&2
    echo "Usage: $prog command [arg...]" >&2
    exit 2
fi

case "$1" in
bundle|gem)
    ;;
*)
    if [ -e Gemfile.lock ]; then
        be=1
    fi
    ;;
esac

if [ "$be" ]; then
    exec rbenv exec bundle exec "$@"
else
    exec rbenv exec "$@"
fi
