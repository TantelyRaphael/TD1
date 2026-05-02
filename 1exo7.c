//ALgorithme qui lit trois valeurs et affiche leur maximum.
/*
		Algorithme:
	Variable:
	Var a,b,c:réel
	DEBUT
	   AFFICHER("Entrer la valeur de a, b, et c:")
	   LIRE(a)
	   LIRE(b)
	   LIRE(c)
	   SI a>=b
		SI a>=c
		   AFFICHER("Le maximum est: ",a)
		SI NON
		   AFFICHER("Le maximum est: ",c)
		FIN SI
	   SI NON
		SI b>=c
		   AFFICHER("Le maximum est: ",b)
		SI NON
		   AFFICHER("Le maximum est: ",c)
		FIN SI
	   FIN SI
	FIN
*/
#include<stdio.h>
#include<math.h>
double recuper(char k,double n);
void compar(double a,double b,double c);

double recuper(char k,double n)
{
    printf("Entrer la valeur de %c: ",k);
    scanf("%lf",&n);
    printf("%c = %lf\n",k,n);
    return (n);
}
void compar(double a,double b,double c)
{
        if(a>b)
	{
		if(a>c)
		{
			printf("Le maximum est: %lf \n",a);
		}
		else
		{
			printf("Le maximum est: %lf \n",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("Le maximum est: %lf \n",b);
		}
		else
		{
			printf("Le maximum est: %lf \n",c);
		}
	}    
}

int main()
{
	double a,b,c;
	a=recuper('a',a);
	b=recuper('b',b);
	c=recuper('c',c);
	compar(a,b,c);
	return (0);
}
