#include "animal.h"
#include "hunter.h"
#include <iostream>
#include <string.h>

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(string n, int v)
{
    animalID = nextID;
    nextID++;
    name = n;
    volume = v;
    set_kills(0);
}
void hunter::set_kills(int k)
{
    kills = k;
}
int hunter::get_kills()
{
 return kills;
}

string hunter::get_name()
{
    return "Hunter: "+ name;
}