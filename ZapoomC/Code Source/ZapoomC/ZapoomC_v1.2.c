/*
----------------------------------------------------------------------------------
Devloppe par $moony
Le ?? Janvier 2021 a ??h??
Sauvergarde de tout les fichiers sur github : https://github.com/moony404/ZapoomC
----------------------------------------------------------------------------------
*/

//Directives de preprocesseur

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//Compiler version TDM-GCC 4.9.2 64-bit Release

int main()
{


    //variable
    	
    //Switch
    
	int sw;
    
    //mob_touple
    
    int mob_touple = 1;
    signed char mob_touple_pv = 50;
    signed char mob_touple_drop;
    
    //Generateur de nombre aleatoire copier coller du site du zero (openclassrooms)
    	//constant MAX et MIN
    	
    	const int MAX = 5, MIN = 1;
    	//generateur d'aleatoire
    	
    	srand(time(NULL));
    	mob_touple_drop = (rand() % (MAX - MIN + 1)) + MIN;
    
    //user
    
    int user_yon;
    int user_login = 1;
    signed char user_request_firstmob = 0;
    signed char user_request_regenpv = 1;
    char user_prenom[50];
    char user_pseudoAndPassword[50];
    char user_password[10];
    long user_score;
	    
    //perso
    
    int perso_inv_bois = 0;
    int perso_inv_planches = 0;
    int perso_inv_caillou = 0;
    int perso_inv_fil = 0;
    int perso_inv_baton = 0;
    int perso_inv_carteunoreverse = 0; //pour le fun
    int perso_inv_laine = 0;
    int perso_inv_toupli = 0; //le toupli est un objet (c'est de la chair de touple (le drop)), il y a 1 chance sur 5 qu'il en drop
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
    printf("Desoler si les accents ne s'affiche pas,\nceci est lie a un bug, il faudra vous y faire, quelque fois il y a ER pour demarquer les accents sinon des fois\non peut comprendre d'autre mots. Merci de votre comphreensions.\n\n");
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
		Debut du
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
    		
    	break;
    	
    	/*
		Fin du
		message d'erreur !
		*/
    }
	
    printf("Hey !\n");
    sleep(1);
    //retrait le 10/11/2021 du systeme de "tutoiement"
	printf("\n\n\n\n\n\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("                  ---Login---\nVeut tu te creer un compte (1),\nou te connecter a un compte existants(2), ou quitter (3)? \nTape le chiffre qui te corresponds et appuies sur entree !\n");
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
    		printf("Ok, :(\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
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
			printf("Ok voici un court debrif sur ce que tu doit apprendre rapidement :\n- ZapoomC est un jeu de combat en console (pour l'intant).\n- Montes en niveau pour pouvoir debloquer de nouveau sort et te battre contre des monstres (appele mob).\n- Si tu as besoin d'aide rejoint notre serveur discord, lien : https://discord.gg/zMP9aBZJ5u\n\n");
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
    	//on peut ecrire dans le fichier c'est bon
    	fprintf(fichier, "Tu as maintenant :\n- %d de nourriture\n- %d d'eau\n- %d de force\n- %d de level\n- %d de vie\n", perso_nourriture, perso_eau, perso_force, perso_lvl, perso_pv);
	}
	else
	{
		/*
		Debut du
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
    		printf("Terminee !\n");
    		//debut de la 2eme verif de fichier != NULL
    		if (fichier != NULL)
    		{
    			
			}
		}
			else
			{
				printf("Les fichiers ne peuvent pas etre fermer donc il faut que tu \nredemarre le programme mais ne t'inquite pas il va redemarrer tout seul !\n");
				sleep(3);
			}
    		printf("OK !\n");
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
	}
	
	//sleep(1);
	sleep(1);
	//end of sleep(1);
	
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
	creer est en haut du
	programme (l.46, col.5)
	*/
	
	scanf("%d", &user_request_firstmob);
	switch (user_request_firstmob)
	{
		case 1:
			//Attaque & demande d'attaques avec un switch
			sleep(1);
			printf("Ok, mais.. il semblerait que tu n'a pas d'arme !\nTu pert donc 5 pv, car le touple t'as attaque !\nMais comme tu as voulus attaquer le touple,\nil t'en est reconnaisant et te donne donc + 2 de force !\n");
			perso_force = perso_force + 2;

			sleep(5);
			perso_pv = perso_pv - 5;
			printf("Tu as maintenant %d points de vie !\n", perso_pv);
			sleep(3);
			
			/*
			Debut du systeme pour la regen qui a 137 ligne en comptant les comments...
			
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
						//le switch est deplace ici !
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
								printf("Ok tu as pris 1 pv -> (point de vie) en plus.\n");
								perso_pv = perso_pv + 1;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 2:
								printf("Ok tu as pris 2 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 2;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 3:
								printf("Ok tu as pris 3 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 3;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 4:
								printf("Ok tu as pris 4 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 4;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 5:
								printf("Ok tu as pris 5 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 5;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 6:
								printf("Ok tu as pris 6 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 6;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 7:
								printf("Ok tu as pris 7 pv -> (points de vie) en plus.\n");
								 perso_pv = perso_pv + 7;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 8:
								printf("Ok tu as pris 8 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 8;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 9:
								printf("Ok tu as pris 9 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 9;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							case 10:
								printf("Ok tu as pris 10 pv -> (points de vie) en plus.\n");
								perso_pv = perso_pv + 10;
								printf("Tu en as maintenant %d\n", perso_pv);
							break;
							default:
							/*
							Debut du
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
    							printf("Terminee !\n");
    							//debut de la 2eme verif de fichier != NULL
    							if (fichier != NULL)
    							{
    								
								}
								else
								{
									
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
								
							}
							break;
						}
					}
				}
				else
				{
					printf("Ok tu ne regeneras pas, attends la fin d'un autre combat pour regenerer !\n");
					//puis, plus rien
				}
			}
			else
			{
				//Rien ne se passe,
				//Aucune erreur,
				//On peut continuer,
				//Sans aucune frayeurs.
				//
				//$moony,
				//03/08/2021
			}
			
			/*
			Et voila, tout simplement 
			comme ceci en testant la 
			valeur de perso_pv, si 
			elle est < (infetieur) 
			e 1, si oui on stop le 
			jeu en disans qu'on a 
			perdu et on reexplique 
			que pour relancer un 
			partie il faut faire 
			Alt + F4 ou la croix 
			pour fermer un programme, 
			puis le demarrer.
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
				printf("Le touple est une creature feroce qui va a la rencontre des joueurs pour les affronter,\nau plus pronfond de lui se cache des sentiments de regret... ce mot ne devrais meme pas existe !\nmais bon c'est comme les ratata, c'est le monstre basique !\nA present quelques caracteristiques sur le touple :\n\n- Pv : 50\n- Type : ocean\n- Sexe : male\n\nVoila, maintenant tu t'y connais un peu plus sur le touple !\n");
			}
			else
			{
				printf("Ok, dommage tu aurais pu en apprendre plus !\n");
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
			Debut du
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
    			printf("Terminee !\n");
    			//debut de la 2eme verif de fichier != NULL
    			if (fichier != NULL)
    			{
    				
				}
				}
				else
				{
					printf("Les fichiers ne peuvent pas etre fermer donc il faut que tu \nredemarre le programme mais ne t'inquite pas il va redemarrer tout seul !\n");
				}
    			printf("OK !\n");
    			sleep(1);
    			printf("The program will close automatically in 3 seconds ...\n");
    			sleep(1);
    			printf("2...\n");
    			sleep(1);
    			printf("1...\n");
    			sleep(1);
    			printf("0...\n");
    			exit(1);
    			
		break;
		
		/*
		Fin du
		message d'erreur !
		*/
	}
	
	sleep(3); //la on sort avec un sleep	
	
	/*
	Suite des choses,
	donc le on passe
	le cap des 750
	lignes mais la
	on va faire le
	systeme de recolte
	de bois, pour
	pouvoir recolter
	du bois pour
	pouvoir crafter
	des outils,
	arme, etc...
	*/
	
	printf("Maintenant, on vas devoir aller cherchez du bois dans la foret !\n");
	sleep(3);
	printf("Oh, regarde la bas un arbre !");
	sleep(1);
	printf("\n");
	printf("      ||\n");
	printf("     |||| \n");
	printf("    ||||||\n");
	printf("      ||  \n");
	printf("      ||  \n");
	printf("      ||  \n");
	printf("_|_,__||____,__||___\n\n");
	sleep(2);
	printf("Tu le coupes au bout de 30 secondes *c'est archi long*\n");
	
	perso_inv_bois = perso_inv_bois + 4;
	
	//sleep de sortie des syst
	sleep(2);
	//suite du programme pour avpres le bois :
	printf("Tu vient d'avoir ta premiere buche de bois !\ndonc tu peut dorenavant fabriquer des objets avec ce bois !\n");
	printf("<><><><><>Menu De Fabriquation Simple<><><><><>\n\n\n\n");
	printf("Que veux-tu fabriquer ?\n\n");
	printf("1.Planches (x8)\n2.Baton (x4)\n\n");
	scanf("%d", &sw);
	switch (sw)
	{
		case 1:		
			sleep(2);
    		printf("0  - [..........]\n");
    		sleep(1);
    		printf("48 - [||||......]\n");
    		sleep(1);
    		printf("64 - [||||||....]\n");
    		sleep(1);
    		printf("73 - [|||||||...]\n");
    		sleep(1);
    		printf("100 -[||||||||||]\n");
    		sleep(1);
    		printf("Termine !\n\n\n\n");
    		perso_inv_planches = perso_inv_planches + 8;
    		sleep(1);
    		printf("Te voila avec des planches !\n");
    		sleep(1);
		break;
		case 2:
			sleep(2);
    		printf("0  - [..........]\n");
    		sleep(1);
    		printf("48 - [||||......]\n");
    		sleep(1);
    		printf("64 - [||||||....]\n");
    		sleep(1);
    		printf("73 - [|||||||...]\n");
    		sleep(1);
    		printf("100 -[||||||||||]\n");
    		sleep(1);
    		printf("Termine !\n\n\n\n");
    		perso_inv_baton = perso_inv_baton + 4;
    		sleep(1);
    		printf("Te voila avec des batons !\n");
    		sleep(3);
		break;
		default:
			/*
			Debut du
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
    			printf("Terminee !\n");
    			//debut de la 2eme verif de fichier != NULL
    			if (fichier != NULL)
    			{
    				
				}
				}
				else
				{
					printf("Les fichiers ne peuvent pas etre fermer donc il faut que tu \nredemarre le programme mais ne t'inquite pas il va redemarrer tout seul !\n");
				}
    			printf("OK !\n");
    			sleep(1);
    			printf("The program will close automatically in 3 seconds ...\n");
    			sleep(1);
    			printf("2...\n");
    			sleep(1);
    			printf("1...\n");
    			sleep(1);
    			printf("0...\n");
    			exit(1);
    			
		break;
		
		/*
		Fin du
		message d'erreur !
		*/
	}
	
	printf("\n\nBravo : premier succes deverouille :\nFabriquer son premiere objet !");
		
	//juste avoir de l'oxigene (2nd degres)
	printf("\n\n");
	
	//Premier succees
	printf("Bravo : succes deverouille :\nCouper sa premiere buche.\n\n");
	sleep(1);
	printf("\nC'est bon tu as casse ton premier arbre,\ntu as du remarquer qu'un succes est apparus !\n\n");
	sleep(4);
	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("-----------------------------------<><><><><>Debut Du Chapitre 2<><><><><>----------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n\n\n\n");
	sleep(5);
	
	printf("Voici le debut d'une 2eme grande aventure !\n\n\n\n");
	printf("Tu te balade dans la foret pour recuperer de bois\n(d'ailleurs tu viens d'en prendre, + 11),\n et la tu vois une horde de touple !\n");
	perso_inv_bois = perso_inv_bois + 11;
	sleep(2);
	printf("Tu les attaques (Ils sont 5)\n");
	sleep(2);
	printf("Victoireee !\n");
	printf("Tu es vraiment d'une intelligence surpuissante et de force incroyable !\n");
	printf("Tu reussi a les tues tous et tu recupere leurs drops (drops = leur objets), ce loot s'appelle le toupli !\nTu as 1 chance sur 5 d'en avoir en tuant 1 touple !\n\n");
	perso_inv_toupli = perso_inv_toupli + mob_touple_drop;
	printf("Tu en a eu : %d\n\n", perso_inv_toupli);
	
	//fin du chapitre 2
	
	//recalcule pour "backup_1.txt" :
	//Fichier pour "backup_1.txt", qui est donc la pour backup_2.txt.
	fichier = fopen("backup_2.txt", "w");
	if (fichier != NULL)
    {
    	//on peut ecrire dans le fichier c'est bon
    	fprintf(fichier, "Tu as maintenant :\n- %d de nourriture\n- %d d'eau\n- %d de force\n- %d de level\n- %d de vie\n", perso_nourriture, perso_eau, perso_force, perso_lvl, perso_pv);
	}
	else
	{
		/*
		Debut du
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
    		printf("Terminee !\n");
    		//debut de la 2eme verif de fichier != NULL
    		if (fichier != NULL)
    		{
    			//RIEN NE SE PASSE
			}
			}
			else
			{
				printf("Les fichiers ne peuvent pas etre fermer donc il faut que tu \nredemarre le programme mais ne t'inquite pas il va redemarrer tout seul !\n");
				sleep(3);
			}
    		printf("OK !\n");
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
	}
		
	//fin du recalcule des objets de perso_dans "backup_1.txt"
	
	//fin du jeu snif, snif ;(
	
	printf("Ca y est ! %s vient de finir ZapoomC\n_____________________________________________________________________\n", user_prenom);
    //comptage des variable ensemble (dans la variable score qui a ete cree a la ligne 50, et la collone 5)
    //user_score = :
    user_score = perso_inv_caillou + perso_inv_bois + perso_inv_fil + perso_inv_baton + perso_inv_planches + perso_inv_carteunoreverse + perso_inv_laine + perso_inv_toupli + perso_nourriture + perso_eau + perso_force + perso_lvl + perso_pv;
    //suite
	//fin, snif...
	printf("Ton score : %d, vous poyvez etre fier de vous jeune aventurier !\n", user_score);
	printf("_____________________________________________________________________\n"); //ligne d'espace
	printf("A la fin tu peut voir ton temps en seconde,\nil est marque juste apres le ''process exited after'' : <est la ton temps est marque>\n");
	
	fclose(fichier); //fermeture des fichiers
	
    return 0;
    
}
