LogOnSystem: LogOnSystem.o LogOnSystemTest.o
		g++ -o LogOnSystem LogOnSystem.o LogOnSystemTest.o

LogOnSystem.o: LogOnSystem.cpp
		g++ -c LogOnSystem.cpp

LogOnSystemTest.o: LogOnSystemTest.cpp
		g++ -c LogOnSystemTest.cpp

clean: 
	rm LogOnSystem *.o
