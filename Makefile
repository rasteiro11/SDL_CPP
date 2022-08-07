CC = g++

HEADER_LIBS = Point.cpp Line.cpp Window.cpp
OBJECT_HEADER_LIBS = Point.o Line.o Window.o
LIBS = -lSDL2

# all:
#	$(CC) -c $(HEADER_LIBS) -lSDL2
#	$(CC) main.cpp $(OBJECT_HEADER_LIBS) $(LIBS) 

all:
	$(CC) main.cpp $(LIBS) -o main

clean:
	$(RM) a.out 
	$(RM) *.o 

compile_libs:
	$(CC) -c $(HEADER_LIBS) -lSDL2

