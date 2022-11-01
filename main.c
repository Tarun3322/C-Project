#include <stdio.h>
#include <time.h>
#include <string.h>

struct Structure{
    
    int a[4][3][2];
    int var;


};

int RandomArrayValues(){

    struct Structure s;
    int *ptr;
    ptr = &s.a[0][0][0];

    srand(time(0));

    printf("Random values: \n");
    for (int i=0 ; i<4 ; i++){
        for (int j=0 ; j<3 ; j++){
            for (int k=0 ; k<2 ; k++){
                s.a[i][j][k] = rand()%100;
                printf("Value of a[%d][%d][%d]: ", i,j,k);
                printf("%d \n", s.a[i][j][k]);
            }
        }
    }

    printf("\nPrinting the 3D Arrays:\n");

    for (int i=0 ; i<4 ; i++){
        for (int j=0 ; j<3 ; j++){
            for (int k=0 ; k<2 ; k++){
                printf("%d ", *ptr);
                if (k==1){
                    printf("\n");
                }
                if (i==1 && j==1 && k==1){
                    s.var = *ptr;
                }
                ptr++;
            }
        }
    printf("\n");
    }

    printf("\n");

    return s.var;

}

void Compare(){
    
    char str1[50];
    char str2[50];
    
    printf("\nWe are going to compare the given strings and whether both are same or not as the var value is even.\n");
    
    printf("\nPlease enter the First string str1 to compare: ");
    scanf("%s", &str1);
    printf("Please enter the Second string str2 to compare: ");
    scanf("%s", &str2);
    
    int c = strcasecmp(str1,str2);
    
    if (c == 0)
        printf("\nBoth strings are same\n");
    else
        printf("\nBoth strings are different\n");
    
}


void Occurence(){
    
    char str[50];
    char ch;
    int c = 0;
    
    printf("\nWe are going to give the count of a character occurence in the given string as the var value is odd.\n");
    
    printf("\nPlease enter the String str: ");
    scanf("%s", &str);
    printf("Please enter the character to find the count of occurence: ");
    scanf(" %c", &ch);
    
    for(int i = 0;i <= (strlen(str)-1);i++){
        
        if(ch == str[i]){
            
            c++;
            
        }
        
    }
    
    printf("\nThe character %c occured %d times in the given string",ch,c);
}


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