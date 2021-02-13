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
    
    //---Variable "Int Name = 0;"---
    
    printf("Whats your name ?");
    scanf("%s", Name);
    printf("Your name is %s !", Name);
    
    //---Fichier---
    
    fichier = fopen("Info.prenom", "w");
    
    if (fichier != NULL)
    {
        fprintf(fichier, "Name = %s", Name);
        fclose(fichier);
    }
    
    
    printf("Go to GitHub of Zapoom pls :)");
    
    return 0;

}
