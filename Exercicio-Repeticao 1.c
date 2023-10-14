// 1) a)

#include <stdio.h>

int main()
{
    int nota;
    printf("Digite a nota do aluno entre 0 e 100: ");
    scanf("%d", &nota);
    
    if(nota > 60){
        printf("Aluno aprovado");
    }else{
        printf("Aluno reprovado");
    }

    return 0;
}

// 1) b)

#include <stdio.h>

int main()
{
    int nota, cont = 1;
    
    while(1){
        printf("\nAluno N %d", cont);
        printf("\nDigite a nota do aluno entre 0 e 100: ");
        scanf("%d", &nota);
        
        if(nota > 100 || nota < 0){
            printf("\nNota invalida \nPrograma finalizado!\n");
            break;
        }
        else if(nota > 60 && nota < 101){
            printf("\nAprovado\n");
        }
        else{
            printf("\nReprovado\n");
        }
        cont++;
    }
    return 0;
}

// 1) c)

#include <stdio.h>

int main()
{
    int nota, cont = 1, Alunos;
    printf("Digite o numero de alunos: ");
    scanf("%d", &Alunos);
    
    while(cont <= Alunos){
        printf("\nAluno N %d", cont);
        printf("\nDigite a nota do aluno entre 0 e 100: ");
        scanf("%d", &nota);
        
        if(nota > 100 || nota < 0){
            printf("\nNota invalida\n");
        }
        else if(nota > 60 && nota < 101){
            printf("\nAprovado\n");
        }
        else{
            printf("\nReprovado\n");
        }
        cont++;
    }
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------//

// 2) a)

#include <stdio.h>

int main()
{
    int n, cont = 0, tab;
    printf("\nDigite um numero inteiro para a tabuada: ");
    scanf("%d", &n);
    
    while(cont <= 10){
        tab = n * cont;
        printf("\n%d x %d = %d", n, cont, tab);
        
        cont++;
    }
    return 0;
}

// 2) b)

#include <stdio.h>

int main()
{
    int n, cont = 0, tab;
    
    while(1){
        printf("\n\nDigite um numero inteiro para a tabuada: ");
        scanf("%d", &n);
        if(n != 0){
            cont = 0;
            while(cont <= 10){
                tab = n * cont;
                printf("\n%d x %d = %d", n, cont, tab);
        
                cont++;
            }
        }   
        else{
            printf("\nPrograma finalizado!");
            break;
        }
    }    
    return 0;
}

// 2) c)

#include <stdio.h>

int main()
{
    int n, cont = 0, tab;
    printf("Digite um numero inteiro entre 1 e 9 para a tabuada: ");
    scanf("%d", &n);
    
    if(n > 0 && n < 10){
        cont = 0;
        while(cont <= 10){
            tab = n * cont;
            printf("\n%d x %d = %d", n, cont, tab);
            cont++;
        }
    }   
    else{
        printf("\nNumero invalido Programa finalizado!");
    }
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------//

// 3) a)

#include <stdio.h>

int main() {
    int limite = 0;
    char genero;
    
    while (limite <= 1) {
        printf("\nDigite o genero do usuario 'F' ou 'M': ");
        genero = getchar();
        
        while (getchar() != '\n');
        
        if (genero == 'M' || genero == 'm') {
            printf("\nUsuario de genero Masculino");
            break;
            
        } else if (genero == 'F' || genero == 'f') {
            printf("\nUsuario de genero Feminino");
            break;
        }
        
    }
    
    return 0;
}

// 3) b)

#include <stdio.h>

int main() {
    int limite = 0, idade;
    
    while (limite <= 1) {
        printf("\nDigite a idade do usuario entre 0 e 130: ");
        scanf("%d", &idade);
        
        if (idade < 0 || idade > 130){
            printf("\n Valor invalido, Tente novamente!");
            
        } else{
            printf("\nUsuario com %d anos", idade);
            break;
        }
        
    }
    
    return 0;
}

// 3) c)

#include <stdio.h>

int main() {
    int limite = 0, idade = 0;
    char genero;
    
    while (limite <= 1) {
        printf("\nDigite o genero do usuario 'F' ou 'M': ");
        genero = getchar();
        
        while (getchar() != '\n');
        
        if (genero == 'M' || genero == 'm') {
            printf("Usuario de genero Masculino\n");
            break;
            
        } else if (genero == 'F' || genero == 'f') {
            printf("Usuario de genero Feminino\n");
            break;
        }
    }
    
    while (limite <= 1) {
        printf("\nDigite a idade do usuario entre 0 e 130: ");
        scanf("%d", &idade);
        
        if (idade < 0 || idade > 130){
            printf("Valor invalido, Tente novamente!\n");
        } else{
            printf("Usuario com %d anos", idade);
            break;
        }
        
    }
    
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------//

// 1) a)
#include <stdio.h>

int main(){
    int N, contador;
    
    printf("Digite um numero qualquer inteiro e positivo: ");
    scanf("%d", &N);
    contador = 1;
    
    while(contador < N){
        printf("%d \n", contador);
        contador++;
    }
    printf("%d", N);
    
}


// 1) b)
#include <stdio.h>

int main(){
    int i, j, N;
    
    printf("Digite um numero qualquer inteiro e positivo: ");
    scanf("%d", &N);
    
    for(i = 1; i <= N; i++){
        
        for(j = 1; j <= i; j++){
            
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------//]

// 2) a)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int randNum1 = (rand() % 10), randNum2 = (rand() % 10), resposta, num;
    resposta = randNum1 * randNum2;
    
    while(resposta != num){
        
        printf("Digite quanto eh %d x %d: ", randNum1, randNum2);
        scanf("%d", &num);
        
        if(resposta != num){
            printf("Resposta errada! Tente novamente\n");
        }
        else{
            printf("Resposta correta! %d x %d = %d", randNum1, randNum2, num);
            break;
        }
       
    }
    return 0;
}

// 2) b)


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int randNum1, randNum2, resposta, num, count = 1;
    
    while(count < 16){
        randNum1 = (rand() % 10);
        randNum2 = (rand() % 10);
        resposta = randNum1 * randNum2;
        printf("Operação %d\n\n", count);
        while(resposta != num){
        
            printf("Digite quanto eh %d x %d: ", randNum1, randNum2);
            scanf("%d", &num);
        
            if(resposta != num){
                printf("Resposta errada! Tente novamente\n");
            }
            else{
                printf("Resposta correta! %d x %d = %d\n\n", randNum1, randNum2, num);
                break;
            }
        }
        count ++;
    }
    return 0;
}

// 2) Desafio)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int randNum1 = (rand() % 10), randNum2 = (rand() % 10), resposta, num, chances = 5;
    
    resposta = randNum1 * randNum2;
 
    while(chances != 0){
        printf("Numero de chances: %d\n\n", chances);
        printf("Digite quanto eh %d x %d: ", randNum1, randNum2);
        
        scanf("%d", &num);
        
        if(resposta == num){
            printf("Parabems, a resposta esta correta! \n%d x %d = %d\n\n", randNum1, randNum2, num);
            break; 
        }
        else{
            printf("\nResposta errada!\n");
            chances --;
        }
        if(chances == 0){
            printf("\nAcabou o numero de chances! \nA resposta de %d * %d = %d", randNum1, randNum2, resposta);
        }
    }
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------//

// 3)


#include <stdio.h>

int main()
{
    int i, numDepend;
    float Aux;
    
    for(i = 1; i <= 30; i++){
        printf("\n\nFuncionario N: %d", i);
        
        printf("\nNumeros de dependentes menores de 18 anos: ");
        scanf("%d", &numDepend);
        Aux = numDepend * 60;
        
        printf("\nO funcionario N %d vai receber: %.2f R$", i, Aux);
    }
    
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------//

// 4)

#include <stdio.h>

int main()
{
    int numLojas, numItems, contador, item, i;
    float totalPrec, Prec, TodosPrec, totalitems;
    printf("Digite o numero de lojas: ");
    scanf("%d", &numLojas);
    contador = 1;
    
    while(contador <= numLojas){
        printf("\n\n%d Loja", contador);
        printf("\nNumeros de compras da %d loja: ", contador);
        scanf("%d", &numItems);
        
        for(i = 1; i <= numItems; i++){
            
            printf("\n Quantidade do %d Item: ", i);
            scanf("%d", &item);
                
            printf("\n Precos do %d Item: ", i);
            scanf("%f", &Prec); 
            
            totalPrec = item * Prec;
            totalitems += totalPrec;
        }
        contador ++;
    }
    
    printf("\nTotal de todas as compras: %.2f R$", totalitems);
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------//

// 5) a)

#include <stdio.h>

int main(){
    int numAl, contador;
    printf("Numero de alunos que farao duplas: ");
    scanf("%d", &numAl);
    
    for(contador = 1; contador <= numAl; contador ++){
        if(numAl != contador){
            printf("%d e %d\n", contador, numAl);
            numAl--;
        }
        else{
            printf("%d", contador);
            break;
        }
    }
}

// 5) b)

#include <stdio.h>

int main(){
    int numAl, contador, turmas, cont2 = 1;
    printf("\nNumero de turmas: ");
    scanf("%d", &turmas);
    
    while(cont2 <= turmas){
         printf("\nNumero de alunos que farao duplas da %d turma: ", cont2);
        scanf("%d", &numAl);
    
        for(contador = 1; contador <= numAl; contador ++){
            if(numAl != contador){
                printf("%d e %d\n", contador, numAl);
                numAl--;
            }
            else{
                printf("%d", contador);
                break;
            }
        }
        cont2++;
    }
}