#!/bin/sh
# Tanka obloga oko univerzalnog `cbuild` (ista logika kao F9 u VS Code-u).
# Radi u bilo kojem folderu: sam pronalazi sve .c fajlove i linka ih.
#
#   ./build.sh putanja/do/fajla.c
#
# Instaliraj univerzalnu verziju sa:  cp cbuild.sh ~/bin/cbuild

if command -v cbuild >/dev/null 2>&1; then
  exec cbuild "$@"
fi

# Fallback ako ~/bin nije u PATH
if [ -x "$HOME/bin/cbuild" ]; then
  exec "$HOME/bin/cbuild" "$@"
fi

echo "Greska: 'cbuild' nije instaliran." >&2
echo "Pokreni: cp ~/Desktop/vscode-c-runner/cbuild.sh ~/bin/cbuild" >&2
exit 1
