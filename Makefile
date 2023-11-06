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
	merge_state_machine_lookup_table_3.cpp \
	merge_state_machine_lookup_table_4.cpp \
	merge_state_machine_lookup_table_5.cpp \
	merge_state_machine_lookup_table_6.cpp \
	merge_state_machine_lookup_table_7.cpp \
	merge_state_machine_lookup_table_alt_3.cpp \
	merge_state_machine_lookup_table_alt_4.cpp \
	merge_state_machine_lookup_table_alt_5.cpp \
	merge_state_machine_lookup_table_alt_6.cpp \
	merge_state_machine_lookup_table_alt_7.cpp \
	merge_state_machine_lookup_table_alt.cpp

OBJECTS = $(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CFLAGS) -c $<

all: gen gen-lookup main

gen: gen.o
	$(CXX) $(CFLAGS) -o $@ gen.o
	./gen 3 > state_machine_3.cpp
	./gen 4 > state_machine_4.cpp
	./gen 5 > state_machine_5.cpp
	./gen 6 > state_machine_6.cpp
	./gen 7 > state_machine_7.cpp

gen-lookup: gen_lookup.o
	$(CXX) $(CFLAGS) -o $@ gen_lookup.o
	./gen-lookup 3 > state_table_3.h
	./gen-lookup 4 > state_table_4.h
	./gen-lookup 5 > state_table_5.h
	./gen-lookup 6 > state_table_6.h
	./gen-lookup 7 > state_table_7.h

main: main.o $(OBJECTS)
	$(CXX) $(CFLAGS) -o $@ main.o $(OBJECTS)

clean:
	rm state_machine_*.cpp gen.o gen_lookup.o main.o $(OBJECTS)
