// Algorithme qui ecrit les diviseurs d'un entier N à saisir sur le clavier.
/*
		Agorithme:
	Variable:
	Var N,i,k,t: entier
	AFFICHER("Entrer la valeur de N")
	LIRE(N)
	POUR i ALLANT DE 0 A N
	   k PREND LA VALEUR DE N MOD i;
	   SI k=0
	        t PREND LA VALEUR DE i;
	   SI NON
		continuer
	   FIN SI
	   AFFICHER("Les diviseurs de N sont: ",t)
	FIN POUR
*/
#include<stdio.h>
#include<math.h>
int recuper(int N);
void verifie(int N,int i,int k,int t);

int recuper(int N)
{
    printf("entier la valeur maximal de N\n");
    printf("\tN= ");
    scanf("\t%d",&N);
    return (N);
}
void verifie(int N,int i,int k,int t)
{
    printf("Les diviseurs de N sont:\n");
    for(i=1;i<=N;i++)
    {
    	k=N%i;
      	if(k==0)
      	{
	    t=i;
	}
	else
	{
	    continue;
	}
	printf("%d",t);
	printf(" ; ");
    }
    printf("\n");
}
int main()
{
    int N,i,k,t;
    N=recuper(N);
    verifie(N,i,k,t);
    return (0);
}
