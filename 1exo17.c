// Algorithme qui calcule S=1/1!+1/2!+1/3!+...+1/N! avec N à saisir sur le clavier.
/*
	ALgorithme:
	Variable:
	n,i,j,fact,s,: reel
	DEBUT
	   AFFICHER("Entrer la valeur de N:")
	   LIRE(N)
	   s PREND LA VALEUR DE 0
	   POUR i DE 1 À n FAIRE
		fact s PREND LA VALEUR DE 1
		POUR j DE 1 À i FAIRE
	        fact s PREND LA VALEUR DE fact*j
		FIN POUR
	   s s PREND LA VALEUR DE s+1/fact
	   FIN POUR
	   AFFICHER("1/1!+1/2!+...+1/n!=  ",s)
	FIN
*/ 
#include<stdio.h>
#include<math.h>
float recuper(float n);
void calculer(float n,int i,float j,float fact,float s);

float recuper(float n)
{
    printf("entier la valeur de N\n");
    printf("\tN= ");
    scanf("\t%f",&n);
    return (n);
}
void calculer(float n,int i,float j,float fact,float s)
{
printf("(1/1!)");
	s=1;
	for(i=2;i<=n;i++)
	{  
		fact=1;
		for(j=1;j<=i;j++)
		{
 			fact=fact*j;
		}
		s=s+1/fact;
		printf(" + ");
		printf("(1/%d!)",i);
	}
	printf(" = %f\n",s);
}

int main()
{
	float n,j,fact,s;
	int i;
	n=recuper(n);
	calculer(n,i,j,fact,s);
	return (0);
}
