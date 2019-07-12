#!/bin/sh

cd appearance/
wget https://raw.githubusercontent.com/StevenBlack/hosts/master/alternates/fakenews-gambling/hosts
cp -r hosts /etc/hosts
ip neigh flush all

exit
