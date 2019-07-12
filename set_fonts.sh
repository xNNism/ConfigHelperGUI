#!/bin/sh

wget https://github.com/xNNism/ConfigHelperGUI/blob/master/fonts/fonts.tar.gz?raw=true
mv fonts.tar.gz?raw=true fonts.tar.gz
tar xf fonts.tar.gz -C /usr/share/fonts/
rm fonts.tar.gz

exit
