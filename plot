#!/bin/sh

if [ $# -ne 1 ]; then
	echo "Usage: $0 <run.dat>"
	exit
fi

gnuplot -e "filename='$1'" -p plot.gnuplot
