#include "sort_by_animalID.h"
#include "zoo.h"
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

static void sort_by_animalID::sort(animal **animals,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(animals[j] > animals[j+1])
            {
                animal temp = animals[j];
                animals[j] = animals[j+1];
                animals[j+1] = temp;

            }
        }
    }
}