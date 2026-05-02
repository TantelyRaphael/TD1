// Algorithme qui calcule le factorielle de N à saisir sur le clavier.
/*
		ALgorithme:
	Variable:
	Var N,i,fact: entier
	DEBUT
	   AFFICHER ("Entrer la valeur de N:")
	   LIRE(N)
	   fact PREND LA VALEUR DE 1
	   POUR i ALLANT DE 1 A N-1
		fact PREND LA VALEUR DE fact*i
	   FIN POUR
	   AFFICHER("La factoriel de N est: ",fact)
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuper(int N);
void calculer(int N,int i,int fact);

int recuper(int N)
{
    printf("entier la valeur de N\n");
    printf("\tN= ");
    scanf("\t%d",&N);
    return (N);
}
void calculer(int N,int i,int fact)
{
    for(i=1;i<=N;i++)
    {  
 	fact=fact*i;
    }
    printf("Le factoriel de %d est:%d\n",N,fact);
}

int main()
{
    int N,i,fact=1;
    N=recuper(N);
    calculer(N,i,fact);
    return(0);
}
