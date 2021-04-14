#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc 6.3.0 

int main()
{
    //---Variable---

    int YN = 0; 
    char Name[50]; 
    int name; 

    FILE* fichier = NULL; 

    //---Programme---

    printf("The program is lunching ...\n"); 
    sleep(3);
    printf("Please wait ...\n");
    sleep(3);
    printf("dl : Storage/emualted/0/Zapoom\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomC\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomC/CodeSource\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomC/CodeSource/ZapoomC\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomC/CodeSource/ZapoomC/ZapoomLC_14_04_2021.c\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomC/CodeSource/ZapoomC/Info.zap\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomC/Setup/ZapoomC.c\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomC/setup/ZapoomC.zip\n");
    sleep(4);
    printf("dl : Storage/emualted/0/Zapoom/ZapoomS/ZapoomS.html\n");
    sleep(1);
    printf("dl : Storage/emualted/0/Zapoom/setup.py\n");
    sleep(3);
    printf("Continue ? (1=Yes/0=No)\n"); 
    scanf("%d", &YN);

    if (YN == 1)
    {
        printf("Compiling.\n");
        sleep(1);
        printf(".\n");
        sleep(1);
        printf("..\n");
        sleep(1);
        printf("...\n");
        sleep(1);
        printf("Done !\n");
        sleep(3);
    } 
    else 
    { 
        printf("Error 203 Error, Failed loading\n\n\n");
        exit(0);
    } 

    //--Name & Fichier--- 

    printf("Whats your name ?\n"); 
    scanf("%s", Name); 
    printf("Your name is %s !\n", Name); 
    sleep(1);

    //---Name & Fichier--- 
    
    fichier = fopen("Info.prenom", "w");
    
    if (fichier != NULL) 
    { 
        fprintf(fichier, "Name = %s\n", Name); 
        fclose(fichier); 
    } 

    printf("\nGo to GitHub of Zapoom pls : https://github.com/lefurious/Zapoom\n\n\n\n\n\n\n\n\n\n\n"); 

    return 0;
    
}
