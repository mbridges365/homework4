myprog1: myprog1.o
	g++ -o myprog1 myprog1.o
	rm *.o
myprog1.o: myprog1.cpp
	g++ -c myprog1.cpp
