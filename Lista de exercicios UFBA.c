
// 01)

/*
#include <stdio.h>

int main() {
    int nums[11], num; 

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num); 
        nums[i] = num; 
    }

    printf("Os numeros no vetor são: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
*/

//------------------------------------------------------------------------------------------------------

// 02)

/*
#include <stdio.h>

int main() {
    int nums[11], num, escolha, vez, sim = 0; 

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &num); 
        nums[i] = num; 
    }

    printf("\nQual numero esta na lista? "); scanf("%d", &escolha);
    for (int i = 0; i < 10; i++) {
        vez = 0;
        vez = nums[i];
        if(escolha == vez){
            sim += 1;
        }
    }
    
    if(sim > 0){
        printf("\nO numero %d esta dentro do vetor", escolha);
    }
    else{
        printf("\nO numero %d não esta dentro do vetor", escolha);
    }

    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------

// 03)

/*
#include <stdio.h>

int main() {
    int nums[11], num, soma, maior = 0, menor = 0, vez, pos, neg; 
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num); 
        nums[i] = num;
        menor = nums[i];
    }

    for (int i = 0; i < 10; i++) {
        soma += nums[i];
        vez = nums[i];
        if(maior < vez){
            maior = vez;
        }
        if(menor > vez){
            menor = vez;
        }
        if(vez > 0){
            pos += 1;
        }
        if(vez < 0){
            neg += 1;
        }
    }
    
    media = (float)soma / 10;
    printf("\nA media dos numeros do vetor é: %.1f", media);
    printf("\nO maior numero do vetor é: %d", maior);
    printf("\nO menor numero do vetor é: %d", menor);
    printf("\nExistem %d numeros positivos nesse vetor", pos);
    printf("\nExistem %d numeros negativos nesse vetor", neg);

    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------

// 05)

/*
#include <stdio.h>
#include <math.h>

int main() {
    int nums[6], num, soma, somaFim, vetor; 
    float norma, maior = 0;
    
    for(int c = 1; c <= 3; c++){
        printf("Vetor N: %d \n", c);
        for (int i = 0; i < 5; i++) {
            printf("Digite um numero inteiro: ");
            scanf("%d", &num); 
            nums[i] = num;
            soma = 0;
            for(int d = 0; d < 5; d++){
                soma += nums[d];
                norma = sqrt(soma);
                if(norma > maior){
                    vetor = c;
                    maior = norma;
                }
            }
            somaFim += nums[i];
        }
        printf("\nA norma do vetor %d é: %.1f \n\n", c, norma);
    }
    printf("A maior norma é o %.1f do vetor %d", maior, vetor);
    printf("\nA soma total de todos os vetores %d", somaFim);
    

    return 0;
}
*/

//----------------------------------------------------------------------------------------------------------------------

// 06)
/*

#include <stdio.h>

int main() {
    int saida = 1;
    char matrix[4][50]; 

    while(saida != 0){
        for (int i = 1; i <= 4; i++) {
            if(i == 1){
                printf("\nDigite o nome do cliente: ");
                scanf("%s", matrix[i]);
            }
            else if(i == 2){
                printf("Digite o RG do cliente: ");
                scanf("%s", matrix[i]);
            }
            else if(i == 3){
                printf("Digite o CPF do cliente: ");
                scanf("%s", matrix[i]);
            }
            else if(i == 4){
                printf("Digite o Tel/Cel do cliente: ");
                scanf("%s", matrix[i]);
            }
        }
    
        for (int i = 1; i <= 4; i++) {
            if(i == 1){
                printf("\nO Nome do cliente: %s \n", matrix[i]);
            }
            else if(i == 2){
                printf("RG do cliente: %s \n", matrix[i]);
            }
            else if(i == 3){
                printf("CPF do cliente: %s \n", matrix[i]);
            }
            else if(i == 4){
                printf("Tel/Cel do cliente: %s \n", matrix[i]);
            }
        }
        printf("\nSe desejar sair do programa digite '0' \nSe deseja continuar digite '1': ");
        scanf("%d", &saida);
    }
    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------------------

// 07)

/*

#include <stdio.h>

int main() {
    int nums[11], pares[11], num, par = 0, divi;

    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        nums[i] = num;

        divi = num % 2;
        if (divi == 0) {
            par += 1;
            pares[par] = num; 
        }
    }

    for (int i = 1; i <= par; i++) { 
        printf("%d ", pares[i]);
    }
    printf("\nQuantidade de numeros pares: %d\n", par);

    return 0;
}
*/

