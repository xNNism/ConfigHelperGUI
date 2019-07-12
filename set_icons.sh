#!/bin/sh

wget https://github.com/xNNism/ConfigHelperGUI/blob/master/icons/DarK.tar.gz?raw=true
mv DarK.tar.gz?raw=true DarK.tar.gz
tar xf DarK.tar.gz -C /usr/share/icons/
rm DarK.tar.gz
#
wget https://github.com/xNNism/ConfigHelperGUI/blob/master/icons/vertex-icons-git.pkg.tar.xz?raw=true
mv vertex-icons-git.pkg.tar.xz?raw=true vertex-icons-git.pkg.tar.xz
pacman -U vertex-icons-git.pkg.tar.xz --needed --noconfirm
rm vertex-icons-git.pkg.tar.xz

exit
