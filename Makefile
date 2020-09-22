CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: 
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp -o main

clean:
	rm main