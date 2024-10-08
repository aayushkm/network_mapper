flags=-O3 -Wall -std=c2x 
ldflags=-fPIC -shared -ldl -D_GNU_SOURCE


all: clean birchutlis.so

birchutlis.so: birchutlis.o
	cc ${flags} $^ -o $@ ${ldflags}

birchutlis.o: birchutlis.c
	cc ${flags} -c $^

clean:
	rm -f birchutlis.o birchutlis.so