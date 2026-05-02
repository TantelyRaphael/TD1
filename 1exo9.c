//Algorithme qui affiche les nombres pair compris entre 1 et N où N est à saisir sur le clavier.
/*
		Algorithme:
	Variable:
	Var N,i: entier
	DEBUT
	   AFFICHER("Entrer la valeur de N")
	   LIRE(N)
	   POUR i<-1; i<N; i<-i+2
		AFFICHER("Les nombres paires entre 1 et N sont:",i)
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
    for(i=2;i<N-1;i=i+2)
    {
	printf("%d\n",i);
    }
    printf("Les nombres entre 0 et %d sont:\n",N);
}
int main()
{
    int N,i;
    N=recuper(N);
    compter(i,N);
    return (0);
}
