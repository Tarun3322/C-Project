#include "header.h"

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