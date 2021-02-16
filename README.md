# re

Wrap the given command in rbenv-exec and bundle-exec if necessary.

## Usage

Invoke ruby commands within re.

Most commands will be wrapped in rbenv-exec and bundle-exec:

    $ re rails ... #=> rbenv exec bundle exec rails ...

Some commands that don't need bundle-exec will be wrapped only in rbenv-exec:

    $ re bundle ... #=> rbenv exec bundle ...
