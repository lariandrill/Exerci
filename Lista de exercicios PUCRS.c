
// 1)

/*

#include <stdio.h>

int main() {
    int a = 0, c, neg = 0;

    for(c = 1; c <= 5; c++) {
        printf("Digite um numero inteiro: "); 
        scanf("%d", &a);
        if (a < 0) {
            neg += 1;
        }
    }
    printf("Foram digitados %d numeros negativos", neg);
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------

// 3)
/*
#include <stdio.h>

int main() {
    int filhos = 0, n = 0, pessoas = 0, cem = 0;
    float salarios = 0, nums = 0, mediaSal = 0, mediafil = 0, salMax = 0, percent = 0;
    
    printf("Digite um numero negativo para sair");

    do {
        printf("\nDigite o valor do salário do cidadão: ");
        scanf("%f", &nums);
        
        if (nums > 0) {
            salarios += nums;
            printf("\nDigite o número de filhos do cidadão: ");
            scanf("%d", &n);
            filhos += n;
            pessoas += 1;

            if (salMax < nums) {
                salMax = nums;
            }

            if (nums < 100.0) {
                cem += 1;
            }
        }
    } while (nums > 0);

    mediaSal = salarios / pessoas;
    mediafil = (float)filhos / pessoas; 

    if (pessoas > 0) { 
        percent = (cem * 100.0) / pessoas;
    }

    printf("\nMedia do salário da população: %.2f", mediaSal);
    printf("\nMedia de filhos da população: %.1f", mediafil);
    printf("\nValor do maior Salário: %.2f", salMax);
    printf("\n%.2f%% dos cidadãos têm salário menor que 100,00 R$", percent);

    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------------


// 4)

/*
#include <stdio.h>

int main() {
    int anos = 0;
    float Chico = 1.10, Ze = 1.50;

    while (Chico <= Ze) {
        Chico += 0.03;
        Ze += 0.02;
        anos += 1;
    }

    printf("Serão necessários %d anos para que Chico %.2f m fique maior que Ze %.2f m\n", anos, Chico, Ze);
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------

// 5)

/*
#include <stdio.h>

int main() {
    int nums, soma, c;
    float media; 

    while(1){
        printf("Digite um valor inteiro e positivo ou um negativo par sair do programa: ");
        scanf("%d", &nums);
        if(nums > 0){
            soma += nums;
            c += 1;
        }
        else{
            break;
        }
    }
    
    media = soma / c;
    printf("\nA media dos numeros digitados é: %.1f", media);

    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------

// 07)

/*
#include <stdio.h>

int main() {
    int  c, Codigo, i;
    float nums, soma, media; 

    while(1){
        
        printf("Digite o Codigo do aluno: ");
        scanf("%d", &Codigo);
        
        if(Codigo != 0){
            soma = 0;
            media = 0;
            for(i = 1; i <= 3; i++){
                printf("Digite a nota do aluno: ");
                scanf("%f", &nums);
                soma += nums;
            }
            media = soma / 3;
            printf("\nA media das notas do aluno é: %.1f \n", media);
        }
        else{
            break;
        }
    }
    
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------------

// 8)

/*
#include <stdio.h>

int main() {
    int c = 0;
    float nums, soma = 0, media, divi;

    while (1) {
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%f", &nums);
        
        if (nums == 0) {
            break; 
        }

        divi = (int)nums % 2; 
        if (divi == 0) {
            soma += nums; 
            c += 1;
        }
    }

    if (c == 0) {
        printf("\nNenhum numero par foi digitado.\n");
    } else {
        media = soma / c;
        printf("\nA media dos numeros pares e: %.1f\n", media);
    }

    return 0;
}
*/

//------------------------------------------------------------------------------------------------------------

// 9)

/*
#include <stdio.h>

int main() {
    int i, num, maior = 0, menor = 0;
    
    for(i = 1; i <= 50; i++){
        printf("Digite um numero inteiro positivo: "); 
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
        if(i == 1){
            menor = num;
        }
        
        if(num < menor){
            menor = num;
        }
        
    }
    
    printf("O maior numero é: %d\n", maior);
    printf("O menor numero é: %d\n", menor);

    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------

// 13)

/*
#include <stdio.h>

int main() {
    int i, num, fatorial = 1, c = 1, a = 1;
    printf("Digite um numero inteiro positivo para calcular o fatorial: "); 
    scanf("%d", &num);
    printf("0! = 1\n");
    
    for(i = 1; i <= num; i++){
        fatorial = fatorial * i;

        if(i == 1){
            printf("1! = 1\n");
        }
        else{
            printf("%d! = %d x %d = %d\n", c, a, i, fatorial);
        }
        c++;
        a = fatorial;
    }
    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------

// 15)

/*
#include <stdio.h>

int main() {
   int num, a = 0, b = 0, c = 0, d = 0;
   
   while(1){
       printf("Digite um numero inteiro: "); scanf("%d", &num);
       if(num >= 0 && num <= 25){
           a += 1;
       }
       else if(num >= 26 && num <= 50){
           b += 1;
       }
       else if(num >= 51 && num <= 75){
           c += 1;
       }
       else if(num >= 76 && num <= 100){
           d += 1;
       }
       else if(num < 0){
           break;
       }
   }
    
    printf("\nNumeros entre [0,25]: %d \nNumeros entre [26,50]: %d \nNumeros entre [51,75]: %d \nNumeros entre [76,100]: %d", a, b, c, d);
    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------

// 16)

/*
#include <stdio.h>
#include <math.h>

int main() {
   int num, quadrado, cubo;
   float raiz;
   
   do{
       printf("\nDigite um numero inteiro (ou '0' para sair): "); scanf("%d", &num);
       quadrado = num * num;
       cubo = num * num * num;
       raiz = sqrt(num);
       
       printf("\nNumero digitado: %d", num);
       printf("\nO quadrado de %d é: %d", num, quadrado);
       printf("\nO cubo de %d é: %d", num, cubo);
       printf("\nA raiz quadrada de %d é: %.2f \n", num, raiz);
       
       if(num <= 0){
            printf("\nPrograma encerrado!");   
       }
   }
   while(num > 0);
  
    return 0;
}
*/