//Algorithme qui affiche  les nombres compris entre O et N où N est à saisir au clavier.
/*
		Algorithme:
	Variable:
	Var N: entier
	Var i: entier
	DEBUT
	   AFFICHER("Entrer la valeur de N")
	   LIRE(N)
	   POUR i ALLANT DE 1 A N
		AFFICHER("Les nombres entre 0 et N sont: ")
		LIRE(i)
	   FIN POUR
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuperer(int N);
void compter(int i, int N);
int recuper(int N)
{
    printf("entier la valeur maximal de N\n");
    printf("\tN= ");
    scanf("\t%d",&N);
    return (N);
}
void compter(int i, int N)
{
    for(i=1;i<N;i++)
    {
	printf("%d\n",i);
    }
    printf("Les entiers entre 0 et %d sont:\n",N);
}
int main()
{
    int N,i;
    N=recuper(N);
    compter(i,N);
    return (0);
}
