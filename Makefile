CC=g++
CFLAGS=-I.
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o
	$(CC) -o main main.o
