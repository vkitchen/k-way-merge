CFLAGS = -Wall -Wextra -O2 -g

SRC = \
	harness.cpp \
	merge_quick_sort.cpp \
	merge_insertion_sort.cpp \
	merge_bubble_sort.cpp \
	merge_double_bubble_sort.cpp \
	merge_heap.cpp \
	merge_state_machine_compiled.cpp \
	merge_state_machine_lookup_table.cpp \
	merge_state_machine_lookup_table_alt.cpp

OBJECTS = $(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CFLAGS) -c $<

all: gen main

gen: gen.o
	$(CXX) $(CFLAGS) -o $@ gen.o
	./gen > state-machine.cpp

main: main.o $(OBJECTS)
	$(CXX) $(CFLAGS) -o $@ main.o $(OBJECTS)

clean:
	rm state-machine.cpp gen.o main.o $(OBJECTS)
