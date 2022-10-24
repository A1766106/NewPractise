#include "animal.h"
#include <iostream>
#include <string.h>

animal::animal(){}

animal::animal(string n, int v)
{
    name = n;
    volume = v;
}

void animal::set_name(string n)
{
    name = n;
}
void animal::set_Volume(int v)
{
    volume = v;
}
int animal::get_Volume()
{
    return volume;
}
int animal::get_animalID()
{
    return animalID;
}