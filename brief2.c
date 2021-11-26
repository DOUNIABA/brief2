#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct  Comptebancaire{
char CIN[30];
char nom[100];
char prenom[100];
float montant;
};
  struct  Comptebancaire compt[100];

   int i=0 ;
   int p=0;

void Ajouter()
{

 printf("\nEntrez le CIN:");
 scanf("%s",compt[p].CIN); 
 printf("\nEntrez le Nom:");
 scanf("%s",compt[p].nom);
 printf("\nEntrez le Prenom:");

 scanf("%s",compt[p].prenom); 
 printf("\nSOLDE :");
 scanf("%f",&compt[p].montant);
if (compt[p].montant<0){
printf("\nmontant inaccessible veuillez le reentrer:");

scanf("%f",&compt[p].montant);
}
 printf("\ncount created successfully:");

p++;
}

  void RechercherCompte()
{

    char cin[20];
    int i;
    printf("Enter le CIN: ");
    scanf("%s",cin);

    for(i=0; i<p; i++){
    if(strcmp(compt[i].CIN,cin)==0){
        printf("   CIN              :%s",compt[i].CIN);
        printf("\n NOM DE CLIENT    :%s",compt[i].nom);
        printf("\n PRENOM DE CLIENT :%s",compt[i].prenom);
        printf("\n SOLDE            :%f",compt[i].montant);

    }  
    }
    }  
  
 void RETRAIT(){
  char cin[20];
  float montant;

     printf("Enter CIN: ");
    scanf("%s",cin);
for (i=0; i<p; i++){
if (strcmp(compt[i].CIN,cin)==0){
printf("la somme a retire:");
scanf("%f",&montant);
if (montant >0){

printf("votre Montant apres  le retrait est:%.2f Dh\n.",compt[i].montant - montant );
 
}else {
printf("somme invalide\n ");
printf("entrez de nouveau votre somme:");
scanf("%f",&montant);
}
    }
}
  }

 void Depot(){
  char cin[20];
  float montant;

    printf("Enter CIN: ");
    scanf("%s",cin);
for (i=0; i<p; i++){
if  (strcmp(compt[i].CIN,cin)==0){
    
while (montant<0){
printf("la somme a depose:");
scanf("%f",&montant);}
if (montant >0){
printf("votre Montant apres  le depot est:%.2f Dh\n.",compt[i].montant + montant ); 
}else
{
printf("somme invalide\n ");
printf("entrez de nouveau votre somme:");

 scanf("%f",&montant);
}
    }
}
  }

void Afficher() 
{
for (i=0;i<p;i++) { 
printf("CIN               :%s",compt[i].CIN);
 printf("\nNom client.    : %s",compt[i].nom);
 printf("\n Prenom client :%s ",compt[i].prenom);
 printf("\nSolde          :%.2f\n ",compt[i].montant);
 
}
}

int main(){
int ops ;
int qus;

do {
system("cls");

printf("\n _________________MENU______________________\n");
printf("\n [1] Ajouter un compte");
printf("\n [2] Rechercher un compte");
printf("\n [3] Afficher");
printf("\n [4] Retrait");
printf("\n [5] Depot");

do {
printf("\n veuillez entrer votre choix :");
scanf("%d",&ops);
fflush(stdin);

switch (ops){
case 1:
Ajouter();
break;

case 2:
RechercherCompte();
break;

case 3:
Afficher();
break;

case 4:
RETRAIT();
break;

case 5:
Depot() ;
break;

}
}while (ops<1 || ops>7);

printf("\nMenu  : 0\n");
printf(" Sortir : 1\n");
scanf("%d",&qus);
fflush(stdin);
}while (qus==0);
 
}
    
