#ifndef SORT_BY_ANIMALID_H
#define SORT_BY_ANIMALID_H
#include "zoo.h"
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include <iostream>
#include <string.h>

using namespace std;

class sort_by_animalID: public zoo{
    public:
        static void sort(animal **animals,int n);	

};

#endif