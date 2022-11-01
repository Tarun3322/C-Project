#include "header.h"

int main() {
    
    struct Structure s; 

    s.var = RandomArrayValues();

    printf("var = %d \n",s.var);
    
    if (s.var%10 == 0 && s.var != 0)
        goto pattern;
    else
        goto nopattern;

    
pattern:
    printf("\n");
    for (int i = 1; i <= 5; i++ ){
        for (int j = 1; j <= i; j++){
            printf("%c",'a' + j-1);
        }
    printf("\n");
    }

nopattern:
    printf(" ");
    
    void (*fun_evnptr)() = &Compare; 
    
    if (s.var%2 == 0 && s.var != 0 && s.var%10 != 0)
        (*fun_evnptr)();
    
    void (*fun_oddptr)() = &Occurence;
    
    if ((s.var-1)%2 == 0 && s.var != 0 || s.var == 1)
        (*fun_oddptr)();


return 0;

}
