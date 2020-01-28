#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
	
	//Monstre et autres
		int pvmonstre2 = 70;
		int attaquejoueur1 = 10;
		int attaquejoueur2 = 10;
		int attaquemonstre = 10;
		int decisionM = 0;
		int PMmonstre = 10;
		int poisonM = 0;
		int Monstre = 1;
		int pvmonstre1 =100;
		int attaquemonstre2 = 10;
		int decisionM1 = 0;
		int decisionM2 = 0;
		int ExperienceT = 0;
		int lvlT = 0;
	
	//Stats Alchimiste
		int antidote = 0;
		int poisonA = 0;
		int pvAlch = 100;
		int PMAlch = 10;
		int decisionA = 0;
		
	//Stats Tank
		int pvTank =130;
		int provoc = 0;
		int decisionT = 0;
		
	//Stats Healer
		int pvHealer = 100;
		int decisionH = 0;
		int Soin = 0;
		
	//Stats Mage
		int pvMage = 100;
		int PMMage = 10;
		int decisionW = 0;
        int glace1 = 0;
        int glace2 = 0;
		
		
	srand(time(NULL));

	while(pvmonstre1>0 ){
		
	
        
		//Tour du Mage
		if ( pvMage>0){
			
		printf ("Tour du Mage :Voulez vous attaquer (1) vous defendre (2) ou glacer les monstres (3) ?\n");
		scanf("%d",&decisionW);
		decisionM =((rand()%3)+1);
		
		if(decisionW == 3 && PMMage<5){
			printf ("Vous n'avez plus de mana\n");
            printf ("Voulez vous attaquer (1) ou vous vous defendre (2)\n");
				scanf("%d",&decisionW);
				}	
		if (decisionW == 3 && PMMage>=5){
			
			printf("Quelmonstre voulez-vous glacer ? (1) ou (2)\n");
			scanf("%d",&Monstre);
			
			if(Monstre == 1){
					printf("Vous decidez de geler le monstre 1.\n");
					glace1 = 1;
				}	
				if(Monstre == 2 ){
					printf("Vous decidez de geler le monstre 2.\n");
					glace2 = 1;
				}
			printf("Vous avez glacer le monstre 1.\n");
			PMMage = PMMage - 5;
			}	
		
			if (decisionM == 3 ){
			printf("Le monstre vous empoisonne.\n");
			poisonM ++;
			
				}
				
			if (decisionM == 2){
			printf("Le monstre se defend.\n");
			attaquejoueur2 = attaquejoueur2 /4;		
				}
			
			if (decisionW == 2){
			printf("Vous decidez de vous defendre.\n");
			attaquemonstre = attaquemonstre/4;
				}
		
            if(decisionW == 1){
			printf("Vous decidez d'attaquer.\n");
			printf("Quelmonstre voulez-vous attaquer ? (1) ou (2)\n");
			scanf("%d",&Monstre);
			if (decisionM2 == 2){
					printf("Le monstre 2 se defend.\n");
					attaquejoueur2 = attaquejoueur2 /4;		
				}
			if (decisionM1 == 2){
					printf("Le monstre 1 se defend.\n");
					attaquejoueur1 = attaquejoueur1 /4;		
				}
			
				if(Monstre == 1){
					printf("Vous decidez d'attaquer le monstre 1.\n");
					pvmonstre1 = pvmonstre1 - attaquejoueur1;
				}	
				if(Monstre == 2 ){
					printf("Vous decidez d'attaquer le monstre 2.\n");
					pvmonstre2 = pvmonstre2 - attaquejoueur2;
				}
			}
    
			if(decisionM1 == 1 && provoc == 1 && glace1 ==0 ){
			printf("Le monstre attaque le Tank.\n");
			pvTank = pvTank - attaquemonstre;
				}
				
			if(decisionM1 == 1 && provoc == 0 && glace1 == 0 ){
			printf("Le monstre vous attaque.\n");
			pvMage = pvMage - attaquemonstre;
				}
				
			if(decisionM2 == 1 && provoc == 1 &&glace2 == 0){
			printf("Le monstre attaque le Tank.\n");
			pvTank = pvTank - attaquemonstre;
				}
				
			if(decisionM2 == 1 && provoc == 0 && glace2 == 0 ){
			printf("Le monstre vous attaque.\n");
			pvMage = pvMage - attaquemonstre;
				}
				
			if(decisionM2 == 1 && glace2 == 1 ){
			printf("Le monstre 2 est gelé.\n");
			
				}
			
			if(decisionM1 == 1 && glace2 == 1 ){
			printf("Le monstre 1 est gelé.\n");
			
				}
            

            
            	if (decisionM1 == 3 ){
			printf("Le monstre 1 vous empoisonne.\n");
			poisonM ++;
				}
				
			if (decisionM2 == 3 ){
			printf("Le monstre 2 vous empoisonne.\n");
			poisonM ++;
				}
				
				if(poisonA >= 1){
			pvmonstre1 = pvmonstre1 - poisonA;
			pvmonstre2 = pvmonstre2 - poisonA;
				}
			
			if(poisonM >= 1){
			pvAlch = pvAlch - poisonM;
			pvHealer = pvHealer - poisonM;
			pvTank = pvTank - poisonM;
			pvMage = pvMage - poisonM;
				}
            
            printf ("Le monstre 1 a %d points de vie.\n", pvmonstre1);
			printf ("Le monstre 2 a %d points de vie.\n", pvmonstre2);
			printf ("Il vous reste %d points de vie.\n", pvMage);
            printf ("Il vous reste %d points de mana.\n", PMMage);
			attaquemonstre = 10 ;
			attaquejoueur1 = 10;
			attaquejoueur2 = 10;
			
		}
		
		
		
		
		
		
		
		//Tour du Tank
		if (pvTank>0){
			
		printf ("Tour du Tank :Voulez vous attaquer (1) vous defendre (2) ou provoquer les monstres (3) ?\n");
		scanf("%d",&decisionT);
		decisionM1 =((rand()%3)+1);
		decisionM2 =((rand()%3)+1);

			
			if (decisionT == 2){
			printf("Vous decidez de vous defendre.\n");
			attaquemonstre = attaquemonstre /4;
				}
				
				
			if(decisionT == 1){
			printf("Vous decidez d'attaquer.\n");
			printf("Quelmonstre voulez-vous attaquer ? (1) ou (2)\n");
			scanf("%d",&Monstre);
				if (decisionM2 == 2){
					printf("Le monstre 2 se defend.\n");
					attaquejoueur2 = attaquejoueur2 /4;		
				}
				if (decisionM1 == 2){
					printf("Le monstre 1 se defend.\n");
					attaquejoueur1 = attaquejoueur1 /4;		
				}
				
				if(Monstre == 1){
					printf("Vous decidez d'attaquer le monstre 1.\n");
					pvmonstre1 = pvmonstre1 - attaquejoueur1;
				}	
				if (Monstre == 2 ){
					printf("Vous decidez d'attaquer le monstre 2.\n");
					pvmonstre2 = pvmonstre2 - attaquejoueur2;
				}
			}
			if(decisionM1 == 1 && glace1 == 0){
			printf("Le monstre 1 vous attaque.\n");
			pvTank = pvTank - attaquemonstre;
				}
				
			if(decisionM2 == 1 && glace1 == 0){
			printf("Le monstre 2 vous attaque.\n");
			pvTank = pvTank - attaquemonstre2;
				}
				
			if(decisionM2 == 1 && glace2 == 1 ){
			printf("Le monstre 2 est gelé.\n");
			
				}
			
			if(decisionM1 == 1 && glace2 == 1 ){
			printf("Le monstre 1 est gelé.\n");
			
				}
				
			if(decisionT == 3 ){
			printf ("Vous provoquez les monstres\n");
			provoc = 1;
				}	
				
				if (decisionM1 == 3){
			printf("Le monstre 1 vous empoisonne.\n");
			poisonM ++;
				}
				
			if (decisionM2 == 3){
			printf("Le monstre 2 vous empoisonne.\n");
			poisonM ++;
				}
			
			if(poisonA >= 1){
			pvmonstre1 = pvmonstre1 - poisonA;
			pvmonstre2 = pvmonstre2 - poisonA;
				}
			
			if(poisonM >= 1){
			pvAlch = pvAlch - poisonM;
			pvHealer = pvHealer - poisonM;
			pvTank = pvTank - poisonM;
			pvMage = pvMage - poisonM;
				}
			
			printf ("Le monstre 1 a %d points de vie.\n", pvmonstre1);
			printf ("Le monstre 2 a %d points de vie.\n", pvmonstre2);
			printf ("Il vous reste %d points de vie.\n", pvTank);
			attaquemonstre = 10 ;
			attaquejoueur1 = 10;
			attaquejoueur2 = 10;
		}
			
			
			
		//Tour de l'Alchimiste
		if ( pvAlch>0){
			
		
		printf ("Tour de l'alchimiste : Voulez vous attaquer (1) vous defendre (2) empoisonner les monstres (3) ou utiliser un antidote (4)?\n");
		scanf("%d",&decisionA);
		decisionM1 =((rand()%3)+1);
		decisionM2 =((rand()%3)+1);
		
			if (decisionA == 4){
			printf("Vous utilisez votre antidote, vous n'etes plus empoisonne \n");
			poisonM = 0;
				}
		
			if(decisionA == 3 && PMAlch<3){
				printf ("Vous n'avez plus de mana\n");
				printf ("Voulez vous attaquer (1) ou vous vous defendre (2)\n");
				scanf("%d",&decisionA);
				}	
			
			if (decisionA == 3 && PMAlch>=3){
			printf("Vous avez empoisonne le monstre.\n");
			poisonA ++;
			PMAlch = PMAlch -3;
				}
				
			if (decisionA == 2){
			printf("Vous decidez de vous defendre.\n");
			attaquemonstre = attaquemonstre/4;
			
				}
		
			if(decisionA == 1){
			printf("Vous decidez d'attaquer.\n");
			printf("Quelmonstre voulez-vous attaquer ? (1) ou (2)\n");
			scanf("%d",&Monstre);
			if (decisionM2 == 2){
					printf("Le monstre 2 se defend.\n");
					attaquejoueur2 = attaquejoueur2 /4;		
				}
			if (decisionM1 == 2){
					printf("Le monstre 1 se defend.\n");
					attaquejoueur1 = attaquejoueur1 /4;		
				}
			
				if(Monstre == 1){
					printf("Vous decidez d'attaquer le monstre 1.\n");
					pvmonstre1 = pvmonstre1 - attaquejoueur1;
				}	
				if(Monstre == 2 ){
					printf("Vous decidez d'attaquer le monstre 2.\n");
					pvmonstre2 = pvmonstre2 - attaquejoueur2;
				}
			}
			
			if(decisionM1 == 1 && provoc == 1 && glace1 == 0){
			printf("Le monstre 1 attaque le Tank.\n");
			pvTank = pvTank - attaquemonstre;
				}
				
			if(decisionM1 == 1 && provoc == 0 && glace1 == 0){
			printf("Le monstre 1 vous attaque.\n");
			pvAlch = pvAlch - attaquemonstre;
				}
				
			if(decisionM2 == 1 && provoc == 1 && glace2 == 0){
			printf("Le monstre 2 attaque le Tank.\n");
			pvTank = pvTank - attaquemonstre;
				}
				
			if(decisionM2 == 1 && provoc == 0 && glace2 == 0){
			printf("Le monstre 2 vous attaque.\n");
			pvAlch = pvAlch - attaquemonstre;
				}
				
			if(decisionM2 == 1 && glace2 == 1 ){
			printf("Le monstre 2 est gelé.\n");
			
				}
			
			if(decisionM1 == 1 && glace2 == 1 ){
			printf("Le monstre 1 est gelé.\n");
			
				}
		
			if(poisonA >= 1){
			pvmonstre1 = pvmonstre1 - poisonA;
			pvmonstre2 = pvmonstre2 - poisonA;
				}
			
			if(poisonM >= 1){
			pvAlch = pvAlch - poisonM;
			pvHealer = pvHealer - poisonM;
			pvTank = pvTank - poisonM;
			pvMage = pvMage - poisonM;
				}
				
				if (decisionM1 == 3 ){
			printf("Le monstre 1 vous empoisonne.\n");
			poisonM ++;
				}
				
			if (decisionM2 == 3 ){
			printf("Le monstre 2 vous empoisonne.\n");
			poisonM ++;
				}
			
			printf ("Le monstre 1 a %d points de vie.\n", pvmonstre1);
			printf ("Le monstre 2 a %d points de vie.\n", pvmonstre2);
			printf ("Il vous reste %d points de vie.\n", pvAlch);
			printf ("Il vous reste %d points de mana.\n", PMAlch);
			attaquemonstre = 10 ;
			attaquejoueur1 = 10;
			attaquejoueur2 = 10;
		}
		
		
		//Tour du Healer
		if (pvTank>0){
			
		printf ("Tour du Healer :Voulez vous attaquer (1) vous defendre (2) ou soigner un allié (3) ?\n");
		scanf("%d",&decisionH);
		decisionM1 =((rand()%3)+1);
		decisionM2 =((rand()%3)+1);

			
			if (decisionH == 2){
			printf("Vous decidez de vous defendre.\n");
			attaquemonstre = attaquemonstre /4;
				}
				
				
			if(decisionH == 1){
			printf("Vous decidez d'attaquer.\n");
			printf("Quelmonstre voulez-vous attaquer ? (1) ou (2)\n");
			scanf("%d",&Monstre);
				if (decisionM2 == 2){
					printf("Le monstre 2 se defend.\n");
					attaquejoueur2 = attaquejoueur2 /4;		
				}
				if (decisionM1 == 2){
					printf("Le monstre 1 se defend.\n");
					attaquejoueur1 = attaquejoueur1 /4;		
				}
				
				if(Monstre == 1){
					printf("Vous decidez d'attaquer le monstre 1.\n");
					pvmonstre1 = pvmonstre1 - attaquejoueur1;
				}	
				if (Monstre == 2 ){
					printf("Vous decidez d'attaquer le monstre 2.\n");
					pvmonstre2 = pvmonstre2 - attaquejoueur2;
				}
			}
			if(decisionM1 == 1 && provoc == 0 && glace1 == 0){
			printf("Le monstre 1 vous attaque.\n");
			pvHealer = pvHealer - attaquemonstre;
				}
			
			if(decisionM1 == 1 && provoc == 1 && glace1 == 0){
			printf("Le monstre attaque le Tank.\n");
			pvTank = pvTank - attaquemonstre;
				}
				
			if(decisionM2 == 1 && provoc ==0 && glace2 == 0){
			printf("Le monstre 2 vous attaque.\n");
			pvHealer = pvHealer - attaquemonstre;
				}
				
			if(decisionM2 == 1 && provoc == 1 && glace2 == 0){
			printf("Le monstre 2 attaque le Tank.\n");
			pvTank = pvTank - attaquemonstre;
				}
				
			if(decisionM2 == 1 && glace2 == 1 ){
			printf("Le monstre 2 est gelé.\n");
			
				}
			
			if(decisionM1 == 1 && glace2 == 1 ){
			printf("Le monstre 1 est gelé.\n");
			
				}	
				
			if(decisionH == 3 ){
			printf ("Qui voulez vous soigner? Vous (1), Le Tank (2), L'alchimiste (3), ou le mage (4)\n");
			scanf ("%d",&Soin);
			
				if (Soin == 1){
					pvHealer = pvHealer + 15 ;
					if ( pvHealer >100)
						pvHealer = 100;
				}
				if (Soin == 2){
					pvTank = pvTank + 15 ;
					if ( pvTank >100)
						pvTank = 100;
				}
				if (Soin == 3){
					pvAlch = pvAlch + 15 ;
					if ( pvAlch >100)
						pvAlch = 100;
				}
				if (Soin == 4){
					pvMage = pvMage + 15 ;
					if ( pvMage >100)
						pvMage = 100;
				}
				else {
					printf ("Qui voulez vous soigner? Vous (1), Le Tank (2), L'alchimiste (3), ou le mage (4)\n");
			scanf ("%d",&Soin); 
				}
			
			}	
				
				if (decisionM1 == 3){
			printf("Le monstre 1 vous empoisonne.\n");
			poisonM ++;
				}
				
			if (decisionM2 == 3){
			printf("Le monstre 2 vous empoisonne.\n");
			poisonM ++;
				}
				
			if(poisonA >= 1){
			pvmonstre1 = pvmonstre1 - poisonA;
			pvmonstre2 = pvmonstre2 - poisonA;
				}
			
			if(poisonM >= 1){
			pvAlch = pvAlch - poisonM;
			pvHealer = pvHealer - poisonM;
			pvTank = pvTank - poisonM;
			pvMage = pvMage - poisonM;
				}
			
			printf ("Le monstre 1 a %d points de vie.\n", pvmonstre1);
			printf ("Le monstre 2 a %d points de vie.\n", pvmonstre2);
			printf ("Il vous reste %d points de vie.\n", pvHealer);
			attaquemonstre = 10 ;
			attaquejoueur1 = 10;
			attaquejoueur2 = 10;
		}
			
			
	
		
		
	if (PMAlch<10){
		PMAlch++;
	}
	
	if (PMMage<10){
		PMMage++;
	}
	
	if (PMmonstre<10){
		PMmonstre++;
	}
	
	
	attaquemonstre = 10 ;
	attaquejoueur1 = 10;
	attaquejoueur2 = 10;
	provoc =0;
	glace1 =0;
	glace2 = 0;
	
	if(pvmonstre1<=0){
		printf ("vous gagnez 5 point d'experience\n");
		ExperienceT = ExperienceT + 5;
		pvmonstre1=100;
		if (ExperienceT >=20 ){
			printf("vous gagnez un niveau !");
			lvlT++ ;
			ExperienceT = ExperienceT - 20;
		}
		
	}
	if(pvmonstre2<=0){
		printf ("vous gagnez 5 point d'experience\n");
		ExperienceT = ExperienceT + 5;
		pvmonstre2=70;
		if (ExperienceT >=20 ){
			printf("vous gagnez un niveau !\n");
			lvlT++ ;
			ExperienceT = ExperienceT - 20;
		}
		
	}
	}	
	
	
	


	return 0;
}
