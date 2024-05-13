/*  Autor: Matheus Bezerra Domingos
    Data: 12/05/2024
    objetivo: faça um programa que verifica os numeros numéricos inteiros 
    ímpares situados na faixa de 0 a 20. Para verificar se o número é ímpar,
*/

#include <stdio.h>

void main(){
    
    int t;
    
    for(t = 0; t <= 20; t++){
        if(t % 2 != 0){
            printf("O numero %d é ÍMPAR \n",t);
        }
    }
}

