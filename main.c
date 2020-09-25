#include <stdio.h>

int main(){
    char nombre[100];
    unsigned int edad;

    printf("Hola mundo\n");
    printf("ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s ", nombre);
    printf("ingresa tu edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u", edad + 1);

    return 0;
}