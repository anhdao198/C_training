DEFINE=-DDEBUG_ENABLE=1 -DENABLE_LOG_INFO=1 -DENABLE_LOG_WARN=0
CFLAGS=-g -o0 -Wall
INC=-I.
LIBS=

all:
	gcc $(DEFINE) $(CFLAGS) $(INC) -c main.c -o main.o
	gcc $(DEFINE) $(CFLAGS) $(INC) -c debug_log.c -o debug_log.o
	gcc $(DEFINE) $(CFLAGS) debug_log.o main.o -o main $(LIBS)

clean:
		del /s /q main.exe main.o

run:
	./main
