SRC = unity.c test_LMS.c LMSS.c 
INC = LMS.h
all.out : $(SRC) 
	gcc $^ -o $@

run : $@
	./all.out

clean : 
	rm all.out
