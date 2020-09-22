#include <stdio.h>
#include <stdlib.h>
int main(){
    char nombre[100];
    int edad;
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Porfavor ingrese su edad: ");
    scanf("%i",&edad);
    printf("Hola %s y vas a cumplir %i",nombre, edad+1);
    return 0;
 }
 