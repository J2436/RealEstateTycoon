output: main.o property.o house.o apartment.o citizen.o
	g++ src/main.cpp src/property.cpp src/house.cpp src/apartment.cpp src/citizen.cpp -o run
main.o: src/main.cpp
	g++ -c src/main.cpp
property.o: src/property.cpp
	g++ -c src/property.cpp
house.o: src/house.cpp
	g++ -c src/house.cpp
apartment.o: src/apartment.cpp
	g++ -c src/apartment.cpp
citizen.o: src/citizen.cpp
	g++ -c src/citizen.cpp
property.cpp: include/property.h
	g++ -c include/property.h
house.cpp: include/house.h	
	g++ -c include/house.h
apartment.cpp: include/apartment.h
	g++ -c include/apartment.h
citizen.cpp: include/citizen.h
	g++ -c include/citizen.h
clean: 
	rm *.o run