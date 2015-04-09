SRC=ss.cpp ss.h driver.cpp
CC=g++
CFLAGS=-std=c++0x -Wall -g

all: ss.o driver.o
	$(CC) $(CFLAGS)	ss.o driver.o -o ss

driver.o: driver.cpp
	$(CC) -c $(CFLAGS) driver.cpp

ss.o: ss.h ss.cpp
	$(CC) -c $(CFLAGS) ss.cpp ss.h

clean:
	rm -rf *.o ss *~ *.gch 
