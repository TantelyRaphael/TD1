//Algorithme qui lit deux notes et deux coefficients et affiches leur moyenne.
/*
	Algorithme:
	Variable:
	Var note1,note2,coef1,coef2,moyenne: réel
	Debut
	   AFFICHER("Entrer la valeur de note1 et son coefficient coef1")
	   LIRE(note1)
	   LIRE(coef1)
	   AFFICHER("Entrer la valeur du note2 et son coefficient coef2")
	   LIRE(note2)
	   LIRE(coef2)
	   moyenne<-((note1*coef1+note2*coef2)/(coef1+coef2))
	   AFFICHER("la moyenne des notes par rapport à ses coefficient est: ",moyenne)
*/ 
#include<stdio.h>
#include<math.h>
float recuper(char k,float n);
void calculer(float note1,float note2,float coef1,float coef2,float moyenne);
float recuper(char k,float n)
{
    printf("entrer la valeur du %c:\n",k);
    printf("\t%c = ",k);
    scanf("%f",&n);
    return (n);
}
void calculer(float note1,float note2,float coef1,float coef2,float moyenne)
{
    moyenne=(note1*coef1+note2*coef2)/(coef1+coef2);
    printf("moyenne=(%f*%f+%f*%f)/(%f+%f)=%f\n",note1,coef1,note2,coef2,coef1,coef2,moyenne); 
}
int main()
{
    float note1,note2,total,coef1,coef2,coef,moyenne;
    note1= recuper('n',note1);
    coef1= recuper('c',coef1);
    note2= recuper('N',note2);
    coef2= recuper('C',coef2);
    calculer(note1,note2,coef1,coef2,moyenne);
    return (0);
}
