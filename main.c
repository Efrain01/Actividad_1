#include <stdio.h>
#include <stdlib.h>
int main(){
    char nombre[100];
    int edad, dia,mes,anio;
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    fflush;
    printf("Porfavor ingrese su edad: ");
    scanf("%i",&edad);
    printf("Ingrese su dia de nacimiento: ");
    scanf("%i",&dia);
    printf("Ingresa el numero del mes de tu nacimiento: ");
    scanf("%i",&mes);
    fflush;
    printf("Ingresa el anio de tu nacimiento: ");
    scanf("%i",&anio);
    printf("Hola %s:Tu vas a cumplir %i",nombre, edad+1);
    printf(" En el %i",edad+1+anio);
    return 0;
 }
 
