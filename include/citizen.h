#ifndef CITIZEN_H
#define CITIZEN_H

class Citizen{
public:
    int getBudget();
    int getAgreeability();
    Citizen();
    Citizen(const Citizen &orig);
    Citizen & operator=(const Citizen &orig);
private:
    int budget;
    int agreeability;
};

#endif