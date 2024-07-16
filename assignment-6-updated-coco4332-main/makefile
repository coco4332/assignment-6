graph: main.o Graph.o
	g++ -std=c++17 main.o Graph.o -o graph

main.o: src/main.cpp
	g++ -c -std=c++17 src/main.cpp

Graph.o: src/Graph.cpp
	g++ -c -std=c++17 src/Graph.cpp

clean:
	rm -f graph main.o Graph.o
