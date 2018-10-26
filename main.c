#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//On déclare nos 4 variables.

float a, b, R;
int c;
char ch;


	float somme(float a, float b) {		// Fonction relative à la somme.
		R = a + b;
		return R;
	}

	float difference(float a, float b) {//Fonction relative à la différence.
		R = a - b;
		return R;
	}

	float produit(float a, float b) {	//Fonction relative au produit.
		R = a*b;
		return R;
	}

	float quotient(float a, float b) {	//Fonction relative au quotient.
		R = a / b;
		return R;
	}

	float factorielle(int n) { // fonction relative à la factorielle "a!".

		//*************Méthode par récursivité*****************

		int r;

		if (n == 0) {
			r = 1;
		}
		else {
			r = n*factorielle(n - 1);
		}
		return r;

		//*****************************************************


		//*****************Méthode for*************************

		/*a++;
		R = 1;
		for (size_t i = 1; i < a; i++)
		{
			R = i*R;
		}*/

		//****************************************************

	}

	float puissance(float a, float p) { // Fonction relative à la puissance p (utilisee dans la racine nieme).
		float r = 1;
		for (size_t i = 0; i < p; i++) {
			r = a*r;
		}
		return r;
	}

	float racine_carre(float A) {		//Fonction relative à la racine carrée.
		R = 1;
		for (size_t i = 0; i < 152; i++) {
			R = ((R + (A / R)) / 2);
		}
		return R;
	}

	float racine_nieme(float A, float n) {	//Fonction relative à la racine nieme.
		R = 1;
		int p = n - 1;
		for (size_t i = 0; i < 1500; i++) {
			R = (1 / n)*((n - 1)*R + A / puissance(R, p));
		}
		return R;
	}



int main(){

	do {		//On fait une boucle while tant que o!=0

		printf("Quelle operation voulez-vous effectuer?\n 1-Une addition (a+b).\n 2-Une soustraction (a-b).\n 3-Une multiplication (a*b).\n 4-Une division (a/b).\n 5-Une puissance (a^b).\n 6-Une factorielle (a!).\n 7-Une racine carree (RACINE(a)).\n 8-Racine nieme (a^(1/b)).\n 0-Quitter le Programme.\n\n Choix: ");
		scanf("%d", &c);

		if (c < 9 && c > 0) {		//On ne demande que les variable si c est compris entre 0 et 7.

			printf("Saisir la valeur de a: ");
			scanf("%f", &a);

			if (c != 6 && c != 7){ // La racine et la factorielle n'ont pas besoin de 2 entrées.
				printf("Saisir la valeur de b: ");
				scanf("%f", &b);
				printf("\n\n");  //Retour à la ligne après la saisie de la valeur
			}
		}

		switch (c)
		{
		case 0:		//Le programme s'éteint
			printf("Extinction du programme...\n\n\n");
			break;
		case 1:		// Addition
			R = somme(a, b);
			printf("La somme est %f\n\n\n\n", R);
			break;
		case 2:		//Soustraction
			R = difference(a, b);
			printf("La difference est %f\n\n\n\n", R);
			break;
		case 3:		//Multiplication
			R = produit(a, b);
			printf("Le produit est %f\n\n\n\n", R);
			break;
		case 4:		//Division
			if (b == 0) {	//Division par 0
				printf("Erreur, division par 0 impossible !\n\n\n\n");
			}
			else {			//div
				R = quotient(a, b);
				printf("Le quotient est %f\n\n\n\n", R);
			}
			break;
		case 5:		//Puissance n.
			R = puissance(a, b);
			printf("Le resultat est %f", R);
			break;
		case 6:		//Factorielle
			R = factorielle(a);
			printf("La factorielle est %f\n\n\n\n", R);
			break;
		case 7:		//Racine carrée
			R = racine_carre(a);
			printf("La racine carrée de %f est %f\n\n\n\n", a, R);
			break;
		case 8:		//Racine nieme
			R = racine_nieme(a, b);
			printf("La racine %f eme de %f est %f\n\n\n\n", b, a, R);
			break;


		default:
			printf("Erreur: variable erronee.\n\n\n\n");
			break;

		}

		ch = NULL;	//On "reset" la chaine de caractères.

		//**************************************************************
		//Passer à l'étape suivante quand une touche est pressée et pas avant.

		printf("Pressez sur n'importe quelle touche pour continuer.\n\n\n\n");
		while (ch == NULL) {
			ch = _getch();
		}

		//**************************************************************


	} while (c != 0);

	return 0;
}
