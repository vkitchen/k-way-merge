CFLAGS = -Wall -Wextra -O2 -g

.c.o:
	$(CXX) $(CFLAGS) -c $<

all: merge-heap merge-qsort merge-state-machine

merge-heap: merge-heap.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-heap.o harness.o

merge-qsort: merge-qsort.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-qsort.o harness.o

merge-state-machine: merge-state-machine.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-state-machine.o harness.o

clean:
	rm merge-heap.o merge-qsort.o merge-state-machine.o harness.o
