all: main

main: implementation.o main.o
	gcc -Wall -o main implementation.o main.o
	
implementation.o: header_file.h implementation.c
	gcc -Wall -c implementation.c

main.o: header_file.h main.c
	gcc -Wall -c main.c
	
compileonly: implementation.o main.o

deleteofiles:
	del -f *.o
	
deleteexec:
	del -f main	

deleteall: deleteexec deleteofiles

createdir:
	mkdir test_directory

deletedir:
	rmdir test_directory