#include <stdio.h>
#include "hitungfrekuensi.h"

int hitungfrekuensi() {
    int total = 0;

    START();

    while (GetCC() != MARK) 
    {
        if ((GetCC() == 'T') || (GetCC() == 't')) 
        {
            ADV();
            
            if (((GetCC() == 'I') || (GetCC() == 'i')) && (GetCC() != MARK)) 
            {
                ADV();

                if (((GetCC() == 'G') || (GetCC() == 'g')) && (GetCC() != MARK)) 
                {
                    ADV();

                    if (((GetCC() == 'A') || (GetCC() == 'a')) && (GetCC() != MARK)) 
                    {
                        total += 1;
                        ADV();
                    }
                }
            }
        } else {
            ADV();
        }
    }

    return total;
}

