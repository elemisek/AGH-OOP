CXXFLAGS=-Wall -pedantic

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

main: $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o LAB02

%.o: %.cpp %.h
	$(CXX) -c $(CXXFLAGS) $<

clean:
	rm -f *.o LAB02

run:
	./LAB02

all: main run
