CFLAGS = -Wall -Wextra -O2 -g

.c.o:
	$(CXX) $(CFLAGS) -c $<

all: gen merge-heap merge-qsort merge-insertion-sort merge-bubble-sort merge-state-machine

gen: gen.o
	$(CXX) $(CFLAGS) -o $@ gen.o
	./gen > state-machine.c

merge-heap: merge-heap.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-heap.o harness.o

merge-qsort: merge-qsort.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-qsort.o harness.o

merge-insertion-sort: merge-insertion-sort.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-insertion-sort.o harness.o

merge-bubble-sort: merge-bubble-sort.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-bubble-sort.o harness.o

merge-state-machine: gen.o merge-state-machine.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-state-machine.o harness.o

clean:
	rm gen merge-heap merge-qsort merge-insertion-sort merge-bubble-sort merge-state-machine gen.o merge-heap.o merge-qsort.o merge-insertion-sort.o merge-bubble-sort.o merge-state-machine.o harness.o state-machine.c
