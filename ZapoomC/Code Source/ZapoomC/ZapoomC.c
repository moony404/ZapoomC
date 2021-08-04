//Directives de préprossésseur

#include <stdio.h>
#include <stdlib.h>

//Compiler version TDM-GCC 4.9.2 64-bit Release

int main()
{
    //variable
    
    //Switch
	int sw;
    
    //mob_touple
    int mob_touple = 1;
    signed char mob_touple_pv = 50;
    
    //user
    
    int user_yon;
    int user_tutoie = 1;
    int user_login = 1;
    signed char user_request_firstmob = 0;
    signed char user_request_regenpv = 1;
    char user_prenom[50];
    char user_pseudoAndPassword[50];
    char user_password[10];
	    
    //perso
    
    int perso_nourriture = 0;
    int perso_eau = 0;
    int perso_force = 0;
    int perso_lvl = 0;
    signed char perso_pv = 100;
    
    //fichier open
    
    FILE* fichier = NULL;
    fichier = fopen("backup_1.txt", "w");
    
    //Programme
    
    printf("Salut toi ! :)\nAvant toute chose suis un petit robot qui va\nt'aider dans ton aventure, si il y a des bugs dans ce jeu\nn'hesites surtout pas a les dire sur ce site : https://github.com/lefurious/Zapoom/issues/new\n\n");
    sleep(8);
    printf("Desoloer si les accents ne s'affiche pas,\nceci est lie a un bug, il faudra vous y faire, quelque fois il y a ER pour demarquer les accents sinon des fois\non peut comprendre d'autre mots. Merci de votre comphreensions.\n\n");
    sleep(10);
    printf("Quelle est ton prenom ? (Attention, marque bien que ton prenom ! Sans espace (les tirets sont accepte))\n");
    scanf("%s", &user_prenom);
    printf("Ton prenom a ete enregistre avec succes au prenom de %s !\n\n", user_prenom);
    sleep(3);
    
    
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
    		exit(1);
    	break;
    	default:
    	/*
		Début du
		mesage d'erreur !
		*/
    	printf("/!\ERROR/!\\nCode error : 1\nYou did not enter a correct number, you must \n restart the program!\n");
    	sleep(3);
    	printf("Fermeture des fichiers ouvert ?\n");
    	sleep(1);
    	if (fichier != NULL)
    	{
    		printf("Tentative de redemarrage des fichiers...\n");
    		sleep(2);
    		printf("0  - [..........]\n");
    		sleep(1);
    		printf("12 - [|.........]\n");
    		sleep(1);
    		printf("24 - [||........]\n");
    		sleep(1);
    		printf("30 - [|||.......]\n");
    		sleep(1);
    		printf("46 - [||||......]\n");
    		sleep(1);
    		printf("51 - [|||||.....]\n");
    		sleep(1);
    		printf("68 - [||||||....]\n");
    		sleep(1);
    		printf("68 - [||||||....]\n");
    		sleep(1);
    		printf("70 - [|||||||...]\n");
    		sleep(1);
    		printf("82 - [||||||||..]\n");
    		sleep(1);
    		printf("89 - [||||||||..]\n");
    		sleep(1);
    		printf("90 - [|||||||||.]\n");
    		sleep(1);
    		printf("95 - [|||||||||.]\n");
    		sleep(1);
    		printf("96 - [|||||||||.]\n");
    		sleep(1);
    		printf("98 - [|||||||||.]\n");
    		sleep(1);
    		printf("99 - [|||||||||.]\n");
    		sleep(1);
    		printf("99 - [|||||||||.]\n");
    		sleep(1);
    		printf("100 -[||||||||||]\n");
    		sleep(1);
    		printf("Terminez !\n");
    		//debut de la 2eme verif de fichier != NULL
    		if (fichier != NULL)
    		{
    			if (user_tutoie == 1) //la variable tutoie sert une fois au moins ;=)
    			{
    				printf("Recuperation termine ! Tu as eu de la chance !\n");
				}
    			else
    			{
    				printf("Recuperation termine ! Vous avez eu de la chance !\n");
				}
			}
		}
		else
		{
			printf("Les fichiers ne peuvent pas etre fermer donc il faut que tu \nredemarre le programme mais ne t'inquite pas il va redemarrer tout seul !\n");
		}
    	printf("OK !");
    	sleep(1);
    	printf("The program will close automatically in 3 seconds ...\n");
    	sleep(1);
    	printf("2...\n");
    	sleep(1);
    	printf("1...\n");
    	sleep(1);
    	printf("0...\n");
    	exit(1);
    	
    	/*
		Fin du
		message d'erreur !
		*/
    	break;
    }
	
    printf("Hey !\n");
    sleep(1);
    printf("Je peut te tutoier ? \n1 = oui, 2 = non.\n");
    scanf("%d", &user_tutoie);
    
    //if and else
    
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
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
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
    		//Message d'erreur
    		printf("/!\ERROR/!\\nCode error : 1\nYou did not enter a correct number, you must \n restart the program!\n");
    		sleep(3);
    		printf("The program will close automatically in 3 seconds ...\n");
    		sleep(1);
    		printf("2...\n");
    		sleep(1);
    		printf("1...\n");
    		sleep(1);
    		printf("0...\n");
    		exit(1);
    	break;
	}
    
    printf("Tu as faim ?\n \n1 = oui, 0 = non.\n");
    int faim = 0;
    scanf("%d", &faim);
    sleep(1);
    
    if (faim == 1)
    {
    	perso_nourriture = perso_nourriture + 1;
    	perso_lvl = perso_lvl + 1;
    	printf("Tien :\n- +1 de nourriture\n- +0 d'eau\n- +0 de force\n- +1 Lvl\n- +0 de vie\nTu as maintenant :\n- %d de nourriture\n- %d d'eau\n- %d de force\n- %d de level\n- %d de vie\n", perso_nourriture, perso_eau, perso_force, perso_lvl, perso_pv);
    	sleep(1);
	}
	else
	{
		printf("Ok tu n'aura pas de nourriture en plus.\n");
		sleep(1);
	}
	
	printf("Tu savais que tu 1 = oui et 0 = non (dans ce jeu) ?\n");
	sleep(2);
	printf("As tu deja jouer a ce jeu ?\n");
	scanf("%d", &user_yon);
	if (user_yon == 1)
	{	
		printf("T'es sur ?\n");
		scanf("%d", &user_yon);
		if (user_yon == 1)
		{
			printf("Ok ok..\n");
			sleep(1);
		}
		else
		{
			printf("Ok voici un court debrif sur ce que tu doit apprendre rapidement :\n- ZapoomC est un jeu de combat en console (pour l'intant).\n- Montes en niveau pour pouvoir debloquer de nouveau sort et te battre contre des monstres (appele mob).\n- Si tu as besoin d'aide rejoint notre serveur discord, lien : https://discord.gg/TsqfuZPrxa\n\n");
			sleep(1);
		}
	}
	else
	{
		printf("Ok voici un court debrif sur ce que tu doit apprendre rapidement :\n- ZapoomC est un jeu de combat en console (pour l'intant).\n- Montes en niveau pour pouvoir debloquer de nouveau sort et te battre contre des monstres (appele mob).\n- Si tu as besoin d'aide rejoint notre serveur discord, lien : https://discord.gg/TsqfuZPrxa\n\n");
		sleep(1);
	}
	
	
	//Fichier pour "backup_1.txt"
	
	if (fichier != NULL)
    {
    	//on peut écrire dans le fichier c'est bon
    	fprintf(fichier, "Tu as maintenant :\n- %d de nourriture\n- %d d'eau\n- %d de force\n- %d de level\n- %d de vie\n", perso_nourriture, perso_eau, perso_force, perso_lvl, perso_pv);
	}
	else
	{
		//Message d'erreur
    	printf("/!\ERROR/!\\nCode error : 2\nThere was a problem opening a file, maybe for a backup!\n");
    	sleep(3);
    	printf("The program will close automatically in 3 seconds ...\n");
    	sleep(1);
    	printf("2...\n");
    	sleep(1);
    	printf("1...\n");
    	sleep(1);
    	printf("0...\n");
    	exit(2);
	}
	
	//sleep(1);
	sleep(1);
	//end of //sleep(1);
	
	//Premmier mob
			
	printf("AAAA (O.O)\n");
	sleep(1);
	printf("Un touple vient d'apparaitre !\n");
	sleep(1);
	printf("Que va tu faire ?\n");
	printf("<><><><><>Menu De Combat<><><><><>\n\n");
	printf("1.L'attaquer\n2.Rebrousser chemin\n");
	sleep(1);
	
	/*
	Choix de l'utilisateur
	pour choisire ce qu'il
	va faire donc la variable
	créer est en haut du
	programme (l.25, col.5)
	*/
	
	scanf("%d", &user_request_firstmob);
	switch (user_request_firstmob)
	{
		case 1:
			//Attaque
			sleep(1);
			printf("Ok, mais.. il semblerait que tu n'a pas d'arme !\nTu pert donc 5 pv, car le touple t'as attaque !\n");
			sleep(5);
			perso_pv = perso_pv - 5;
			printf("Tu as maintenant %d points de vie !\n", perso_pv);
			sleep(3);
			
			/*
			Début du système pour la regen qui a 137 ligne en comptant les comments...
			
			Check si perso_ a bien
			tout ses pv dans perso_pv,
			pour sa on utilise plusieurs
			simple "if else"
			Pour se faire voici le code :
			*/
			
			if (perso_pv < 50)
			{
				printf("A zut ... tu n'as plus que %d point de vie !\nA moins que la nourriture te regenere de la vie !\nVeux-tu prendre un peu de ta nourriture pour pouvoir\nte regenerer ?\n", perso_pv);
				scanf("%d", &user_yon);
				if (user_yon == 1)
				{
					if (perso_nourriture == 0)
					{
						//sa match pas
						printf("Malheuresement tu ne peux pas te regenerer car tu n'as pas ou plus de nourriture,\ndonc tu ne regenereras pas :(\n");
					}
					else
					{
						//tout match (nourriture + pv) alors sa fait le truc de switch (user_request_regenpv)
						//le switch est déplacé ici !
						printf("Ok, combien de point de vie souhaites tu regenerer ?\n(Tu peux en regenerer que 10 a la fois), (Sachant que tu en a %d.)\n", perso_pv);
						//Deamnde des pv, 
						//donc creation 
						//d'une nouvelle 
						//variable pour le 
						//choix en signed 
						//char (l.31, col.5)
						scanf("%d", &user_request_regenpv);
					
						//Switch avec la variable user_request_regenpv
					
						switch (user_request_regenpv)
						{
							case 1:
								printf("Ok tu as pris 1 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 1;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 2:
								printf("Ok tu as pris 2 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 2;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 3:
								printf("Ok tu as pris 3 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 3;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 4:
								printf("Ok tu as pris 4 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 4;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 5:
								printf("Ok tu as pris 5 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 5;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 6:
								printf("Ok tu as pris 6 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 6;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 7:
								printf("Ok tu as pris 7 pv -> (point(s) de vie) en plus.\n");
								 perso_pv = perso_pv + 7;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 8:
								printf("Ok tu as pris 8 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 8;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 9:
								printf("Ok tu as pris 9 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 9;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 10:
								printf("Ok tu as pris 10 pv -> (point(s) de vie) en plus.\n");
								perso_pv = perso_pv + 10;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							default:
								/*
								Début du
								mesage d'erreur !
								*/
    						printf("/!\ERROR/!\\nCode error : 1\nYou did not enter a correct number, you must \n restart the program!\n");
    						sleep(3);
    						printf("Fermeture des fichiers ouvert ?\n");
    						sleep(1);
    						if (fichier != NULL)
    						{
    							printf("Tentative de redemarrage des fichiers...\n");
    						sleep(2);
    						printf("0  - [..........]\n");
    						sleep(1);
    						printf("12 - [|.........]\n");
    						sleep(1);
    						printf("24 - [||........]\n");
    						sleep(1);
    						printf("30 - [|||.......]\n");
    						sleep(1);
    						printf("46 - [||||......]\n");
    						sleep(1);
    						printf("51 - [|||||.....]\n");
    						sleep(1);
    						printf("68 - [||||||....]\n");
    						sleep(1);
    						printf("68 - [||||||....]\n");
    						sleep(1);
    						printf("70 - [|||||||...]\n");
    						sleep(1);
    						printf("82 - [||||||||..]\n");
    						sleep(1);
    						printf("89 - [||||||||..]\n");
    						sleep(1);
    						printf("90 - [|||||||||.]\n");
    						sleep(1);
    						printf("95 - [|||||||||.]\n");
    						sleep(1);
    						printf("96 - [|||||||||.]\n");
    						sleep(1);
    						printf("98 - [|||||||||.]\n");
    						sleep(1);
    						printf("99 - [|||||||||.]\n");
    						sleep(1);
    						printf("99 - [|||||||||.]\n");
    						sleep(1);
    						printf("100 -[||||||||||]\n");
    						sleep(1);
    						printf("Terminez !\n");
    						//debut de la 2eme verif de fichier != NULL
    						if (fichier != NULL)
    						{
    							if (user_tutoie == 1) //la variable tutoie sert une fois au moins ;=)
    							{
    								printf("Recuperation termine ! Tu as eu de la chance !\n");
								}
    							else
    							{
    								printf("Recuperation termine ! Vous avez eu de la chance !\n");
								}
							}
						}
						else
						{
							printf("Les fichiers ne peuvent pas etre fermer donc il faut que tu \nredemarre le programme mais ne t'inquite pas il va redemarrer tout seul !\n");
						}
    					printf("OK !");
    					sleep(1);
    					printf("The program will close automatically in 3 seconds ...\n");
    					sleep(1);
    					printf("2...\n");
    					sleep(1);
		    			printf("1...\n");
		    			sleep(1);
		    			printf("0...\n");
		    			exit(1);
    			
		    			/*
						Fin du
						message d'erreur !
						*/
							break;
						}
					}
				}
				else
				{
					printf("Ok tu ne regeneras pas, attends la fin d'un autre combat pour regenerer !\n");
					//puis, plus rien, j'ai deplacer le suite en Ctrl + X a la ligne 252, colonne 25.
				}
			}
			else
			{
				//Rien ne se passe,
				//Aucune erreur,
				//On peut continuer,
				//Sans aucune frayeurs.
				//
				//Lfk2,
				//03/08/2021
			}
			
			/*
			Et voila, tout simplement 
			comme ceci en testant la 
			valeur de perso_pv, si 
			elle est < (infétieur) 
			à 1, si oui on stop le 
			jeu en disans qu'on a 
			perdu et on rééxplique 
			que pour relancer un 
			partie il faut faire 
			Alt + F4 ou la croix 
			pour fermer un programme, 
			puis le démarrer.
			Apres on demande si
			l'utilisateur veut regen 
			ses pv avec sa perso_nourriture
			*/
			
			sleep(2);
			printf("Le touple s'en va sans degat avec %d de vie !\n", mob_touple_pv);
			sleep(1);
			printf("Veux-tu en savoir plus sur cette bete ferosse ?\n");
			scanf("%d", &user_yon);
			if (user_yon == 1)
			{
				sleep(1);
				printf("Chargement...\n");
				sleep(1);
				printf("....\n");
				sleep(1);
				printf(".....\n");
				sleep(1);
				printf("Le touple est une creature feroce qui va a la rencontre des joueurs pour les affronter,\nau plus pronfond de lui se cache des sentiments de regret... ce mot ne devrais meme pas existe !\nmais bon c'est comme les ratata, c'est le monstre basique !\nA present quelques caracteristiques sur le touple :\n\n- Pv :50\n- Type : ocean\n- Sexe : male\n\nVoila, maintenant tu t'y connais un peu plus sur le touple !\n");
			}
			else
			{
				printf("Ok, dommage tu pourrais en apprendre plus !\n");
				sleep(1);
			}
		break;
		case 2:
			//Rebrousse chemin
			sleep(1);
			printf("Ok, mais le touple est triste... il s'enfuit\n");
		break;
		default:
			/*
			Début du
			mesage d'erreur !
			*/
    		printf("/!\ERROR/!\\nCode error : 1\nYou did not enter a correct number, you must \n restart the program!\n");
    		sleep(3);
    		printf("Fermeture des fichiers ouvert ?\n");
    		sleep(1);
    		if (fichier != NULL)
    		{
    			printf("Tentative de redemarrage des fichiers...\n");
    			sleep(2);
    			printf("0  - [..........]\n");
    			sleep(1);
    			printf("12 - [|.........]\n");
    			sleep(1);
    			printf("24 - [||........]\n");
    			sleep(1);
    			printf("30 - [|||.......]\n");
    			sleep(1);
    			printf("46 - [||||......]\n");
    			sleep(1);
    			printf("51 - [|||||.....]\n");
    			sleep(1);
    			printf("68 - [||||||....]\n");
    			sleep(1);
    			printf("68 - [||||||....]\n");
    			sleep(1);
    			printf("70 - [|||||||...]\n");
    			sleep(1);
    			printf("82 - [||||||||..]\n");
    			sleep(1);
    			printf("89 - [||||||||..]\n");
    			sleep(1);
    			printf("90 - [|||||||||.]\n");
    			sleep(1);
    			printf("95 - [|||||||||.]\n");
    			sleep(1);
    			printf("96 - [|||||||||.]\n");
    			sleep(1);
    			printf("98 - [|||||||||.]\n");
    			sleep(1);
    			printf("99 - [|||||||||.]\n");
    			sleep(1);
    			printf("99 - [|||||||||.]\n");
    			sleep(1);
    			printf("100 -[||||||||||]\n");
    			sleep(1);
    			printf("Terminez !\n");
    			//debut de la 2eme verif de fichier != NULL
    			if (fichier != NULL)
    			{
    				if (user_tutoie == 1) //la variable tutoie sert une fois au moins ;=)
    				{
    					printf("Recuperation termine ! Tu as eu de la chance !\n");
					}
    				else
    				{
    					printf("Recuperation termine ! Vous avez eu de la chance !\n");
					}
				}
			}
			else
			{
				printf("Les fichiers ne peuvent pas etre fermer donc il faut que tu \nredemarre le programme mais ne t'inquite pas il va redemarrer tout seul !\n");
			}
    		printf("OK !");
    		sleep(1);
    		printf("The program will close automatically in 3 seconds ...\n");
    		sleep(1);
    		printf("2...\n");
    		sleep(1);
    		printf("1...\n");
    		sleep(1);
    		printf("0...\n");
    		exit(1);
    		
    		/*
			Fin du
			message d'erreur !
			*/
		break;
	}
	sleep(3); //la on sort avec un sleep	
	
	/*
	Suite des choses, 
	donc là on passé 
	le cap des 400 
	lignes mais la 
	on va faire le 
	système de récolte 
	de bois, pour 
	pouvoir récolter 
	du bois pour 
	pouvoir crafter 
	des outils, 
	arme, etc...
	*/
	
	printf("Maintenant, on vas devoir aller cherchez du bois dans la forêt !");
	
	fclose(fichier); //fermeture des fichiers
	
    return 0;
    
}
