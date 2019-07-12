#!/bin/sh

wget https://github.com/xNNism/ConfigHelperGUI/blob/master/themes/themes.tar.gz?raw=true
mv themes.tar.gz?raw=true themes.tar.gz
tar xf themes.tar.gz -C /usr/share/themes/
rm themes.tar.gz

exit
