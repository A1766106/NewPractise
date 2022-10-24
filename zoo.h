#ifndef ZOO_H
#define ZOO_H
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include <iostream>
#include <string.h>

using namespace std;

class zoo{
    private:
        string name ;                          // the zoo's name
        int number_of_animals ;                // the number of animals in the zoo
        animal **animals ;                      // the zoo's animals


    public:
        zoo();
        zoo(string n,int cows,int lions); 
        std::string get_name();
        int get_number_of_animals();
        animal** get_animal();
        ~zoo();


};

#endif
