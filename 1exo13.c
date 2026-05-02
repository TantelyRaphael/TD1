// Algorithme qui calcule la muliplication de 1*2*3*...*N où N est à saisir sur le clavier.
/*
		ALgorithme:
	Variable:
	Var N,i,P: entier
	DEBUT
	   AFFICHER("Entrer la valeur de N:")
	   LIRE(N)
	   P PREND LA VALEUR DE 1
	   POUR i ALLANT DE A N
		P PREND LA VALEUR DE P*i
	   FIN POUR
	   AFFICHER("1*2*3*...*N= : ",S)
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuper(int N);
void calculer(int N,int i,int P);

int recuper(int N)
{
    printf("entier la valeur de N\n");
    printf("\tN= ");
    scanf("\t%d",&N);
    return (N);
}
void calculer(int N,int i,int P)
{
    for(i=1;i<=N;i++)
    {  
        printf("%d",i);
        printf(" x ");
        P=P*i;
    }
    printf(" = %d \n",P);
}

int main()
{
    int N,i,P=1;
    N=recuper(N);
    calculer(N,i,P);
    return(0);
}
