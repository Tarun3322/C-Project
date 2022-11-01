#include "header.h"

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