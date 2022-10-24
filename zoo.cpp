#include "zoo.h"
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include <iostream>
#include <string.h>

using namespace std;

zoo::zoo(){};

zoo::zoo(string n,int cows,int lions)
{
    name = n;
    number_of_animals = cows + lions;
    animals = new animal*[number_of_animals];
    for(int i=0;i<number_of_animals;i++){
    if(i<cows){
        vegie* temp = new vegie("Daisy",100);
        animals[i]=temp;
    }
    else{
        hunter* temp = new hunter("Clarence",50);
        animals[i]=temp;
    }
    }

}
std::string zoo::get_name()
{
    return name;
}
int zoo::get_number_of_animals()
{
    return number_of_animals;
}
animal** zoo::get_animals()
{
    return animals;
}

zoo::~zoo()
{
    delete animals;
}