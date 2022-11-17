#include "mesinkata.h"
#include <stdio.h>


int main() {
    int length, i;
    STARTWORD();
    length = currentWord.Length;
    while (!(isEndWord())) 
    {
        for (i = 0; i < currentWord.Length; i++) 
        {
            if ((currentWord.TabWord[i] >= 'A') && (currentWord.TabWord[i] <= 'Z')) 
            {
                currentWord.TabWord[i] = ((currentWord.TabWord[i] + length - 65) % 26) + 65;
            }
            printf("%c", currentWord.TabWord[i]);
        }

        if (currentChar == MARK) 
        {
            printf("%c", MARK);
        } else 
        {
            printf(" ");
        }
        ADVWORD();
    }
    printf("\n");
    return 0;
}