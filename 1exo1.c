//Exercice 1: Algorithme demandant à l'utilisateur un nombre et l'informe en suite si ce nombre est positif ou negatif
/*
	  Algorithme:
	Variable:
	Var n:entier
	DEBUT
	   AFFICHER("Entrer la valeur de n")
	   LIRE(n)
	   SI n==0
		AFFICHER("n est nul")
	   SI NON
		SI n<0
		  AFFICHER("n est negatif")
		SI NON
		   AFFICHER("n est positif")
		FIN SI
	   FIN SI
	FIN	
*/
#include<stdio.h>
#include<math.h>
void si(float n);
float recuperer(float n);

float recuperer(float n)
{
        printf("entier la valeur de n\n");
	printf("\tn= ");
	scanf("\t%f",&n);
	return (n);
}
void si(float n)
{
        if(n==0)
	{	
		printf("n=0 est nul\n");
	}
	else if(n<0)
	{	
		printf("n=%f est negatif\n",n);
	}
	else
	{
		printf("n=%f est positif\n",n);
	}
}

int main()
{	
	float n;
	n=recuperer(n);
	si(n);
	return(0);
}
