//---Directives de préprossésseur---

#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main()
{
  
    //---Variable---
    
    char prenom[50];
    char pseudo_and_password[50];
    char password[10];
    
    //---Int---
    
    int sw;
    int tutoie = 1;
    int login_for_user = 1;
    
    //---Programme---
    
    printf("Salut toi ! :)\nJe suis un petit robot qui va\nt'aider dans ton aventure !\n");
    sleep(3);
    printf("Quelle est ton prenom ? (Attention, marque bien que ton prenom ! Sans espace (les tirets sont accepte))\n");
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
    	  sleep(0);
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
    sleep(1);
    printf("Je peut te tutoier ? \n1 = oui, 2 = non.\n");
    scanf("%d", &tutoie);
    
    //---if and else---
    
    if (tutoie == 1)
    {
    	printf("Ok\n");
    	sleep(1);
	}
	else
	{
		printf("Je TE tutoie quand meme !\n\n\n");
		sleep(1);
	}
	
    printf("       ---Login---\nVeut tu te creer un compte (1),\nou te connecter a un compte existants(2), ou quitter (3)? \nTape le chiffre qui te corresponds et appuies sur entree !\n");
    scanf("%d", &login_for_user);
    
    switch (login_for_user)
    {
    	case 1:
    		printf("Ok, mets ton pseudo et ton mot de passe coller (sans espaces entre les deux) !\n");
    		scanf("%s", pseudo_and_password);
    		printf("Ok\n");
    	break;
    	case 2:
    		printf("Ok, mets ton mot de passe, et appuie sur entrée !\n");
    		scanf("%s", password);
    		printf("Tu es maintenant connecte(e) !\n");
    		sleep(10);
    	break;
    	case 3:
    		printf("Ok, :(\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    		exit(0);
    	break;
    	default:
    		printf("Tu n'as pas entrer un chiffre/nombre correcte donc il faut\nque tu redemarre le programme !\n");
    	break;
	}
    
    return 0;
    
}
