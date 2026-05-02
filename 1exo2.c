// Exercice 2: Algorithme montrant si la produit de deux nombres est positif,negatif ou nul.
/*
	   Algorithme:
	VARIABLE
	Var a,b: réel
	DEBUT
	   AFFICHER("Entrer la valeur de a")
	   LIRE(a)
	   AFFICHER("Entrer la valeur de b")
	   LIER(b)
	   SI a==0
		AFFICHER("La produit de a et b est nul")
	   SI NON
		SI a<0
		   SI b==0
		   	AFFICHER("Laproduit de a et b est nul")
		   SI NON
		   	SI b<0
			   AFFICHER("La produit de a et b est positif")
			SI NON
			   AFFICHER("La profuit de a et b est negatif")
			FIN SI
		   FIN SI
		SI NON
		   SI b==0
                        AFFICHER("Laproduit de a et b est nul")
                   SI NON
                        SI b<0
                           AFFICHER("La produit de a et b est negatif") 
                        SI NON
                           AFFICHER("La profuit de a et b est positif")
                        FIN SI
                   FIN SI

		FN SI
	   FIN SI
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuperer(char k,int n);
void si(int a, int b);

int recuperer(char k,int n)
{
    printf("Entrer la valeur de %c: ",k);
    scanf("%d",&n);
	printf("%c = %d\n",k,n);
	return n;
}
void si(int a, int b)
{
	if(a<0)
	{
		if(b<0)
		{
			printf("le produit de a et b est positif\n");
		}
		else if(b==0)
		{
			printf("le produit de a et b est nul\n");
		}
		else
		{
			printf("le produit de a et b est negatif\n");
		}
	}
	else if(a==0)
	{
		printf("le produit de a et b est nul\n");
	}
	else
	{
	        if(b<0)
		{
			printf("le produit de a et b est negatif\n");
		}
		else if(b==0)
		{
			printf("la produit de a et b est nul\n");
		}
		else
		{
			printf("le produit de a et b est positif\n");
		}
	}
}

int main()
{
	int a,b;
	a=recuperer('a',a);
	b=recuperer('b',b);
	si(a,b);
	return(0);
}
