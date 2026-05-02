// Algorithme qui calcule et affiche le somme de 1/1+1/2+1/3+...+1/N où N est à saisir sur le clavier.
/*
		ALgorithme:
	Variable:
	N,i,S de type réel
	DEBUT
	   AFFICHER("Entrer la valeur de N:")
	   LIRE(N)
	   S PREND LA VALEUR DE 1
	   POUR i ALLANT DE -2 A N
	   S PREND LA VALEUR DE S+1/i
	   FIN POUR
	   AFFICHER("1/1+1/2+1/3+...+1/N= : ",S)
	FIN
*/
#include<stdio.h>
#include<math.h>
float recuper(float N);
void calculer(float N,float i,float S);

float recuper(float N)
{
    printf("entier la valeur de N\n");
    printf("\tN= ");
    scanf("\t%f",&N);
    return (N);
}
void calculer(float N,float i,float S)
{
	for(i=2;i<=N;i++)
	{  
 		S=S+(1/i);
 		printf("1/%f",i-1);
		printf(" + ");
	}
	printf("%f = %f\n",N,S);
}

int main()
{
    float N,i,S=1;
	N=recuper(N);
    calculer(N,i,S);
    return (0);
}