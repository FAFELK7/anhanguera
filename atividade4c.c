/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    // Solicita os três lados do triângulo
    printf("Digite o tamanho do primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    printf("Digite o tamanho do segundo lado do triângulo: ");
    scanf("%f", &lado2);
    printf("Digite o tamanho do terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    // Verifica o tipo de triângulo
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é equilátero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }

    return 0;
}





