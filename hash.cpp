#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash1::HASH(string cle)
{
    int index;
    int hashage = 0;
    for(int i = 0; i< cle.length(); i++)
    {
        hashage = hashage + (int)cle[i];
    }
    index = hashage % tailleTableau;

    return index;
}

void hash1::ajouterItem(string nom, string tel) {
    int hashValue = HASH(nom);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr != end(cell); bItr++) {
        if(bItr->first == nom) {
            keyExists = true;
            bItr -> second = tel;
            cout << "[WARNING] Key exists. Value replaced" <<endl;
            break;
        }
    }

    if(!keyExists)
        cell.emplace_back(nom, tel);
    
    return;
}