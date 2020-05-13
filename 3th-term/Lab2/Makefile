CXXFLAGS+=-c -Wall -pedantic

all: test

main: main2.o print.o suma.o minimum.o srednia.o geometryczny.o mediana.o
	$(CXX) main2.o print.o suma.o srednia.o minimum.o geometryczny.o mediana.o -o main

main.o: main2.cpp print.h suma.h minimum.h srednia.h geometryczny.h mediana.h
	$(CXX) $(CXXFLAGS) main2.cpp

print.o: print.cpp
	$(CXX) $(CXXFLAGS) print.cpp

suma.o: suma.cpp
	$(CXX) $(CXXFLAGS) suma.cpp

minimum.o: minimum.cpp
	$(CXX) $(CXXFLAGS) minimum.cpp

srednia.o: srednia.cpp suma.h
	$(CXX) $(CXXFLAGS) srednia.cpp

geometryczny.o: geometryczny.cpp
	$(CXX) $(CXXFLAGS) geometryczny.cpp

mediana.o: mediana.cpp
	$(CXX) $(CXXFLAGS) mediana.cpp

clean:
	rm -f *.o main

test: main
	./main
