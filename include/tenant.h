#ifndef TENANT_H
#define TENANT_H

class Tenant
{
public:
    int getBudget();
    int getAgreeability();
protected:
    int budget;
    int agreeability;
};
#endif