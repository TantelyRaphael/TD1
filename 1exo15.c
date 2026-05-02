// Algorithme qui calcule le somme de 1+10+10^2+...+10^N où N est à saisir sur le clavier.
/*
		ALgorithme:
	Variable:
	Var N,i,S: entier
	DEBUT
	   AFFICHER("Entrer la valeur de N:")
	   LIRE(N)
	   S<-1
	   POUR i DE -1 À N FAIRE
		S<-S+pow(10,i)
	   FIN POUR
	   AFFICHER("1+10+10^2+...+10^N= : ",S)
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuper(int N);
void calculer(int N,int i,int S);

int recuper(int N)
{
    printf("entier la valeur de N\n");
    printf("\tN= ");
    scanf("\t%d",&N);
    return (N);
}
void calculer(int N,int i,int S)
{
	printf("\t1");
	for(i=1;i<=N;i++)
	{  
 		S=S+pow(10,i);
		printf(" + ");
		printf("10^%d",i);
	}
	printf(" = %d \n",S);
}
int main()
{
	int N,i,S=1;
	N=recuper(N);
	calculer(N,i,S);
	return (0);
}
