Output: main.o property.o house.o
	g++ main.cpp property.cpp house.cpp -o run
main.o: main.cpp
	g++ main.cpp
property.o: property.cpp
	g++ property.cpp
house.o: house.cpp
	g++ house.cpp
property.cpp: property.h
	g++ property.h
house.cpp: house.h
	g++ house.h
