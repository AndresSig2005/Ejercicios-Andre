#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero1, numero2;
    char Respuesta,  
    int multiplicacion, division, suma, resta, opcion; 

    printf("\nIngrese el primer numero--> ");
    scanf("%d", &numero1); 
    printf("\nIngrese el segundo numero--> ");
    scanf("%d", &numero2);
    printf("\n 1. Suma  2. Resta  3.Multiplicacion  4.Division");
    printf("\nQue operacion quiere hacer -->");
    scanf("%d", &opcion);
   do
   {
    switch (opcion)
    {
    case 1:
        suma = numero1 + numero2;
        printf("El resultado de la suma es: %d", suma); 
        break;
    case 2:
        resta = numero1 - numero2;
        printf("El resultado de su resta es: %d", resta); 
        break;
    case 3:
        multiplicacion = numero1 * numero2;
        printf("El resultado de su multiplicacion es: %d", multiplicacion); 
        break;
    case 4:
        division = numero1 / numero2;
        printf("El resultado de su division es: %d", division); 
        break;
        printf("\nDesea Continuar--> ");
        scanf(" %c", &Respuesta); 
    }
   } while (Respuesta == 'S' || 's');
   
    return 0;
}
