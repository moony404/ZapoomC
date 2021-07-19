//---Directives de préprossésseur---

#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main()
{
  
    //---Variable---
    
    char user_prenom[50];
    char user_pseudoAndPassword[50];
    char user_password[10];
    
    //---Int---
    
    int user_yon;
    int sw;
    int user_tutoie = 1;
    int user_login = 1;
    
    //---Programme---
    
    printf("Salut toi ! :)\nJe suis un petit robot qui va\nt'aider dans ton aventure !\n");
    sleep(3);
    printf("Quelle est ton prenom ? (Attention, marque bien que ton prenom ! Sans espace (les tirets sont accepte))\n");
    scanf("%s", &user_prenom);
    printf("Ton prenom a ete enregistre avec succes au prenom de %s !\n", user_prenom);
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
    scanf("%d", &user_tutoie);
    
    //---if and else---
    
    if (user_tutoie == 1)
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
    scanf("%d", &user_login);
    
    switch (user_login)
    {
    	case 1:
    		printf("Ok, mets ton pseudo et ton mot de passe coller (sans espaces entre les deux) !\n");
    		scanf("%s", &user_pseudoAndPassword);
    		printf("Tu es maintenant connecte(e) !\n");
    	break;
    	case 2:
    		printf("Ok, mets ton mot de passe, et appuie sur entree !\n");
    		scanf("%s", &user_password);
    		printf("Tu es maintenant connecte(e) !\n");
    		sleep(2);
    	break;
    	case 3:
    		printf("Ok, :(\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    		sleep(1);
    		exit(0);
    	break;
    	default:
    		printf("/!\ERROR/!\\nCode error : 1\nYou did not enter a correct number, you must \n restart the program!\n");
    		sleep(7);
    		printf("The program will close automatically in 3 seconds ...");
    		sleep(1);
    		printf("2...");
    		sleep(1);
    		printf("1...");
    		sleep(1);
    		printf("0...");
    		exit(0);
    	break;
	}
    
    printf("Tu as faim ?\n \n1 = oui, 2 = non.\n");
    int faim = 0;
    scanf("%d", &faim);
    
    //---Int de nourrituren, d'eau et de force---
    
    int perso_nourriture = 0;
    int perso_eau = 0;
    int perso_force = 0;
    int perso_lvl = 0;
    
    if (faim == 1)
    {
    	perso_nourriture = perso_nourriture + 1;
    	perso_lvl = perso_lvl + 1;
    	printf("Tien :\n- +1 de nourriture\n- +0 d'eau\n- +0 de force\n- +1 Lvl\nTu as maintenant :\n- %d de nourriture\n- %d d'eau\n- %d de force\n- %d de level\n", perso_nourriture, perso_eau, perso_force, perso_lvl);
	}
	else
	{
		printf("Ok tu n'aura pas de nourriture en plus.\n");
	}
	
	printf("Tu savais que tu 1 = oui et 0 = non (dans ce jeu) ?\n");
	printf("As tu deja jouer a ce jeu ?\n");
	scanf("%d", &user_yon);
	if (user_yon == 1)
	{
		printf("Okay donc tu n'auras pas de tutoriel !\n");
		sleep(1);
	}
	else
	{
		printf("Ok voici un court debrif sur ce que tu doit apprendre rapidement :\n- ZapoomC est un jeu de combat en console (pour l'intant).\n- Montes en niveau pour pouvoir debloquer de nouveau sort et te battre contre des monstres (appele mob).\n- Si tu as besoin d'aide rejoint notre serveur discord, lien : https://discord.gg/TsqfuZPrxa\n\n");
		sleep(1);
	}
	
    return 0;
    
}
