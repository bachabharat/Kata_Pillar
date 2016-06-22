#include <string.h>
#include <stdlib.h>
#include "ADD_ROMAN.h"
#include "SUB_ROMAN.h"


int main(void)
{
    
    
    char A[10] = "";    char B[10]="";
    printf("\n");
    printf("Enter The string A:");
    scanf("%s",A);
    printf("Enter The string B:");
    scanf("%s",B);
    char result[10] = "";
    char* temp =  ADD_ROMAN(A,B,result);
    printf("Addition of the given ROMAN numbers: ");printf("%s",temp);
    printf("\n");
    result[0] = '\0';
    temp = SUB_ROMAN(A,B,result);
    printf("Subtraction of the given ROMAN numbers: ");printf("%s",temp);
    printf("\n");
    
    return 0;
}


