#This is a Makefile
SRC = LMS.c
TEST_SRC = unity\src\test_LMS.c

all: $(SRC) $(TEST_SRC)
	gcc $^ -o a.out
		
run:a
	./a.out
	
coverage:$(SRC) $(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $^ -o a.out
	./a.out
	gcov -a $(SRC)
	
	
analyze:all $(SRC)
	cppcheck --enable=all $(SRC)
	valgrind ./all.out
clean:
	rm -rf a
	rm -rf *.exe
	rm -rf *.o
