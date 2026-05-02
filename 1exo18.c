// Algorithme qui lit deux entiers, calcul et affiche leur PGCD.
/*
	Algorithme:
	Variable:
	a,b,q,r: entier
	DEBUT
	   AFFICHER("Entrer la valeur de a et b")
	   LIRE(a)
	   LIRE(b)
	   SI a>b
		r PREND LA VALEUR DE a%b
		TANT QUE r!=0
		   a PREND LA VALEUR DE b
		   b PREND LA VALEUR DE r
		   r PREND LA VALEUR DE a%b
		FIN TANT QUE
		AFFICHER("PGCD(a;b)= ",b)
	   SI NON
		r PREND LA VALEUR DE b%a
		r PREND LA VALEUR DE 34
		TANT QUE r!=0
		   b PREND LA VALEUR DE a
		   a PREND LA VALEUR DE r
		   r PREND LA VALEUR DE b%a
		FIN TANT QUE
		AFFICHER("PGCD (a;b)= ",a)
	   FIN SI
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuper(char k,int n);
void calcul(int a,int b,int a1,int b1,int r,int q);

int recuper(char k,int n)
{
    printf("Entrer la valeur de %c: ",k);
    scanf("%d",&n);
	printf("\t%c = %d\n",k,n);
	return n;
}
void calcul(int a,int b,int a1,int b1,int r,int q)
{
	a1=a;
	b1=b;
	if(a==b)
	{
		printf("PGCD(%d;%d)= %d \n ",a,b,a);
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
		printf("PGCD(%d;%d)= %d \n ",a1,b1,b);
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
		printf("PGCD(%d;%d)= %d \n ",a1,b1,a);
	}
}
int main()
{
	int a,b,a1,b1,r,q;
	a=recuper('a',a);
	b=recuper('b',b);
	calcul(a,b,a1,b1,r,q);
	return (0);
}
