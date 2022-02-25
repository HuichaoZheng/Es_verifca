#include <stdio.h>
int main(int argc, char*argv)
{
    int scelta;
    int incasso_bevande = 0;
    int incasso_ristorazione = 0;
    int conta_bevande = 0;
    int conta_ristorazione = 0;
    int costo;
    int media_bevande;
    int media_ristorazione;
    do{
        printf("Quale operazione vuoi fare?\n");
        printf("1. Bevande \n2.Ristorazione\n3.Esci\n");
        scanf("%d", &scelta);
        if(scelta==1){
            do{
                printf("Inserisci incasso per bevande:\n");
            scanf("%d", &costo);
            }while(costo <= 0);
            
            incasso_bevande+=costo;
            conta_bevande++;
        }
        else{
            do{
                printf("Insersci incasso per ristorazione:\n");
                scanf("%d", &costo);
            }while(costo <= 0);
            
            incasso_ristorazione+=costo;
            conta_ristorazione++;
        }
    }while(scelta != 3);
    media_bevande = incasso_bevande / conta_bevande;
    media_ristorazione = incasso_ristorazione / conta_ristorazione;
    printf("la media dell'incasso delle bevande è %d, la media dell'incasso delle ristorazione è %d.\n", media_bevande, media_ristorazione);
    if(conta_bevande>conta_ristorazione){
        printf("Sono state vendute più bevande.\n");
    }
    else{
        printf("Sono state vendute più ristorazione.\n");
    }
    return 0;
}