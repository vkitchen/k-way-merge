CFLAGS = -Wall -Wextra -Wno-unused-parameter -O2 -march=native

SRC = \
	harness.cpp \
	merge_baseline_copy_sort.cpp \
	merge_quick_sort.cpp \
	merge_std_sort.cpp \
	merge_insertion_sort.cpp \
	merge_insertion_sort_fast.cpp \
	merge_insertion_sort_fast_discrete_n.cpp \
	merge_insertion_sort_indexes.cpp \
	merge_avx_sort.cpp \
	merge_avx_sort_discrete_n.cpp \
	merge_avx_sort_pointers.cpp \
	merge_avx_sort_binary_search.cpp \
	merge_pseudo_avx_sort.cpp \
	merge_pseudo_avx_sort_binary_search.cpp \
	merge_bubble_sort.cpp \
	merge_bubble_sort_fast.cpp \
	merge_double_bubble_sort.cpp \
	merge_heap.cpp \
	merge_heap_stl.cpp \
	merge_heap_stl_naive.cpp \
	merge_tournament.cpp \
	merge_tournament_2.cpp \
	merge_state_machine_compiled.cpp \
	merge_state_machine_lookup_table.cpp \
	merge_state_machine_lookup_table_alt.cpp \
	merge_state_machine_lookup_table_asc.cpp \
	merge_state_machine_lookup_table_binary_search.cpp \
	merge_state_machine_lookup_table_binary_search_fast.cpp \
	merge_insertion_sort_fast_O0.cpp \
	merge_insertion_sort_fast_O1.cpp \
	merge_insertion_sort_fast_O2.cpp \
	merge_insertion_sort_fast_O3.cpp \
	merge_insertion_sort_fast_Os.cpp \
	merge_insertion_sort_fast_Oz.cpp \
	merge_heap_O0.cpp \
	merge_heap_O1.cpp \
	merge_heap_O2.cpp \
	merge_heap_O3.cpp \
	merge_heap_Os.cpp \
	merge_heap_Oz.cpp \
	merge_state_machine_compiled_O0.cpp \
	merge_state_machine_compiled_O1.cpp \
	merge_state_machine_compiled_O2.cpp \
	merge_state_machine_compiled_O3.cpp \
	merge_state_machine_compiled_Os.cpp \
	merge_state_machine_compiled_Oz.cpp

OBJECTS = $(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CFLAGS) -c $<

all: gen gen-lookup gen-lookup-asc main

main.o: main.cpp config.h
	$(CXX) $(CFLAGS) -c $<

merge_insertion_sort_fast_O0.o: merge_insertion_sort_fast_O0.cpp
	$(CXX) -Wall -Wextra -march=native -c $<

merge_insertion_sort_fast_O1.o: merge_insertion_sort_fast_O1.cpp
	$(CXX) -Wall -Wextra -O1 -march=native -c $<

merge_insertion_sort_fast_O2.o: merge_insertion_sort_fast_O2.cpp
	$(CXX) -Wall -Wextra -O2 -march=native -c $<

merge_insertion_sort_fast_O3.o: merge_insertion_sort_fast_O3.cpp
	$(CXX) -Wall -Wextra -O3 -march=native -c $<

merge_insertion_sort_fast_Os.o: merge_insertion_sort_fast_Os.cpp
	$(CXX) -Wall -Wextra -Os -march=native -c $<

merge_insertion_sort_fast_Oz.o: merge_insertion_sort_fast_Oz.cpp
	$(CXX) -Wall -Wextra -Oz -march=native -c $<

merge_heap_O0.o: merge_heap_O0.cpp
	$(CXX) -Wall -Wextra -march=native -c $<

merge_heap_O1.o: merge_heap_O1.cpp
	$(CXX) -Wall -Wextra -O1 -march=native -c $<

merge_heap_O2.o: merge_heap_O2.cpp
	$(CXX) -Wall -Wextra -O2 -march=native -c $<

merge_heap_O3.o: merge_heap_O3.cpp
	$(CXX) -Wall -Wextra -O3 -march=native -c $<

merge_heap_Os.o: merge_heap_Os.cpp
	$(CXX) -Wall -Wextra -Os -march=native -c $<

merge_heap_Oz.o: merge_heap_Oz.cpp
	$(CXX) -Wall -Wextra -Oz -march=native -c $<

merge_state_machine_compiled_O0.o: merge_state_machine_compiled_O0.cpp
	$(CXX) -Wall -Wextra -march=native -c $<

merge_state_machine_compiled_O1.o: merge_state_machine_compiled_O1.cpp
	$(CXX) -Wall -Wextra -O1 -march=native -c $<

merge_state_machine_compiled_O2.o: merge_state_machine_compiled_O2.cpp
	$(CXX) -Wall -Wextra -O2 -march=native -c $<

merge_state_machine_compiled_O3.o: merge_state_machine_compiled_O3.cpp
	$(CXX) -Wall -Wextra -O3 -march=native -c $<

merge_state_machine_compiled_Os.o: merge_state_machine_compiled_Os.cpp
	$(CXX) -Wall -Wextra -Os -march=native -c $<

merge_state_machine_compiled_Oz.o: merge_state_machine_compiled_Oz.cpp
	$(CXX) -Wall -Wextra -Oz -march=native -c $<

gen: gen.o
	$(CXX) $(CFLAGS) -o $@ gen.o
	for i in `seq 3 7`; do ./gen "$$i" > "state_machine_$$i.cpp"; done

gen-lookup: gen_lookup.o
	$(CXX) $(CFLAGS) -o $@ gen_lookup.o
	for i in `seq 3 8`; do ./gen-lookup "$$i" > "state_table_$$i.h"; done

gen-lookup-asc: gen_lookup_asc.o
	$(CXX) $(CFLAGS) -o $@ gen_lookup_asc.o
	for i in `seq 3 8`; do ./gen-lookup-asc "$$i" > "state_table_asc_$$i.h"; done

main: main.o $(OBJECTS)
	$(CXX) -o $@ main.o $(OBJECTS)

clean:
	rm state_machine_*.cpp state_table_*.h gen.o gen_lookup.o gen_lookup_asc.o main.o $(OBJECTS)
