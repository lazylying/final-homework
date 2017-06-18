main:main.o graph.o tree.o queue.o stack.o
	gcc main.o graph.o tree.o queue.o stack.o -o main
main.o:main.c
	gcc -c main.c
graph.o:graph.c
	gcc -c  graph.c
tree.o:tree.c
	gcc -c tree.c
queue.o:queue.c
	gcc -c queue.c
stack.o:stack.c
	gcc -c stack.c
clean:
	rm main *.o 
