
DEFINE=-DDEBUG
CFLAGS=-g -o0 -Wall
INC=-I.
LIBS=

all:
	gcc $(DEFINE) $(CFLAGS) $(INC) -c main.c -o main.o
	gcc $(DEFINE) $(CFLAGS) $(INC) -c func.c -o func.o
	gcc $(DEFINE) $(CFLAGS) func.o main.o -o main $(LIBS)

clean:
	del /s /q main.exe main.o func.o

run:
	./main
