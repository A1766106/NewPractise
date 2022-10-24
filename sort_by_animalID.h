#ifndef SORT_BY_ANIMALID_H
#define SORT_BY_ANIMALID_H
#include "zoo.h"
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include <iostream>
#include <string.h>

using namespace std;

class sort_by_animalID{
    public:
        static void sort(animal **animals,int n)
        {
           for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-i-1;j++)
                {
                    if(animals[j]->get_animalID() > animals[j+1]->get_animalID())
                    {
                        animal *temp = animals[j];
                        animals[j] = animals[j+1];
                        animals[j+1] = temp;

                    }
                }
            } 
        }

};



#endif