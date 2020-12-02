CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g

all: libmyBank.so main
main: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o main $(OBJECTS_MAIN) ./libmyBank.so
libmyBank.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyBank.so $(OBJECTS_LIB)	
myBank.o: myBank.h myBank.c 
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all 
clean:
	rm -f *.o *.so main


