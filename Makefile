main: lab2.o main.o
	g++ -o main main.o lab2.o

lab2.o: lab2.cpp lab2.h
	g++ -c lab2.cpp

main.o: main.cpp lab2.h
	g++ -c main.cpp

clean:
	rm lab2 *.o
	
