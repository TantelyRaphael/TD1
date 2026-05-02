// Algorithme qui calcule le somme de 1+2+3+...+N où N est à saisir sur le clavier.
/*
		ALgorithme:
	Variable:
	Var N,i,S: entier
	DEBUT
	   AFFICHER("Entrer la valeur de N:")
	   LIRE(N)
	   S<-0
	   POUR i ALLANTD DE 1 A N
		S PREND LA VALEUR DE S+i
	   FIN POUR
	   AFFICHER("1+2+3+...+N = ",S)
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
    for(i=1;i<=N;i++)
    {  
 	S=S+i;
    }
    printf("1 + . . . + %d = %d\n",N,S);
}

int main()
{
    int N,i,S=0;
    N=recuper(N);
    calculer(N,i,S);
    return(0);
}
