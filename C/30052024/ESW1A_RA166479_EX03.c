/*  Aluno: Matheus Bezerra Domingos
    Data: 30/05/2024
    Obj: atribui 5 numeros a A, 10 no B e soma A+B e coloque no C
*/


#include <stdio.h>

void main(){
    
    //Declarando variaveis
    int vetA[5];
    int vetB[10];
    int vetC[15];
    int x;
    
    //Digite os valores
    printf("Digite os valores do vetor de A \n");
    for(x=0; x<5; x++){
        printf("Digite o %d valor..: ", x+1);
        scanf("%d",&vetA[x]);
        
        vetC[x] = vetA[x];
    }
    
    printf("\n");
    //Digite os valores
    printf("Digite os valores do vetor de B \n");
    for(x=0; x<10; x++){
        printf("Digite o %d valor..: ", x+1);
        scanf("%d",&vetB[x]);
        
        vetC[x + 5] = vetB[x];
    }
    
    printf("\n");
    //Mostra a soma
    for(x=0; x<15; x++){
    printf("O vetor C contem esses numeros..: %d \n", vetC[x]);
    }
}

