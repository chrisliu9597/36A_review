mutate.out: f_mutateMatrix.o main.o
	gcc -g -Wall -Werror -o mutate.out main.o f_mutateMatrix.o
f_mutateMatrix.o: f_mutateMatrix.c f_mutateMatrix.h
	gcc -g -Wall -c f_mutateMatrix.c
main.o: main.c f_mutateMatrix.h
	gcc -g -Wall -c main.c
clean:
	rm *.o mutate.out
	