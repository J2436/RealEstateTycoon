#include "include/business.h"

Business::Business(){
    agreeability = (rand() % 5) + 1;
    budget = 2000 + (rand() % 8000) + 1;
}