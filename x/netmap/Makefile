flags=-O3 -Wall -std=c2x
ldflags=#path to birchutils.o --EDIT--


all: clean nm-naive

nm-naive: nm-naive.o 
	cc ${flags} $^ -o $@ ${ldflags}

nm-naive.o: nm-naive.c
	cc ${flags} -c $^

clean:	
	rm -f *.o nm-naive
