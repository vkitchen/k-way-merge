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
	./gen 3 > state_machine_3.cpp
	./gen 4 > state_machine_4.cpp
	./gen 5 > state_machine_5.cpp

main: main.o $(OBJECTS)
	$(CXX) $(CFLAGS) -o $@ main.o $(OBJECTS)

clean:
	rm state_machine_*.cpp gen.o main.o $(OBJECTS)
