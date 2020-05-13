CXX = g++
EXEC = test
CXXFLAGS += -pedantic -Wall -MMD -MP -std=c++14
LFLAGS = -lm

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

$(EXEC): $(OBJ) 
	$(CXX) $^ -o $@ $(LFLAGS)

.PHONY: clean
run: test
	./test
clean:
	@rm -f $(EXEC) $(OBJ) $(DEP)

-include $(DEP)
