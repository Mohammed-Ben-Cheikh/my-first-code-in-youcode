#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
int c=0,choi,s=0,h=1;
char titre[100][100];
char auteur[100][100];
float prix[100];
int quantite[100];
char com[30];
char supp[100][100];

int edit , deleted = 0,i=0,j;

do {

printf("\n\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("\n");printf("\n");
printf("----------------- Systeme de Gestion de Stock dans Librairie -----------------");
printf("\n");printf("\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("|\n");printf("       |\n");printf("       |\n");

printf("       |===>> Pour Ajouter un livre entre -------------------------- : 1\n       |\n");
printf("       |===>> Pour Afficher tous les livres disponibles entre ------ : 2\n       |\n");
printf("       |===>> Pour Rechercher un livre par son titre entre ----------: 3\n       |\n");
printf("       |===>> Pour Mettre a jour la quantite d'un livre entre ------ : 4\n       |\n");
printf("       |===>> Pour Supprimer un livre du stock entre --------------- : 5\n       |\n");
printf("       |===>> Pour Afficher le nombre total de livres en stock entre : 6\n");
printf("\n\n");
printf("                 ===>> entre votre numero ici : ");
scanf("%d",&choi);
printf("\n\n");

switch (choi) {
    case 1: {
   //livre a ajouter

    for (i;i<h;i++){
//le titre du livre
printf("      =====>> Entre le titre du livre    : ");
scanf("%s",&titre[i]);
printf("\n");
//l'Auteur du livre
printf("      =====>> Entre l'auteur du livre    : ");
scanf("%s",&auteur[i]);
printf("\n");
//le Prix du livre
printf("      =====>> Entre le Prix du livre     : ");
scanf("%f",&prix[i]);
printf("\n");
//la Quantite en stock
printf("      =====>> Entre la Quantite en stock : ");
scanf("%d",&quantite[i]);
printf("\n");
c++;
i++;
h++;
break;
}
break;
    }
    case 2: {

printf("         =====>> Vous avez << %d >> livres  <<=====", c );printf("\n");printf("\n");
    for (int i=0;i<c;i++){
            printf("\n\n");
printf("=====>> livre numero %d : \n\n\n          le titre du livre est    : %s" ,i+1,titre[i] );
printf("\n\n");
printf("          l'Auteur du livre est    : %s",auteur[i] );
printf("\n\n");
printf("          le Prix du livre est     : %.2f DH",prix[i] );
printf("\n\n");
printf("          la Quantite en stock est : %d",quantite[i] );

}


     break;
}
  case 3:{
      if(c>0){
        printf("=====>> entre le titre du livre : ");
        scanf("%s",&com);
        printf("\n");
        int F = 0;
        for (int i=0;i<c;i++){
        if(strcmp(com,titre[i])==0){
printf("            Le resultat de votre recherche est : \n\n");
printf("=====>> Vous avez chercher le livre numero : %d \n\n          le titre du livre est : %s",i+1 ,titre[i] );
printf("\n");
printf("          l'Auteur du livre est : %s",auteur[i] );
printf("\n");
printf("          le Prix du livre est : %.2f DH",prix[i] );
printf("\n");
printf("          entre la Quantite en stock est : %d",quantite[i] );
printf("\n");
printf("\n");
F=1;
break;
      }
      }if(!F){
      printf("No livre avec ce titre");
      }
}else{
printf("Aucun livre en stock");
}break;
  }
  case 4:{
      if(c>0){
        printf("=====>> entre le titre du livre : ");
        scanf("%s",&com);
        printf("\n");
        int F = 0;
        for (int i=0;i<c;i++){
        if(strcmp(com,titre[i])==0){
printf("            Le resultat de votre recherche est : \n\n");
printf("=====>> Vous avez chercher le livre numero : %d \n\n          le titre du livre est : %s",i+1 ,titre[i] );
printf("\n");
printf("          l'Auteur du livre est : %s",auteur[i] );
printf("\n");
printf("          le Prix du livre est : %.2f DH",prix[i] );
printf("\n");
printf("          la Quantite en stock est : %d",quantite[i] );
printf("\n");
printf("\n");
F=1;
printf("          ===>>entre la nouvelle Quantite en stock pour se livre  : ");
scanf("%d",&edit);
quantite[i] = edit ;
printf("=====>> Vous avez edite le livre numero : %d \n\n          le titre du livre est : %s",i+1 ,titre[i] );
printf("\n");
printf("          l'Auteur du livre est : %s",auteur[i] );
printf("\n");
printf("          le Prix du livre est : %.2f DH",prix[i] );
printf("\n");
printf("          la nouvelle Quantite en stock est : %d",quantite[i]);
printf("\n");
printf("\n");
break;
}}
}
break;
}



  case 5:{
                    if(c>0){
                    printf("=====>>>> Entrez le titre:");
                    scanf("%s",supp);
                    printf("\n");printf("\n");
                       for ( int Y=0; Y<c;Y++){
                if(strcmp(supp,titre[Y])==0){
                        c--;
                        for ( j=Y; j<c;j++){
                                strcpy(titre[j], titre[j+1]);
                                strcpy(auteur[j], auteur[j+1]);
                                prix[j]= prix[j+1];
                                quantite[j]= quantite[j+1];
                                }
                                deleted =1;
                            break;
                            }}
                                if(!deleted){
                                    printf("No livre avec ce titre \n\n");

                                } else{
                                printf(" ====>>> Le livre est suprimer correctement \n");
                                }}  else{
                    printf("======>>> No livre en stock \n");
                }
break;
                    }



 case 6: {
for(int i=0;i<c;i++){
    s=s+quantite[i];
    }
    printf("la la Quantite des livre en stock %d " , s);


}
}

}
while (choi != 0);
   return 0;
}
