#-*- Makefile -*-
# target: dependencies
#        action



output: main.o login.o process.o
	gcc main.o login.o process.o -o output

main.o: src/main.c
	gcc -c main.c

display.o: src/login.c inc/login.h
	gcc -c login.c

gameplay.o: src/process.c inc/process.h
	gcc -c process.c

clean:
	rm *.o output
