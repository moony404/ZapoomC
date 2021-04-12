//---Directives de préprossésseur---

#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main()
{
  
    //---Variable---
    
    char prenom[50];
    
    //---Int---
    
    int sw;
    FILE* fichier = NULL;
    
    //---Programme---
    
    printf("Salut toi ! :)\nJe suis un petit robot qui va\nt'aider dans ton aventure !");
    printf("Quelle est ton prenom ?\n");
    scanf("%s", prenom);
    printf("Ton prenom est %s ! Il est écrit dans un fichier ne \nt'inquiète pas :)\n", prenom);
    
    //---Fichier---
    
    fichier = fopen("Info.zap", "w");
    
    if (fichier != NULL)
    { 
        fprintf(fichier, "Prenom = %s ", prenom);
        fclose(fichier);
    }
    
    printf("<><><><><>Menu<><><><><>\n\n");
    printf("1.Jouer\n");
    printf("2.Crédits\n");
    printf("3.Quitter\n");
    
    scanf("%d", sw);
    
    switch (sw)
    {
    case 1:
      printf("Bon Jeu !\n\n:)");
    break;
    case 2:
      printf("Fait Par Lfk2.\n");
    break;
    case 3:
      printf("Ok Au-revoir :(\n");
    break;
    default:
      printf("Tu n'as pas entrer un chiffre/nombre correcte donc il faut\nque tu redemarre le programme !\n");
    break;
    }
    
    return 0;
    
}
