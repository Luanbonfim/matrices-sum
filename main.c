//Developed by Luan Bonfim
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

int main()
{
    setlocale(LC_ALL, "portuguese");

    int mA[TAM][TAM], mB[TAM][TAM], mR[TAM][TAM];
    int nlA, ncA, nlB, ncB, l, c;

    // Pedir ao usuário as dimensões da matriz A
    printf("\nQual a quantidade de linhas da matriz A:");
    scanf("%i", &nlA);
    printf("\nQual a quantidade de colunas da matriz A:");
    scanf("%i", &ncA);

    // Pedir ao usuário as dimensões da matriz B
    printf("\nQual a quantidade de linhas da matriz B:");
    scanf("%i", &nlB);
    printf("\nQual a quantidade de colunas da matriz B:");
    scanf("%i", &ncB);

    // Verificar se as dimensões estão dentro do limite da capacidade do programa
    if ((nlA>0) && (nlA<=TAM) &&
        (ncA>0) && (ncA<=TAM) &&
        (nlB>0) && (nlB<=TAM) &&
        (ncB>0) && (ncB<=TAM))
    {
        // Verificar se as dimensões das matrizes A e B são compatíveis para realizar a SOMA
        if ((nlA==nlB) && (ncA==ncB)){
            // Solicitar o preenchimento da matriz A
            printf("\n\nDigite os elementos da matriz A:");
            for (l=0; l<nlA; l++){
                for (c=0; c<ncA; c++){
                    printf("mA[%i][%i] = ", l, c);
                    scanf("%i", &mA[l][c]);
                }
            }

            // Solicitar o preenchimento da matriz B
            printf("\n\nDigite os elementos da matriz B:");
            for (l=0; l<nlB; l++){
                for (c=0; c<ncB; c++){
                    printf("mB[%i][%i] = ", l, c);
                    scanf("%i", &mB[l][c]);
                }
            }

            // Calcular a soma das matrizes A e B
            printf("\n\nA matriz resultado da soma de A e B (A + B) é:\n");
            for (l=0; l<nlB; l++){
                for (c=0; c<ncB; c++){
                    mR[l][c] = mA[l][c] + mB[l][c];
                    printf("%i", mR[l][c]);
                }
                printf("\n");
            }

        }else{
            printf("\n\nERRO: As matrizes A e B não possuem dimensões compatíveis para se realizar a SOMA");
        }
    }else
    {
        printf("\n\nERRO: As dimensões escolhidas estão fora da capacidade do programa que é %i X %i", TAM, TAM);
    }


    return 0;
}