//----------------------------------------------------------------------------------------------------------------------

//  08)

/*

#include <stdio.h>

int main() {
    int impares[6], pares[6], num, par = 0, impar = 0, divi, sair = 1;

    while (sair != 0) {
        if (par >= 5 || impar >= 5) {
            break;
        }
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);

        divi = num % 2;
        if (divi == 0) {
            par += 1;
            pares[par] = num;
            if (par >= 5) {
                break;
            }
        } else {
            impar += 1;
            impares[impar] = num; 
            if (impar >= 5) {
                break;
            }
        }
        printf("\nSe desejar sair do programa digite '0' \nSe deseja continuar digite '1': ");
        scanf("%d", &sair);
    }

    printf("\nNúmeros pares: ");
    for (int i = 1; i <= par; i++) {
        printf("%d ", pares[i]);
    }
   
    printf("\nNúmeros ímpares: ");
    for (int i = 1; i <= impar; i++) {
        printf("%d ", impares[i]);
    }
    
    return 0;
}

*/

//----------------------------------------------------------------------------------------------------------------------------------------------------

// 09)

/*

#include <stdio.h>

int main() {
    char gabarito[] = {'d', 'a', 'c', 'b', 'c', 'a', 'd', 'a', 'b', 'b', 'c', 'd', 'a', 'c', 'b', 'd', 'a', 'c', 'b', 'd'};
    char resposta[20]; 
    char nome[30]; 
    float acertos = 0;

    for(int c = 0; c < 50; c++){
        printf("Digite o nome do aluno: ");
        scanf("%s", nome);
        
        for (int i = 0; i < 20; i++) {
            printf("Digite a resposta da %dª questao: ", i + 1);
            scanf(" %c", &resposta[i]); 
        }
        
        acertos = 0;
        for (int i = 0; i < 20; i++) {
            if (resposta[i] == gabarito[i]) {
                acertos += 0.5;
            }
        }
        
        if(acertos >= 6){
            printf("\n O aluno %s esta aprovado \n Nota: %.2f \n\n", nome, acertos);
        }
        else{
            printf("\n O aluno %s esta reprovado \n Nota: %.2f \n\n", nome, acertos);
        }
    }    

    return 0;
}

*/

//---------------------------------------------------------------------------------------------------------------------//

//  11)

/*

#include <stdio.h>

int main()
{
    int nums[15], num, res; 


    for (int i = 0; i <= 14; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num); 
        nums[i] = num;
    }
    
    printf("\nEm qual ordem desseja ver a lista? \n'1' Direta ou '2' inversa: ");
    scanf("%d", &res); 
    
    if(res == 2){
        for (int i = 14; i >= 0; i--) {
            printf("%d  ", nums[i]);
        }
    }
    
    if(res == 1){
        for (int i = 0; i <= 14; i++) {
            printf("%d  ", nums[i]);
        }
    }
    
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------------

// 12)

/*

#include <stdio.h>

int main() {
    int a, b, n[5], interv = 0, intNums[5];

    printf("Digite o valor de 'a': ");
    scanf("%d", &a);

    printf("Digite o valor de 'b': ");
    scanf("%d", &b);

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero inteiro para a lista: ");
        scanf("%d", &n[i]);
        if (n[i] >= a && n[i] <= b) {
            intNums[interv] = n[i];
            interv++; 
        }
    }

    if (interv > 0) {
        printf("\n%d numeros estao dentro desse intervalo\n", interv);
        printf("Números dentro do intervalo: ");
        for (int c = 0; c < interv; c++) {
            printf("%d ", intNums[c]);
        }
    } else {
        printf("\nNenhum numero dentro do intervalo");
    }

    return 0;
}

*/