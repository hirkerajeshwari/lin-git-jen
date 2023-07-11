ABC.exe: main.o big2.o fact.o rev.o pallin.o fib.o add2.o sort.o big3.o
	gcc -o ABC.exe main.o big2.o fact.o rev.o pallin.o fib.o add2.o sort.o big3.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
pallin.o:pallin.c
	gcc -c pallin.c
fib.o:fib.c
	gcc -c fib.c
add2.o:add2.c
	gcc -c add2.c
sort.o:sort.c
	gcc -c sort.c
big3.o:big3.c
	gcc -c big3.c

clean:
	rm -rf *.o
