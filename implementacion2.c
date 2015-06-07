/*
Implementacion #2  del tp5
Grupo 7
05 de junio del 2015
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nl, nw, nc;
    
nl = nw = nc = 0;
goto Out;

Out:
    switch(getchar()){
     case '\n':
          ++nl,++nc;
          goto Out;
     case ' ':
     case '\t':
          ++nc;
          goto Out;
     case EOF:
          goto End;
     default:
          ++nw, ++nc;
          goto In;
}
In:
   switch(getchar()){
     case '\n':
          ++nl,++nc;
          goto Out;
     case ' ':
     case '\t':
          ++nc;
          goto Out;
     case EOF:
          goto End;
     default:
          ++nc;
          goto In;
}
End:
    printf("%d %d %d \n", nl, nw, nc);
    return 0;
}
