FIFO : main.o Node.o SingleLinkedNode.o Queue.o
	clang++ main.o Node.o SingleLinkedNode.o Queue.o -o FIFO

main.o : main.cpp SingleLinkedNode.h Node.h
	clang++ -c main.cpp

Node.o : Node.cpp Node.h
	clang++ -c Node.cpp
	
SingleLinkedNode.o : SingleLinkedNode.cpp SingleLinkedNode.h
	clang++ -c SingleLinkedNode.cpp

Queue.o : Queue.cpp Queue.h
	clang++ -c Queue.cpp

clean : 
	rm -f *.o FIFO
	