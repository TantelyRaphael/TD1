//algorithme qui lit deux notes de types réel et affiche leur somme et leur moyenne.
/*	Algorithme:
	variable:
	Var a,b,somme,moyenne:réel
	DEBUT
	  AFFICHER("enter la valeur des notes a et b: ")
	  LIRE(a)
	  LIRE(b)
	  somme<-a+b
	  AFFICHER("la somme des notes est: ",somme)
	  moyenne<-somme/2
   	  AFFICHER("la moyenne est: ",moyenne)
	FIN
*/
#include<stdio.h>
#include<math.h>
int recuper_a(float a);
int recuper_b(float b);
int calculer(float a,float b);
void afficher(float a,float b,float M);

int recuper_a(float a)
{
    printf("entrer la valeur du premier note: \n\t");
    scanf("%f",&a);
    return (a);
}
int recuper_b(float b)
{
    printf("entrer la valeur du deuxieme note: \n\t");
    scanf("%f",&b);
    return (b);
}
int calculer(float a,float b)
{
    float moyenne;
    moyenne=(a+b)/2;
    return (moyenne);
}
void afficher(float a,float b,float M)
{
    printf("la moyenne est:\n");
    printf("\tmoyenne=(%f+%f)/2= %f\n",a,b,M);
}

int main()
{	
    float a,b,M;
    a=recuper_a(a);
    b=recuper_b(b);
    M=calculer(a,b);
    afficher(a,b,M);
    return(0);
}
