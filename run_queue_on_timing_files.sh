for c in Queue-Timing/queue2to*.txt; do
	echo -e "\n==============================================\n"
	echo -en "Running ${c}...\n"
	./queue "${c}"
done
