#!/bin/sh

cp -r appearance/fonts/terminess /usr/share/fonts/
cp -r appearance/fonts/xos4 /usr/share/fonts/
cp -r appearance/fonts/proggy /usr/share/fonts/
pacman -U nerd-fonts-complete-2.0.0-5-any.pkg.tar.xz

exit
