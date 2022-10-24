#include "animal.h"
#include "vegie.h"
#include <iostream>
#include <string.h>

using namespace std;

int vegie::nextID = 100;

vegie::vegie(std::string n,int v)
{
    name = n;
    volume = v;
    favourite_food = "grass";
    animalID = nextID;
    nextID++;
}
std::string vegie::get_name()
{
    return "Safe: "+name;
}
std::string vegie::get_favourite_food()
{
    return favourite_food;
}
void vegie::set_favourite_food(std::string f)
{
    favourite_food = f;
}