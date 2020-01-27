#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
	
	//Monstre et autres
		int pvmonstre = 100;
		int attaquejoueur = 10;
		int attaquemonstre = 10;
		int decisionM = 0;
		int PMmonstre = 10;
		int poisonM = 0;
		int nombreMonstres = 1;
	
	
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
		
		
	srand(time(NULL));

	while(pvmonstre>0 ){
		
		
		//Tour du Tank
		if (pvmonstre>0 && pvTank>0)
			
		printf ("Tour du Tank :Voulez vous attaquer (1) vous defendre (2) ou provoquer les monstres (3) ?\n");
		scanf("%d",&decisionT);
		decisionM =((rand()%3)+1);
		
		
			
			
			if(decisionM == 3 && PMmonstre<3){
				(decisionM =((rand()%2)+1));
				}
		
			if (decisionM == 3 && PMmonstre>=3){
			printf("Le monstre vous empoisonne.\n");
			poisonM ++;
			PMmonstre = PMmonstre -3;
				}
				
			if (decisionM == 2){
			printf("Le monstre se defend.\n");
			attaquejoueur = attaquejoueur/4;		
				}
			
			if (decisionT == 2){
			printf("Vous decidez de vous defendre.\n");
			attaquemonstre = attaquemonstre/4;
				}
		
			if(decisionT == 1){
			printf("Vous decidez de l'attaquer.\n");
			pvmonstre = pvmonstre - attaquejoueur;
				}	
				
			if(decisionM == 1){
			printf("Le monstre vous attaque.\n");
			pvTank = pvTank - attaquemonstre;
				}
			
			if(decisionT == 3 ){
			printf ("Vous provoquez les monstres\n");
			provoc = 1;
				}	
			
			printf ("Le monstre a %d points de vie.\n", pvmonstre);
			printf ("Il vous reste %d points de vie.\n", pvTank);
			
			
			
			
			
		//Tour de l'Alchimiste
		if (pvmonstre>0 && pvAlch>0){
			
		
		printf ("Tour de l'alchimiste : Voulez vous attaquer (1) vous defendre (2) empoisonner les monstres (3) ou utiliser un antidote (4)?\n");
		scanf("%d",&decisionA);
		decisionM =((rand()%3)+1);
		
		
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
		
		
			if(decisionM == 3 && PMmonstre<3){
				(decisionM =((rand()%2)+1));
				}
		
			if (decisionM == 3 && PMmonstre>=3){
			printf("Le monstre vous empoisonne.\n");
			poisonM ++;
			PMmonstre = PMmonstre -3;
				}
		
			
			if (decisionM == 2){
			printf("Le monstre se defend.\n");
			attaquejoueur = attaquejoueur/4;		
				}
		
			if (decisionA == 2){
			printf("Vous decidez de vous defendre.\n");
			attaquemonstre = attaquemonstre/4;
			
				}
		
			if(decisionA == 1){
			printf("Vous decidez de l'attaquer.\n");
			pvmonstre = pvmonstre - attaquejoueur;
			
				}
			
			if(decisionM == 1 && provoc == 1){
			printf("Le monstre attaque le Tank.\n");
			pvTank = pvTank - attaquemonstre;
			
				}
			if(decisionM == 1 && provoc == 0){
			printf("Le monstre vous attaque.\n");
			pvAlch = pvAlch - attaquemonstre;
			
				}
		
			if(poisonA >= 1){
			pvmonstre = pvmonstre - poisonA;
				}
			
			if(poisonM >= 1){
			pvAlch = pvAlch - poisonM;
				}
			
			printf ("Le monstre a %d points de vie.\n", pvmonstre);
			printf ("Il vous reste %d points de vie.\n", pvAlch);
			printf ("Il vous reste %d points de mana.\n", PMAlch);
		}
		
			
			
	
		
		
	if (PMAlch<10){
		PMAlch++;
	}
	
	if (PMmonstre<10){
		PMmonstre++;
	}
	
	
	attaquemonstre = 10 * nombreMonstres;
	attaquejoueur = 10;
	provoc =0;
		
	}	
	
	
	


	return 0;
}
