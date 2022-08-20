#include <stdio.h>
#include <stdlib.h>
int lechoix(){
    int choix,i;
    do{
        printf("appuyez sur 1 pour le cafe\nappuyez sur 2 pour le the\nappuyez sur 3 pour le chocolat\nappuyez sur 4 pour le soda\n");
        scanf("%d",&choix);
        }while(choix>4 || choix<1);
    return choix;
}
char* qntdrink(lechoix){
    char *nomechoix;
    if(lechoix==1){
        nomechoix=" cafe ";
    }else if(lechoix==2){
        nomechoix=" the ";
    }else if(lechoix==3){
        nomechoix=" chocolat ";
    }else{
        nomechoix=" soda ";
    }
    return nomechoix;
}
int lechoixsucre(int lechoix){
    int sucre;
    if(lechoix!=4){
    do{
     printf("Appuyez sur 0 si vous ne voulez pas de sucre\nappuyez sur 1 si vous voulez du sucre\nappuyez sur 2 si vous voulez beaucoup de sucre\n");
        scanf("%d",&sucre);
    }while(sucre>2 || sucre<0);
    }
    return sucre;
}
char* qntsucre(lechoixsucre){
    char *sucre;
    if(lechoixsucre==0){
        sucre=" est sans sucre ";
    }else if(lechoixsucre==1){
        sucre="est sucre";
    }else if(lechoixsucre==2){
        sucre=" est tres sucre ";
    }
    return sucre;
}
int lechoixlait(int lechoix){
    int lait;
    if(lechoix!=4){
         do{
        printf("Si vous ne voulez pas de lait,appuyez sur 0\nSi vous voulez du lait, appuyez sur 1\n");
        scanf("%d",&lait);
    }while(lait>1 || lait<0);
    }
     return lait;
}
char* qntlait(lechoixlait){
    char *lait;
    if(lechoixlait==1){
        lait=" avec lait ";
    }else
        lait="";
    return lait;
}

float caclculeprix(lechoix,lechoixlait,lechoixsucre){
    float prix;
        switch(lechoix){
        case 1 :
             prix=2;
             break;
        case 2 :
             prix=2;
             break;
        case 3 :
             prix=2.5;
             break;
        }
        prix =prix+((lechoixlait*1)+(lechoixsucre*0.25));
        if(lechoix==4){
            prix=3;
        }
    return prix;
}
void affichage(qntdrink,qntlait,qntsucre){
  printf("\n\nvoter%s%s%sest pret \n\n",qntdrink,qntlait,qntsucre);
}
void verifier(float caclculeprix,char* qntdrink,char* qntlait,char* qntsucre){

float money ;
 printf("vous davez payer %f DH \n",caclculeprix);
 printf("Entrez l'argent :");
 scanf("%f",&money);
 if(money<caclculeprix){
    printf("Vous n'avez pas assez d'argent votre commande a ete annulee \n\n");
 }else if(money==caclculeprix){
    affichage(qntdrink,qntlait,qntsucre);
 }else{
     money=money-caclculeprix ;
    printf("le reste :  %f \n",money);
    affichage(qntdrink,qntlait,qntsucre);
 }
}
int main()
{
    int i=0;
    while(i==0){
        int a=lechoix();
        int b=lechoixsucre(a),c=lechoixlait(a);
        float d= caclculeprix(a,b,c);
        verifier(d,qntdrink(a),qntsucre(b),qntlait(c));
    }
}
