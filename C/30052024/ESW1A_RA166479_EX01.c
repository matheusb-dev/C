/*  Aluno: Matheus Bezerra Domingos
    Data: 30/05/2024
    Obj: leia 10 valores e imprima eles na ordem inversa
*/


#include <stdio.h>

void main(){
    
    //Declarando as variaveis
    int num[10]; //variavel do tipo vetor
    int x;
    
    //Digite os valores
    for(x=0; x<10; x++){
        printf("Digite o %d valor..: ", x+1);
        scanf("%d",&num[x]);
    }
    
    printf("Os numeros na ordem inversa são: ");
    //Mostre os valores na ordem inversa
    for(x=9; x>=0; x--){
        printf(" %d ", num[x]);
    }
    
}

