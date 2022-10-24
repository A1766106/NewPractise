#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include <iostream>
#include <string.h>

using namespace std;

class hunter: public animal {
    private:
        static int nextID;
        int kills ;   
    public:
        hunter(std::string n, int v);  // create a hunter with name n and body volume v
        void set_kills(int k);
        int get_kills();
        std::string get_name();

};

#endif