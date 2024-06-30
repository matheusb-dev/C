/*  Autor: Matheus Bezerra Domingos
    Data: 12/05/2024
    Objetivo: Fazer um programa que lê 5 números e fala a quantidade de números negativos.
*/


#include <stdio.h>

void main(){
    
    //Declarando variáveis 
    int i, a, nn = 0;
    
    //digite os 5 numeros
    for(i = 0; i < 5; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &a);
        
        if(a < 0){
           nn++;
        }
    
    }
    

    
    //exibindo na tela
    printf("A quantidades de números negativos é de:.. %d", nn);
    
}
