#include <stdio.h>
#include <stdlib.h>

/**
Escriba un programa que, sin saberse previamente la cantidad de valores enteros que se ingresaran por teclado, se sumen los valores pares y se resten los valores impares. Además informe el promedio de los valores pares y cuantos impares se han ingresado. Todo termina cuando se ingresa un valor cero por teclado. Debe evaluar además que problemas pueden surgir en las operaciones matemáticas implicadas e impedirlos. Informe con un texto en caso de surgir errores
*/

/*
	valores divisibles por 2 se suman
	impares se restan
	promedio de los pares
	contar impares
	termina cuando ingresa cero
	informo erroes y los impido
	se leen por teclado valores enteros
	no se conoce cantidad
*/


int main(void)
{
	short numero;
	long suma=0;
	short contpares=0;
	short contimpares=0;
	long resta=0;
	float promedio;

	printf("Ingresar un entero (cero para salir): ");
	scanf("%hd",&numero);

	while(numero != 0)
	{
		if(numero %2 ==0)
		{
			/* verdadero para los pares */
			suma = suma + numero;
			contpares++;
		}
		else
		{
			/* falso para los impares */
			resta= resta - numero;
			contimpares++; /*contimpares = contimpares + 1 */
		}
		printf("Ingresar un entero (cero para salir): ");
		scanf("%hd",&numero);
	}

	if(contpares > 0) /* mayor short 32767 */
	{
		promedio= (float)suma / contpares;
		printf("Promedio= %g\n", promedio);
		printf("Fueron %hd pares y su suma es %ld\n",contpares,suma);
	}
	else
	{
		printf("No se ingresaron numeros pares\n");
	}


	if(contimpares > 0) /* mayor short 32767 */
	{

		printf("Fueron %hd impares y su resta es %ld\n",contimpares,resta);
	}
	else
	{
		printf("No se ingresaron numeros impares\n");
	}

	return 0;
}
