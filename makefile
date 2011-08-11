all:
	${MAKE}  hw3prob1 hw3prob2
hw3prob1: hw3prob1.o
	g++ -g -Wall -o hw3prob1 hw3prob1.o
hw3prob1.o: hw3prob1.cpp
	g++ -g -Wall -c hw3prob1.cpp
hw3prob2: hw3prob2.o
	g++ -g -Wall -o hw3prob2 hw3prob2.o
hw3prob2.o: hw3prob2.cpp
	g++ -g -Wall -c hw3prob2.cpp
clean:
	rm *.o hw3prob1 hw3prob2