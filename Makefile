CFLAGS = -Wall -Wextra -O2 -g

all: merge-heap merge-qsort merge-state-machine

merge-heap: merge-heap.o
	$(CC) $(CFLAGS) -o $@ merge-heap.o

merge-qsort: merge-qsort.o
	$(CC) $(CFLAGS) -o $@ merge-qsort.o

merge-state-machine: merge-state-machine.o
	$(CC) $(CFLAGS) -o $@ merge-state-machine.o

clean:
	rm merge-heap.o merge-qsort.o merge-state-machine.o
