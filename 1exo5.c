// Algorithme de resolution de l'équation Ax²+Bx+C=0 où A, B, et C sont des réels saisis au clavier.
/*
	Algorithme:
	Variable:
	Var A,B,C,delta,x,x1,x2;
	DEBUT
	   AFFICHER("entrer la valeur de A, B et C:")
	   LIRE(A)
	   LIRE(B)
	   LIRE(C)
	   SI A==0 et B==0 et C==0
		AFFICHER("La solution de l'équation est l'ensemble IR.")
	   SI NON
		delta<-pow(B,2)-4*A*C
		SI delta<0
		   AFICHER("La solution de l'équation est vide dans IR.")
		SI NON
		   SI delta==0
			x<-(-b/(2*A))
			AFFICHER("l'équation admet un solution unique: x=",x)
		   SI NON
			x1<-((-b-sqrt(delta))/(2*A))
			x2<-((-b+sqrt(delta))/(2*A))
			AFFICHER("l'équation admet deux solutions distinctes:")
			AFFICHER("x1= ",x1)
			AFFICHER("x2= ",x2)
		   FIN SI
		FIN SI
	   FIN SI
	FIN
*/
#include<stdio.h>
#include<math.h>
float recuper(char k,float n);
void calcul(float A,float B,float C,float delta,float x,float x1,float x2);

float recuper(char k,float n)
{
    printf("entrer la valeur de %c:\n",k);
    printf("\t%c = ",k);
    scanf("%f",&n);
    return (n);
}
void calcul(float A,float B,float C,float delta,float x,float x1,float x2)
{
    	if(A==0 && B==00 && C==0)
	{
		printf("\tla solution est l'ensemble IR\n");
	}
	else
	{
		delta=pow(B,2)-4*A*C;
		printf("delta=%f\n",delta);
		if (delta==0)
		{
			x=-B/(2*A);
			printf("la solution de l'equation dans IR est:\n");
			printf("\tx=%f\n",x);
		}
		else if (delta>0)
		{	
			x1=(-B-sqrt(delta))/(2*A);
			x2=(-B+sqrt(delta))/(2*A);
			printf("les solutions de l'equation dans IR sont:\n");
			printf("\tx1=%f\n",x1);
			printf("\tx2=%f\n",x2);
		}
		else
		{	
			printf("la solution est vide dans IR\n");
		}
	}
}

int main()
{
	  //Ax²+Bx+C=0
    float A,B,C,delta,x,x1,x2;
    A=recuper('A',A);
    B=recuper('B',B);
    C=recuper('C',C);
    printf("\t\t%fx²+%fx+%f=0\n",A,B,C);
    calcul(A,B,C,delta,x,x1,x2);
    return (0);    
}

