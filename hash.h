#include <iostream>
#include <string>

using namespace std;

#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1{
    private:
        static const int tailleTableau = 10;

        struct item{
                string nom;
                string tel;
                item* next;
        };

        item* HashTable[tailleTableau];

    public:
        hash1();



};

#endif // HASH_H_INCLUDED
