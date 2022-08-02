all:
	gcc -c Point.cpp
	gcc -c Line.cpp
	g++ main.cpp -lSDL2 Line.o Point.o
