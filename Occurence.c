#include "header.h"

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