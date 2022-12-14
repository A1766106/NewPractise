#ifndef VEGIE_H
#define VEGIE_H
#include "animal.h"
#include <iostream>
#include <string.h>

using namespace std;

class vegie: public animal {
    private:
        static int nextID;
        std::string favourite_food ;     // the vegie's favourite food, initialise to "grass"
    public:
        vegie(std::string n,int v);      // create a vegie with name n and body volume v
        std::string get_name();
        std::string get_favourite_food();
        void set_favourite_food(std::string f);

};

#endif