all: main.c helper.o
	gcc -o test main.c helper.o
helper.o: helper.c
	gcc -c helper.c
clean:
	rm test; rm helper.o
