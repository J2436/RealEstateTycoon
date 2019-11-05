output: main.o property.o house.o apartment.o citizen.o tenant.o business.o complex.o space.o player.o
	g++ src/main.cpp src/property.cpp src/house.cpp src/apartment.cpp src/citizen.cpp src/tenant.cpp src/business.cpp src/complex.cpp src/space.cpp src/player.cpp -o run
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
tenant.o: src/tenant.cpp
	g++ -c src/tenant.cpp
business.o: src/business.cpp
	g++ -c src/business.cpp
complex.o: src/complex.cpp
	g++ -c src/complex.cpp
space.o: src/space.cpp
	g++ -c src/space.cpp
player.o: src/player.cpp
	g++ -c src/player.cpp
property.cpp: include/property.h
	g++ -c include/property.h
house.cpp: include/house.h	
	g++ -c include/house.h
apartment.cpp: include/apartment.h
	g++ -c include/apartment.h
citizen.cpp: include/citizen.h
	g++ -c include/citizen.h
tenant.cpp: include/tenant.h
	g++ -c include/tenant.h
business.cpp: include/business.h
	g++ -c include/business.h
complex.cpp: include/complex.h
	g++ -c include/complex.h
space.cpp: include/space.h
	g++ -c include/space.h
player.cpp: include/player.h
	g++ -c include/player.h
clean: 
	rm *.o run