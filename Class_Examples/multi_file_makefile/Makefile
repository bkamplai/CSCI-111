CC = gcc
CFLAGS = -Wall -g
LDFLAGS = 

all: driver.o add.o sub.o mul.o div.o
	${CC} driver.o add.o sub.o mul.o div.o -o all

driver.o: driver.c
	${CC} ${CFLAGS} -c driver.c

add.o: add.c
	${CC} ${CFLAGS} -c add.c

sub.o: sub.c
	${CC} ${CFLAGS} -c sub.c

mul.o: mul.c
	${CC} ${CFLAGS} -c mul.c

div.o: div.c
	${CC} ${CFLAGS} -c div.c

clean:
	rm -rf *.o
	rm all