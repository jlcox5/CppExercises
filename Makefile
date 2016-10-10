all: main

%: %.cpp
	g++ -std=c++11 datastructures/LinkedList.cpp datastructures/HashList.cpp $< -o $@

clean: 
	$(RM) main