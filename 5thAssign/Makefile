DoubleList: DoubleList.o DoubleListTest.o
		g++ -o DoubleList DoubleList.o DoubleListTest.o

DoubleList.o: DoubleList.cpp DoubleList.h
		g++ -c DoubleList.cpp

DoubleListTest.o: DoubleListTest.cpp
		g++ -c DoubleListTest.cpp

clean: 
	rm DoubleList *.o
