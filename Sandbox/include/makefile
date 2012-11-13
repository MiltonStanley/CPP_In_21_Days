cc= g++ -g -Wall

build: main.exe
	rm -f *.o main add

main.exe: main.o add.o
	${cc} -o main.exe add.o main.o

main.o: main.cpp
	${cc} -c main.cpp

add.o: add.cpp
	${cc} -c add.cpp