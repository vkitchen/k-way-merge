CFLAGS = -Wall -Wextra -march=native
OPT = -O3

SRC = \
	harness.cpp \
	merge_baseline_copy_sort.cpp \
	merge_find.cpp \
	merge_find_cache.cpp \
	merge_find_cache_simd.cpp \
	merge_quick_sort.cpp \
	merge_std_sort.cpp \
	merge_insertion_sort.cpp \
	merge_insert.cpp \
	merge_insert_cache.cpp \
	merge_insert_cache_pair.cpp \
	merge_insert_discrete_n.cpp \
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
	merge_heap_cache.cpp \
	merge_heap_separate_init.cpp \
	merge_heap_stl.cpp \
	merge_heap_stl_naive.cpp \
	merge_tournament.cpp \
	merge_tournament_cache.cpp \
	merge_tournament_cache_separate_init.cpp \
	merge_state_machine_compiled.cpp \
	merge_state_machine_compiled_cache.cpp \
	merge_state_machine_lookup_table.cpp \
	merge_state_machine_lookup_table_alt.cpp \
	merge_state_machine_lookup_table_asc.cpp \
	merge_state_machine_lookup_table_binary_search.cpp \
	merge_state_machine_lookup_table_binary_search_fast.cpp \
	merge_find_cache_simd_O0.cpp \
	merge_find_cache_simd_O1.cpp \
	merge_find_cache_simd_O2.cpp \
	merge_find_cache_simd_O3.cpp \
	merge_find_cache_simd_Os.cpp \
	merge_find_cache_simd_Oz.cpp \
	merge_insert_O0.cpp \
	merge_insert_O1.cpp \
	merge_insert_O2.cpp \
	merge_insert_O3.cpp \
	merge_insert_Os.cpp \
	merge_insert_Oz.cpp \
	merge_insert_cache_O0.cpp \
	merge_insert_cache_O1.cpp \
	merge_insert_cache_O2.cpp \
	merge_insert_cache_O3.cpp \
	merge_insert_cache_Os.cpp \
	merge_insert_cache_Oz.cpp \
	merge_heap_O0.cpp \
	merge_heap_O1.cpp \
	merge_heap_O2.cpp \
	merge_heap_O3.cpp \
	merge_heap_Os.cpp \
	merge_heap_Oz.cpp \
	merge_heap_cache_O0.cpp \
	merge_heap_cache_O1.cpp \
	merge_heap_cache_O2.cpp \
	merge_heap_cache_O3.cpp \
	merge_heap_cache_Os.cpp \
	merge_heap_cache_Oz.cpp \
	merge_tournament_cache_O0.cpp \
	merge_tournament_cache_O1.cpp \
	merge_tournament_cache_O2.cpp \
	merge_tournament_cache_O3.cpp \
	merge_tournament_cache_Os.cpp \
	merge_tournament_cache_Oz.cpp \
	merge_state_machine_compiled_O0.cpp \
	merge_state_machine_compiled_O1.cpp \
	merge_state_machine_compiled_O2.cpp \
	merge_state_machine_compiled_O3.cpp \
	merge_state_machine_compiled_Os.cpp \
	merge_state_machine_compiled_Oz.cpp \
	merge_state_machine_compiled_cache_O0.cpp \
	merge_state_machine_compiled_cache_O1.cpp \
	merge_state_machine_compiled_cache_O2.cpp \
	merge_state_machine_compiled_cache_O3.cpp \
	merge_state_machine_compiled_cache_Os.cpp \
	merge_state_machine_compiled_cache_Oz.cpp

OBJECTS = $(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CFLAGS) $(OPT) -c $<

all: gen gen-cache gen-lookup gen-lookup-asc main

main.o: main.cpp config.h
	$(CXX) $(CFLAGS) $(OPT) -c $<

merge_find_cache_simd_O0.o: merge_find_cache_simd_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_find_cache_simd_O1.o: merge_find_cache_simd_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_find_cache_simd_O2.o: merge_find_cache_simd_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_find_cache_simd_O3.o: merge_find_cache_simd_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_find_cache_simd_Os.o: merge_find_cache_simd_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_find_cache_simd_Oz.o: merge_find_cache_simd_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

merge_insert_O0.o: merge_insert_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_insert_O1.o: merge_insert_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_insert_O2.o: merge_insert_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_insert_O3.o: merge_insert_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_insert_Os.o: merge_insert_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_insert_Oz.o: merge_insert_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

merge_insert_cache_O0.o: merge_insert_cache_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_insert_cache_O1.o: merge_insert_cache_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_insert_cache_O2.o: merge_insert_cache_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_insert_cache_O3.o: merge_insert_cache_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_insert_cache_Os.o: merge_insert_cache_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_insert_cache_Oz.o: merge_insert_cache_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

merge_heap_O0.o: merge_heap_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_heap_O1.o: merge_heap_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_heap_O2.o: merge_heap_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_heap_O3.o: merge_heap_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_heap_Os.o: merge_heap_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_heap_Oz.o: merge_heap_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

merge_heap_cache_O0.o: merge_heap_cache_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_heap_cache_O1.o: merge_heap_cache_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_heap_cache_O2.o: merge_heap_cache_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_heap_cache_O3.o: merge_heap_cache_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_heap_cache_Os.o: merge_heap_cache_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_heap_cache_Oz.o: merge_heap_cache_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

merge_tournament_cache_O0.o: merge_tournament_cache_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_tournament_cache_O1.o: merge_tournament_cache_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_tournament_cache_O2.o: merge_tournament_cache_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_tournament_cache_O3.o: merge_tournament_cache_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_tournament_cache_Os.o: merge_tournament_cache_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_tournament_cache_Oz.o: merge_tournament_cache_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

merge_state_machine_compiled_O0.o: merge_state_machine_compiled_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_state_machine_compiled_O1.o: merge_state_machine_compiled_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_state_machine_compiled_O2.o: merge_state_machine_compiled_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_state_machine_compiled_O3.o: merge_state_machine_compiled_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_state_machine_compiled_Os.o: merge_state_machine_compiled_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_state_machine_compiled_Oz.o: merge_state_machine_compiled_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

merge_state_machine_compiled_cache_O0.o: merge_state_machine_compiled_cache_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_state_machine_compiled_cache_O1.o: merge_state_machine_compiled_cache_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_state_machine_compiled_cache_O2.o: merge_state_machine_compiled_cache_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_state_machine_compiled_cache_O3.o: merge_state_machine_compiled_cache_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_state_machine_compiled_cache_Os.o: merge_state_machine_compiled_cache_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_state_machine_compiled_cache_Oz.o: merge_state_machine_compiled_cache_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

gen: gen.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen.o
	for i in `seq 3 7`; do ./gen "$$i" > "state_machine_$$i.cpp"; done

gen-cache: gen_cache.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_cache.o
	for i in `seq 3 7`; do ./gen-cache "$$i" > "state_machine_cache_$$i.cpp"; done

gen-lookup: gen_lookup.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_lookup.o
	for i in `seq 3 8`; do ./gen-lookup "$$i" > "state_table_$$i.h"; done

gen-lookup-asc: gen_lookup_asc.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_lookup_asc.o
	for i in `seq 3 8`; do ./gen-lookup-asc "$$i" > "state_table_asc_$$i.h"; done

main: main.o $(OBJECTS)
	$(CXX) -o $@ main.o $(OBJECTS)

clean:
	rm state_machine_*.cpp state_table_*.h gen.o gen_cache.o gen_lookup.o gen_lookup_asc.o main.o $(OBJECTS)
