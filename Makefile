CFLAGS = -Wall -Wextra -O2 -g

.c.o:
	$(CXX) $(CFLAGS) -c $<

all: gen merge-heap merge-qsort merge-state-machine

gen: gen.o
	$(CXX) $(CFLAGS) -o $@ gen.o

merge-heap: merge-heap.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-heap.o harness.o

merge-qsort: merge-qsort.o harness.o
	$(CXX) $(CFLAGS) -o $@ merge-qsort.o harness.o

merge-state-machine: gen.o merge-state-machine.o harness.o
	./gen > state-machine.c
	$(CXX) $(CFLAGS) -o $@ merge-state-machine.o harness.o

clean:
	rm gen merge-heap merge-qsort merge-state-machine gen.o merge-heap.o merge-qsort.o merge-state-machine.o harness.o
