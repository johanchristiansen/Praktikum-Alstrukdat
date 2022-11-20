#include "removeDuplicate.h"
#include "listlinier.h"

List removeDuplicate(List l)

/*
    Diberikan sebuah list linier yang sudah terurut membesar,
    kembalikan list baru yang elementnya unik
    Contoh input/output:
    input:  [1,1,2,2,3,4,5,6,6,7]
    output: [1,2,3,4,5,6,7]
    input:  [1,1,1,1,1,1]
    output: [1]
*/
{
    List Lbaru;
    CreateEmpty (&Lbaru);
    address P;
    P = First(l);
    while (P != Nil)
    {
        if (!Search(Lbaru,Info(P)))
        {
            InsVLast(&Lbaru,Info(P));
        }
        P = Next(P);
    }
    return Lbaru;
}