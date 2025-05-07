#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Ingrese dos números enteros:\n");

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int ab = a + b;
    printf("La suma es: %d\n", ab);

    printf("Presione Enter para continuar...\n");
    getchar();
    getchar();  // Captura el Enter después del último scanf
    return 0;
}
