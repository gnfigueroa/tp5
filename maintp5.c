/*
Gabriel Nicolas Figueroa 
Programa que se utiliza para contar caracteres,
lineas y palabras
25 de mayo del 2015
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
  int c,nl,nw, nc, state;
  state = OUT; 
  nl = nw = nc = 0;
  
  while((c = getchar()) != EOF) {
         ++nc;
         if (c == "\n")
            ++nl;
         if(c == " " || c== "\n" || c== "\t")
              state = OUT;
         else if (state == OUT) {
              state = IN;
              ++nw;
         }
  }
printf("%d %d %d\n", nl, nw, nc);
return 0;
}
