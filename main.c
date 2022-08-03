#include <stdio.h>
#include <stdlib.h>

int main()
{
 int choix,sucre,lait,i=0;
    float prix;
    char *nomechoix,*qntsucre,*qntlait;
    while(i==0){
    do{
            printf("appuyez sur 1 pour le cafe\n"
                    "appuyez sur 2 pour le the\n"
                     "appuyez sur 3 pour le chocolat\n"
                     "appuyez sur 4 pour le soda\n");
            scanf("%d",&choix);
        }while(choix>4 || choix<1);
        switch(choix){
        case 1 :
             nomechoix="cafe";
             prix=2;
             break;
        case 2 :
             nomechoix="the";
             prix=2;
             break;
        case 3 :
             nomechoix="chocolat";
             prix=3;
             break;
        case 4 :
             nomechoix="soda";
             prix=4;
             break;
        }

        if(nomechoix!="soda"){
            do{
                printf("Appuyez sur 0 si vous ne voulez pas de sucre\n"
                      "appuyez sur 1 si vous voulez du sucre\n"
                       "appuyez sur 2 si vous voulez beaucoup de sucre\n");
                scanf("%d",&sucre);
            }while(sucre>2 || sucre<0);
            switch(sucre){
            case 0 :
                 qntsucre="est sans sucre";
                 break;
            case 1 :
                 qntsucre="est  sucre";
                 prix=prix+0.25;
                 break;
            case 2:
                 qntsucre="est  tres sucre";
                 prix=prix+0.50;
                 break;
            }
            do{
                printf("Si vous ne voulez pas de lait,appuyez sur 0 \nSi vous voulez du lait, appuyez sur 1 ");
                scanf("%d",&lait);
            }while(lait>1 || lait<0);
            switch(lait){
            case 0 :
                 break;
            case 1 :
                 qntlait="aver lait ";
                 prix=prix+1;
                 break;
            }
            printf("vous davez payer %f DH \n",prix);
            printf("voter %s %s %s est pret \n\n",nomechoix,qntsucre,qntlait);
        }else{
            printf("vous davez payer %f DH \n",prix);
            printf("voter %s est pret \n\n",nomechoix);
        }

    }

}

