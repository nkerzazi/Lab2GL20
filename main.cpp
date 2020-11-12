
#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int main()
{
    hash hashObj;
    int index;
    index = hashObj.HASH("Noureddine");
    cout << "l'index est " << index << endl;

    return 0;
}
