// Algorithme determine si a et b sont premier entre eux.
/*
		Algorithme:
	Variable:
	Var a,b,q,r,PGCD: entier
	DEBUT
	   AFFICHER("Entrer la valeyr de a et b")
	   LIRE(a)
	   LIRE(b)
	   SI a>b
		r<-a%b
		TANT QUE r!=0
		   a<-b
		   b<-r
		   r<-a%b
		FIN TANT QUE
		PGCD<-b
	   SI NON
		r<-b%a
		TANT QUE r!=0
		   b<-a
		   a<-r
		   r<-b%a
		FIN TANT QUE
		PGCD<-a
	   FIN SI
	   SI PGCD==1
		AFFICHER("a et b sont premier entre eux")
	   SI NON
		AFFICHER("a et b ne sont pas premier entre eux")
	   FIN SI
	FIN
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,a1,b1,r,q,PGCD;
	printf("Entrer la valeur de a et b");
	printf("\n\t a= ");
	scanf("%d",&a);
	printf("\t b= ");
	scanf("%d",&b);
	a1=a;
	b1=b;
	if(a==b)
	{
		PGCD=a;
	}
	else if(a>b)
	{
		r=a%b;
		while(r!=0)
		{
			a=b;
			b=r;
			r=a%b;
		}
		PGCD=b;
	}
	else
	{
		r=b%a;
		while(r!=0)
		{
			b=a;
			a=r;
			r=b%a;
		}
		PGCD=a;
	}
	printf("\t PGCD(%d;%d) = %d \n",a,b,PGCD);
	if(PGCD==1)
	{
		printf("%d et %d sont premier entre eux\n",a1,b1);
	}
	else
	{
		printf("%d et %d ne sont pas premier entre eux\n ",a1,b1);
	}
}
