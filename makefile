CXX = g++
CXXFLAGS = -std=c++11

OBJS = main.o box.o

all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o main $(OBJS)

main.o: main.cpp box.h
	$(CXX) $(CXXFLAGS) -c main.cpp

box.o: box.cpp box.h
	$(CXX) $(CXXFLAGS) -c box.cpp

clean:
	rm -f $(OBJS) main