CFLAGS = -Wall -Wextra -march=native -std=c++23
OPT = -O3

SRC = \
	harness.cpp \
	merge_baseline_copy_sort.cpp \
	merge_baseline_copy_sort_O0.cpp \
	merge_baseline_copy_sort_O1.cpp \
	merge_baseline_copy_sort_O2.cpp \
	merge_baseline_copy_sort_O3.cpp \
	merge_baseline_copy_sort_Os.cpp \
	merge_baseline_copy_sort_Oz.cpp \
	merge_find.cpp \
	merge_find_cache.cpp \
	merge_find_multiway_cache.cpp \
	merge_find_multiway_var.cpp \
	merge_find_branchless_cache.cpp \
	merge_find_cache_3.cpp \
	merge_find_cache_unrolled_alt.cpp \
	merge_find_cache_unrolled_best.cpp \
	merge_find_cache_unrolled_simd.cpp \
	merge_find_cache_simd.cpp \
	merge_find_cache_simd_unrolled.cpp \
	merge_quick_sort.cpp \
	merge_std_sort.cpp \
	merge_insertion_sort.cpp \
	merge_insert.cpp \
	merge_insert_cache.cpp \
	merge_insert_cache_pair.cpp \
	merge_insert_discrete_n.cpp \
	merge_insert_binary.cpp \
	merge_insertion_sort_indexes.cpp \
	merge_avx_sort.cpp \
	merge_avx_sort_discrete_n.cpp \
	merge_avx_sort_pointers.cpp \
	merge_avx_sort_binary_search.cpp \
	merge_pseudo_avx_sort.cpp \
	merge_pseudo_avx_sort_binary_search.cpp \
	merge_bubble_sort.cpp \
	merge_double_bubble_sort.cpp \
	merge_bubble_branchless.cpp \
	merge_bubble_branchless_cache.cpp \
	merge_bubble_branchless_unrolled.cpp \
	merge_bubble_branchless_unrolled_cache.cpp \
	merge_double_bubble.cpp \
	merge_heap.cpp \
	merge_heap_cache.cpp \
	merge_heap_separate_init.cpp \
	merge_heap_stl.cpp \
	merge_heap_stl_naive.cpp \
	merge_tournament.cpp \
	merge_tournament_cache.cpp \
	merge_tournament_cache_separate_init.cpp \
	merge_tournament_external.cpp \
	merge_tournament_external_cache.cpp \
	merge_tournament_branchless.cpp \
	merge_tournament_cache_branchless.cpp \
	merge_tournament_external_branchless.cpp \
	merge_tournament_external_cache_branchless.cpp \
	merge_state_machine_compiled.cpp \
	merge_state_machine_compiled_cache.cpp \
	merge_state_machine_compiled_var.cpp \
	merge_state_machine_compiled_binary_search.cpp \
	merge_state_machine_compiled_binary_search_cache.cpp \
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
	merge_state_machine_compiled_cache_Oz.cpp \
	merge_state_machine_compiled_var_O0.cpp \
	merge_state_machine_compiled_var_O1.cpp \
	merge_state_machine_compiled_var_O2.cpp \
	merge_state_machine_compiled_var_O3.cpp \
	merge_state_machine_compiled_var_Os.cpp \
	merge_state_machine_compiled_var_Oz.cpp
#	merge_state_machine_lookup_table.cpp \
#	merge_state_machine_lookup_table_alt.cpp \
#	merge_state_machine_lookup_table_asc.cpp \
#	merge_state_machine_lookup_table_binary_search.cpp \
#	merge_state_machine_lookup_table_binary_search_fast.cpp \

OBJECTS = $(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CFLAGS) $(OPT) -c $<

all: gen gen-cache gen-var gen-binary-search-4 gen-binary-search-cache-4 gen-lookup gen-lookup-asc gen-find-multiway-cache gen-find-multiway-var gen-find-best main

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

merge_state_machine_compiled_var_O0.o: merge_state_machine_compiled_var_O0.cpp
	$(CXX) $(CFLAGS) -c $<

merge_state_machine_compiled_var_O1.o: merge_state_machine_compiled_var_O1.cpp
	$(CXX) $(CFLAGS) -O1 -c $<

merge_state_machine_compiled_var_O2.o: merge_state_machine_compiled_var_O2.cpp
	$(CXX) $(CFLAGS) -O2 -c $<

merge_state_machine_compiled_var_O3.o: merge_state_machine_compiled_var_O3.cpp
	$(CXX) $(CFLAGS) -O3 -c $<

merge_state_machine_compiled_var_Os.o: merge_state_machine_compiled_var_Os.cpp
	$(CXX) $(CFLAGS) -Os -c $<

merge_state_machine_compiled_var_Oz.o: merge_state_machine_compiled_var_Oz.cpp
	$(CXX) $(CFLAGS) -Oz -c $<

gen: gen.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen.o
	for i in `seq 3 7`; do ./gen "$$i" > "state_machine_$$i.cpp"; done

gen-cache: gen_cache.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_cache.o
	for i in `seq 3 7`; do ./gen-cache "$$i" > "state_machine_cache_$$i.cpp"; done

gen-var: gen_var.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_var.o
	for i in `seq 3 7`; do ./gen-var "$$i" > "state_machine_var_$$i.cpp"; done

gen-binary-search-4: gen_binary_search_4.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_binary_search_4.o
	./gen-binary-search-4 > "state_machine_binary_search_4.cpp"

gen-binary-search-cache-4: gen_binary_search_cache_4.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_binary_search_cache_4.o
	./gen-binary-search-cache-4 > "state_machine_binary_search_cache_4.cpp"

gen-lookup: gen_lookup.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_lookup.o
	for i in `seq 3 8`; do ./gen-lookup "$$i" > "state_table_$$i.h"; done

gen-lookup-asc: gen_lookup_asc.o
	$(CXX) $(CFLAGS) $(OPT) -o $@ gen_lookup_asc.o
	for i in `seq 3 8`; do ./gen-lookup-asc "$$i" > "state_table_asc_$$i.h"; done

.PHONY: gen-find
gen-find-multiway-cache:
	./gen_find_multiway_cache.rb 30 > find_multiway_cache.cpp

.PHONY: gen-find-var
gen-find-multiway-var:
	./gen_find_multiway_var.rb 30 > find_multiway_var.cpp

.PHONY: gen-find-best
gen-find-best:
	./gen_find_best.rb 30 > find_unrolled_best.cpp

main: main.o $(OBJECTS)
	$(CXX) -o $@ main.o $(OBJECTS)

clean:
	rm state_machine_*.cpp state_table_*.h gen.o gen_cache.o gen_var.o gen_binary_search_4.o gen_binary_search_cache_4.o gen_lookup.o gen_lookup_asc.o main.o $(OBJECTS)
