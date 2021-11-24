#This is a Makefile
SRC = LMS.c
TEST_SRC = unity\src\test_LMS.c

all-out: $(SRC) $(TEST_SRC)
	gcc $^ -o $@
		
run: $@
	./all.out
	
coverage:$(SRC) $(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $^ -o all.out
	./all.out
	gcov -a $(SRC)
	
	
analyze:all $(SRC)
	cppcheck --enable=all $(SRC)
	valgrind ./all.out
clean:
	rm -rf *.out
	rm -rf *.exe
	rm -rf *.o
