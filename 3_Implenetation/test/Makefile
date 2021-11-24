SRC = unity.c test_LMS.c LMSS.c 
INC = LMS.h
all.exe : $(SRC) 
	gcc $^ -o $@

run : $@
	./all.exe

clean : 
	rm all.exe
