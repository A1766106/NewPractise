#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string.h>

using namespace std;

class animal{
    protected:
        string name ;              // the animal's name
        int animalID ;             // the animal's unique ID
        int volume ;               // the volume of the animal's body 
    public:
        animal(string n, int v) ;  // creates an animal with name n and body volume v.
                            // animals are allocated a unique ID on creation
        virtual string get_name() = 0; 
        void set_name(string n);
        void set_Volume(int v);
        int get_Volume();
        int get_animalID();

};

#endif