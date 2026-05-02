// Algorithme qui calcule S=1!+2!+3!+...+N! avec N à saisir sur le clavier.
/*
	ALgorithme:
	Variable:
	n,i,j,fact,s,: entier
	DEBUT
	  	AFFICHER("Entrer la valeur de N:")
	  	LIRE(N)
	 	s PREND LA VALEUR DE 0
	    POUR i DE À n FAIRE
			fact PREND LA VALEUR DE 1
			POUR j DE 1 À i FAIRE
	            fact PREND LA VALEUR DE fact*j
			FIN POUR
	   		s PREND LA VALEUR DE s+fact
	   	FIN POUR
	   	AFFICHER("1!+2!+...+n!=  ",s)
	FIN
*/ 
#include<stdio.h>
#include<math.h>
int recuper(int n);
void calculer(int n,int i,int j,int fact,int s);

int recuper(int n)
{
    printf("entier la valeur de N\n");
    printf("\tN= ");
    scanf("\t%d",&n);
    return (n);
}
void calculer(int n,int i,int j,int fact,int s)
{
	printf("1!");
	s=1;
	for(i=2;i<=n;i++)
	{  
		fact=1;
		for(j=1;j<=i;j++)
		{
 			fact=fact*j;
		}
		s=s+fact;
		printf(" + ");
		printf("%d!",i);
		
	}
	printf(" = %d\n",s);
}
int main()
{
	int n,i,j,fact,s;
	n=recuper(n);
	calculer(n,i,j,fact,s);
	return (0);
}
