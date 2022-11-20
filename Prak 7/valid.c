#include <stdio.h>
#include "valid.h"
 
Stack validParantheses(char* input, int length)
/* Proses: Memasukkan parantheses (dari input) yang valid secara berurutan ke dalam Stack */
/* I.S. input adalah string, yang berisi parantheses baik secara acak maupun teratur, dan panjang dari string */
/* Contoh input dan hasil parantheses yang valid:
    1. () 2 -> ()
    2. []) 3 -> []
    3. {[} 3 -> --kosong--
    4. ()[]{} 6 -> ()[]{}
*/
{
   Stack s,valid;
   CreateEmpty(&s);
   CreateEmpty(&valid);
   int i;
   for(i = 0; i < length; i++){
      if(IsEmpty(s)){
         Push(&s, input[i]);
      }
      else if(((InfoTop(s)=='{') && (input[i]=='}')) || ((InfoTop(s)=='(') && (input[i]==')')) || ((InfoTop(s)=='[') && (input[i]==']'))){
         Push(&valid,InfoTop(s));
         Push(&valid,input[i]);
      }
      else{
         Push(&s,input[i]);
      }
   }
   return valid;
}