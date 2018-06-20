#!/bin/bash

for a in $(seq 1 13);
do
	rm -f *.fillit
	rm -f *.txt
	for i in  $(seq 1 10000);
	do
		echo $a ":" $i
		./tetri-gen -i -f $a
		time $(../fillit sample.fillit > our_output.txt)
		rm *.txt
		rm *.fillit
	done
done
