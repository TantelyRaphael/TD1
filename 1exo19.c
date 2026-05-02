// Algorithe qui lit deux entier et affiche s'ils sont premiers ou non.
/*
		Algorihme:
	Variable:
	Var N,M,k,j,: entier
	DEBUT
	    AFFICHER("Entrer la valeur de N")
	    LIRE(N) 
	    AFFICHER("Entrer la valeur de M")
	    LIRE(M)
	    POUR j<-1; j<=i; j<-j+1
       	        SI N%j==0
		    k<-k+1
		SI NON
		    CONTINUE
		FIN SI
	    FIN POUR
       	    SI k==2
	        AFFICHER("N est un nombre premier")
	    SI NON
		AFFICHER("N n'est pas un nombre premier")
	    FIN SI
	    
	    POUR j<-1; j<=i; j<-j+1
       	        SI M%j==0
		    k<-k+1
		SI NON
		    CONTINUE
		FIN SI
	    FIN POUR
       	    SI k==2
	        AFFICHER("M est un nombre premier")
	    SI NON
		AFFICHER("M n'est pas un nombre premier")
	    FIN SI
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuper(char k,int n);
void verifie_N(int N,int k,int i,int j);
void verifie_N(int M,int k,int i,int j);
int recuper(char k,int n)
{
    printf("Entrer la valeur de %c: ",k);
    scanf("%d",&n);
    printf("%c = %d\n",k,n);
    return n;
}
void verifie_N(int N,int k,int i,int j)
{
    for(j=1;j<=N;j++)
    {
    	if(N%j==0)
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
	printf("%d est un nombre premier \n",N);
    }
    else
    {	
	printf("%d n'est pas un nombre premier \n",N);
    }
}
void verifie_M(int M,int k,int i,int j)
{
    for(j=1;j<=M;j++)
    {
    	if(M%j==0)
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
	printf("%d est un nombre premier \n",M);
    }
    else
    {	
	printf("%d n'est pas un nombre premier \n",M);
    }
}
int main()
{	
    int N,M,k=0,i,j;
    N=recuper('N',N);
    M=recuper('M',M);
    verifie_N(N,k,i,j);
    verifie_M(M,k,i,j);
    return(0);
}
