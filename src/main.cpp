// #include "include/buildings.h"
#include "../include/property.h"
#include "../include/house.h"
#include "../include/apartment.h"
#include "../include/tenant.h"
#include "../include/citizen.h"
#include "../include/business.h"
#include "../include/complex.h"
#include "../include/space.h"
#include "../include/player.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{ 
    srand(time(NULL));
    Complex c;
    House h;
    Apartment a;
    Player p;
    p.addProp(c);
    p.addProp(h);
    p.addProp(a);
    p.showProps();

    // cout << c.toString() << endl;
    // cout << "Tenant information: " << endl;
    // for (int i = 0; i < c.numOfTenants; i++){
    //     cout << c.spaces[i].getTenant().getBudget() << endl;
    // }
    // cout << "Rent collected: " <<  c.getRent() << endl;

    // for (int i = 0; i < c.numOfTenants; i++){
    //     cout << c.spaces[i].getTenant().getBudget() << endl;
    // }
    // c.setRent(500);
    // cout << endl;
    // cout << "Rent collected: " <<  c.getRent() << endl;

    // cout << endl;
    // cout << c.toString() << endl;
    return 0;
}
