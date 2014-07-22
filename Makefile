CC	= gcc
CFLAGS	= -Wall
LIBS	=


hello: hello.o
	$(CC) -o $@ $< $(LIBS)

.c.o:
	$(CC) -c $< $(CFLAGS)


clean:
	rm -f *.o
