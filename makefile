myprog2: myprog2.o
	g++ -o myprog2 myprog2.o
	rm *.o
myprog2.o: myprog2.cpp
	g++ -c myprog2.cpp
