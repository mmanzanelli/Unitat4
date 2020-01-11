CC=gcc
CFLAGS=-Wall -g

calcula: calcula.c calc.o
	$(CC) $(CFLAGS) calcula.c calc.o -o calcula

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c -o calc.o

.PHONY: clean
clean:
	rm -rf *.o
	
.PHONY: distt
distt: clean calcula
	rm -rf ../distt;
	mkdir -p ../distt/calc
	cp calcula ../distt/calc

.PHONY: targz
targz: clean
	mkdir -p source
	cp *.c *.h makefile source
	tar -cvf calcula.tar source
	gzip calcula.tar
	rm -rf calcula.tar
	rm -rf source


