/*  Aluno: Matheus Bezerra Domingos
    Data: 30/05/2024
    Obj: leia 10 valores e imprima eles, calcule a media e verifica se o numero é maior que a média
*/


#include <stdio.h>

void main(){
    
    //Declarando as variaveis
    int num[10]; //variavel do tipo vetor
    int x;
    int soma;
    int media;
    
    //Digite os valores
    for(x=0; x<10; x++){
        printf("Digite o %d valor..: ", x+1);
        scanf("%d",&num[x]);
        
        soma = soma + num[x];
    }
    
    printf("\n");
    //Mostra a soma
    printf("A soma é..: %d \n", soma);
    
    //Calcula a média
    media = soma/10;
    
    //Mostra a soma
    printf("A media é..: %d \n", media);
    
    printf("\n");
    printf("Os valores maior que a média são: ");
    for(x=0; x<10; x++){
        if(num[x] > media){
            printf("%d ",num[x]);
        }
    }
    
}

