#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main()

{
    
    int YN = 0;
    
    printf("The program is lunching ...");
    printf("Please wait ...");
    printf("Continue ? (1=Yes/0=No)");
    scanf("%d", &YN);
    
    if (YN == 1)
        {
        printf("Compiling ...Done !");
    }
    else
        {
        printf("Error 203 Error, Failed loading");
    }
    
    return 0;
    
}
