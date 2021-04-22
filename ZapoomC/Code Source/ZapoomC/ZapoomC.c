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
    int tutoie = 1;
    
    //---Programme---
    
    printf("Salut toi ! :)\nJe suis un petit robot qui va\nt'aider dans ton aventure !\n");
    sleep(3);
    printf("Quelle est ton prenom ?\n");
    scanf("%s", prenom);
    printf("Ton prenom est %s !\n", prenom);
    sleep(1);
    
    
    printf("<><><><><>Menu<><><><><>\n\n");
    printf("1.Jouer\n");
    printf("2.Credits\n");
    printf("3.Quitter\n");
    
    scanf("%d", &sw);
    
    switch (sw)
    {
    case 1:
      printf("Bon Jeu !\n");
      sleep(2);
    break;
    case 2:
      printf("Fait Par Lfk2.\n");
    break;
    case 3:
      printf("Ok Au-revoir :(\n");
      exit(0);
    break;
    default:
      printf("Tu n'as pas entrer un chiffre/nombre correcte donc il faut\nque tu redemarre le programme !\n");
    break;
    }
    
    printf("Hey !\n");
    printf("Je peut te tutoier ? \n1 = oui, 2 = non.\n");
    scanf("%d", &tutoie);
    
    //---if and else---
    
    if (tutoie = 1)
    {
    	printf("Ok\n");
    	sleep(1);
	}
	else
	{
		printf("Je TE tutoie quand meme !\n\n\n");
		sleep(1);
	}
	
    printf("Veut tu te creer un compte (1),\n ou te connecter a un compte existants(2) ? \nTape le chiffre qui te corresponds et appuies sur entree !\n");
    
    sleep(60);
    return 0;
    
}
