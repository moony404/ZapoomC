#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main()

{
    //---Variable---
    
    int YN = 0;
    char Name[50];
    int name;
    FILE* fichier = NULL;
    
    //---Programme---
    
    printf("The program is lunching ...\n");
    printf("Please wait ...\n");
    printf("Continue ? (1=Yes/0=No)\n");
    scanf("%d", &YN);
    
    if (YN == 1)
        {
        printf("Compiling ...Done !\n");
    }
    else
        {
        printf("Error 203 Error, Failed loading\n\n\n");
    }
    
    //--Name & Fichier---
    
    printf("Whats your name ?\n");
    scanf("%s", Name);
    printf("Your name is %s !\n", Name);
    
    //---Name & Fichier---
    
    fichier = fopen("Info.prenom", "w");
    
    if (fichier != NULL)
    {
        fprintf(fichier, "Name = %s\n", Name);
        fclose(fichier);
    }
     
    printf("\nGo to GitHub of Zapoom pls : https://github.com/lefurious/Zapoom\n");
    
    return 0;

}
