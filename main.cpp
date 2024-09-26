#include <iostream>
#include<stdio.h>
int main() {
    int prodottiAquistati;
    float prezzoUnitario,importoNonScontato,importoTotale,sconto;
     printf("inserire il numero di prodotti acquistati");
    scanf(" %d ",&prodottiAquistati);
    printf("inserire il prezzo unitario");
    scanf("%p",&prezzoUnitario);
    importoNonScontato=prezzoUnitario*prodottiAquistati;
    if (importoNonScontato>50){
        sconto=importoNonScontato*20/100;
    }else if (importoNonScontato>10) {
        sconto=importoNonScontato*10/100;
    }
    importoTotale=importoNonScontato-sconto;
    printf ("lo sconto e' di %p", &sconto);
    printf ("l importo totale e' di %p",&importoTotale);
    printf( "il prezzo non scontato e' di %p" ,&importoNonScontato);
}
