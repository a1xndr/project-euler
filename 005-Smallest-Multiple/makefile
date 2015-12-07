CC=g++
CFLAGS= -I. 
all: solution 
solution: main.o
	    $(CC) main.o -o solution -I. -std=c++11 -g
main.o : main.cpp
	    $(CC) -c main.cpp  -std=c++11 -g
clean:
	    rm *.o


