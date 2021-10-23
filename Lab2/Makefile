all: main

main: main.o pascalTri.o
	g++ main.cpp pascalTri.cpp -o main

main.o: main.cpp
	g++ -c main.cpp

pascalTri.o: pascalTri.cpp
	g++ -c pascalTri.cpp

clean: 
	rm -rf *.o
