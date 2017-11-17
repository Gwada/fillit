#!/bin/bash

for a in $(seq 1 13);
do
	rm -f *.fillit
	rm -f *.txt
	for i in  $(seq 1 10000);
	do
		echo $a ":" $i
		./tetri-gen -i -f $a
		echo "my"
		time $(../fillit/fillit sample.fillit > our_output.txt)
		echo "\nnot my"
		time $(./fillit/fillit sample.fillit > fx_output.txt)
		if ! diff our_output.txt fx_output.txt; then
			diff our_output.txt fx_output.txt > differror$a.diff
			mv sample.fillit error$a.sample
			exit
		fi
		rm *.txt
		rm *.fillit
	done
done
