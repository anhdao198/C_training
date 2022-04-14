# Simple Makefile
DEFINE=-DDEBUG
CFLAGS=-g -o0 -Wall
INC=-I.
LIBS=
DIR=../src/
EXE=../bin/
OJB_Win32=..\bin\\

all:
	gcc $(DEFINE) $(CFLAGS) $(INC) -c $(DIR)main.c -o $(EXE)main.o
	gcc $(DEFINE) $(CFLAGS) $(INC) -c $(DIR)source.c -o $(EXE)source.o
	gcc $(DEFINE) $(CFLAGS) $(EXE)source.o $(EXE)main.o -o $(EXE)main $(LIBS)

.PHONY : clean
clean:
	
	del /s /q ..\bin\*.o
	del /s /q ..\bin\main.exe

run:
	./$(EXE)main
