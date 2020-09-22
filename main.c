#include <stdio.h>
#include <stdlib.h>
int main(){
    char nombre[100];
    int edad, dia,mes,anio;
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Porfavor ingrese su edad: ");
    scanf("%i",&edad);
    printf("Ingrese su dia de nacimiento: ");
    scanf("%i",&dia);
    printf("Ingresa el numero del mes de tu nacimiento: ");
    scanf("%i",mes);
    printf("Ingrese el anio de tu cumpleaños: ");
    scanf("%i",&anio);
    printf("Hola %s Tu vas a cumplir %i",nombre, edad+1);
    return 0;
 }
 