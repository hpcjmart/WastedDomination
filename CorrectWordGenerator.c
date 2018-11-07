#include<stdio.h>
#include<string.h>
#include "_generate.h"
 
void search(char *pat, char *txt, int *exit, int *where)
{
    int M = strlen((const char *)pat);
    int N = strlen((const char *)txt);
    int i,j;
    int x;
    
    *exit=0;
    *where=0;
 
    /* A loop for 'pat' */
    for (i = 0; i <= N-M+1; i++) 
    {
 
       /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
        {
              if (txt[i+j] != pat[j])
              break;
        }
 
        if (j == M) 
        {
         //printf( "Pattern (" );
         //for( x = 0; x < M; x++) printf("%c", pat[x]);  
         //printf(") found at index %d \n", i+1);
         *exit=1;
         *where=i+1;
         break; //Si quitamos esto, encuentra todas las veces que aparece la cadena (ojo)
        }
 
    }
}

    
 
int main()
 
 {
   char m = 3; //Longitud alfabeto
   char n = 11; //Longitud palabra
   char txt[]      =     "00000000000";

   //Apartado a) de las condiciones

   char pat1[] = "20";
   char pat2[] = "02";

   int gen_result;         //return value of generation functions
   unsigned int set_counter;        //counting generated sequences
   int x;                  //iterator

   set_counter = 0;
   //printf("vari_rep_lex(%d, %d)\n", m, n);
   gen_result = gen_vari_rep_lex_init(txt, m, n);

   if(gen_result == GEN_EMPTY)
   {
   set_counter++;
   //printf("{} (%u)\n", set_counter);
   }
  
   int exit=0;
   int where=0;

   while(gen_result == GEN_NEXT)
   {
    set_counter++;

    search(pat1, txt, &exit, &where);   
    if(exit==1){
      gen_result = gen_vari_rep_lex_next(txt, m, n);
      continue;   
    }
    search(pat2, txt, &exit, &where);
    if(exit==1){
      gen_result = gen_vari_rep_lex_next(txt, m, n);
      continue;
    }


    for(x = 0; x < n; x++) printf("%c ", txt[x]);
    printf("\n");

    gen_result = gen_vari_rep_lex_next(txt, m, n);

   }// Del While

   return 0;
}
