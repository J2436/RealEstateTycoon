output: main.o property.o house.o apartment.o
	g++ src/main.cpp src/property.cpp src/house.cpp src/apartment.cpp -o run
main.o: src/main.cpp
	g++ -c src/main.cpp
property.o: src/property.cpp
	g++ -c src/property.cpp
house.o: src/house.cpp
	g++ -c src/house.cpp
apartment.o: src/apartment.cpp
	g++ -c src/apartment.cpp
property.cpp: include/property.h
	g++ -c include/property.h
house.cpp: include/house.h	
	g++ -c include/house.h
apartment.cpp: include/apartment.h
	g++ -c include/apartment.h
clean: 
	rm *.o run