#include <iostream>
#include "ts.h"

using namespace std;

int main()
{
    ts myts;

    myts.readFile();
    myts.insertCity(10, 20);
    myts.printCities();


    return 0;
}

