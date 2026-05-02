// Algorithe qui deux entiers et affiche les nombres premiers entre eux
/*
		Algorihme:
	Variable:
	Var N,M,k,i,j,l: entier
	DEBUT
	    AFFICHER("Entrer la valeur de N")
	    LIRE(N)
	    AFFICHER("Entrer la valeur de M")
	    LIRE(M)
	    POUR i<-N; i<=M; i<-i+1
		POUR j<-1; j<=i; j<-j+1
		    SI i%j==0
			k<-k+1
		    SI NON
			CONTINUE
		    FIN SI
		FIN POUR
		SI k==2
		    l<-l+1
		    AFFICHER("N°",l)
		    AFFICHER("=",i)
		SI NON
		    CONTINUE
		FIN SI
	    FIN POUR
*/
#include<stdio.h>
#include<math.h>
int main()
{	
	int N,M,k=0,i,j,l=0;
	printf("Entrer la valeur de N \n\t");
	printf("N= ");
	scanf("%d",&N);
	printf("Entrer la valeur de M \n\t");
	printf("M= ");
	scanf("%d",&M);
	printf("Les nombres premiers entre 0 et %d sont:\n",M);
	for(i=N;i<=M;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				k++;
			}
			else
			{
				continue;
			}
		}
		if(k==2)
		{	
			l++;
			printf("\tN°%d= %d\n",l,i);
		}
		else
		{	
			continue;
		}
	}
	return(0);
}
