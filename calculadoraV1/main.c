#include <stdio.h>
#include <stdlib.h>
#include "diego.h"

int main()
{
    int flag1=0, flag2=0, flagDiv=0,flagFact1=0, flagFact2=0, flagCalc=0, fact1, fact2;
    char opcion;
    float numero1, numero2, aux, aux2;
    float total, total1, total2, total3;

    do
    {
        system("cls");
        if (flag1==0)
        {
            printf("1. Ingresar primer operando: X \n");
        }
        else
        {
            printf("1. Ingresar primer operando: %.2f \n",numero1);
        }
        if (flag2==0)
        {
            printf("2. Ingresar segundo operando: X \n");
        }
        else
        {
            printf("2. Ingresar segundo operando: %.2f\n",numero2);
        }

        printf("3. Calcular todas las operaciones \n");
        printf("4. Informar resultados \n");
        printf("5. SALIR\n");
        printf("Elija una opcion\n\n");
        scanf("%c", &opcion);
        fflush(stdin);

        if (opcion=='1')
        {
            flag1=1;
            printf("Ingrese operando A:\n");
            if(scanf("%f",&aux)==0)
            {
                flag1=0;
                printf("No es un numero valido\n");
            }
            else
            {
              numero1=aux;
            }
        }
        else if (opcion=='2')
        {
            if (flag1==1)
            {
                flag2=1;
                printf("Ingrese operando B:\n");
                if (scanf("%f",&aux2)==0)
                {
                    flag2=0;
                    printf("No es un numero valido\n");
                }
                else
                {
                    numero2=aux2;
                }
            }
            else if(flag2==0)
            {
                printf("Primero ingrese primer operando\n");
            }
        }
        else if (opcion=='3')
        {
            if (flag1==1 && flag2==1)
            {
                total = sumar(numero1,numero2);
                total1 = resta(numero1,numero2);
                total2 = producto(numero1,numero2);
                if (numero2>0)
                {
                    flagDiv=1;
                    total3 = division(numero1,numero2);
                }
                else if ((numero1<0 && numero2<0) || (numero1>0 && numero2<0))
                {
                    flagDiv=1;
                    total3 = division(numero1,numero2);
                }
                if (numero1>=0)
                {
                    fact1 = factorial(numero1);
                    flagFact1=1;
                }
                if (numero2>=0)
                {
                    fact2 = factorial(numero2);
                    flagFact2=1;
                }

                flagCalc=1;
                printf("Calculos echos!!!!\n");
            }
            else
            {
                printf("Cargar datos antes de calcular\n");
            }
        }
        else if (opcion=='4')
        {
            if (flagCalc==1)
            {
                    printf("La suma de los operandos %.2f mas %.2f es: %.2f\n",numero1,numero2,total);
                    printf("La resta de los operandos %.2f menos %.2f es: %.2f\n",numero1,numero2,total1);
                    printf("La multiplicacion de los operandos %.2f por %.2f es: %.2f\n",numero1,numero2,total2);
                if (flagDiv==1)
                {
                    printf("La division de los operandos %.2f dividido %.2f es: %.2f\n",numero1,numero2,total3);
                }
                else if (numero2==0)
                {
                    printf("No es posible dividir por 0\n");
                }
                if (flagFact1==1)
                {
                    printf("El factorial del operando %.0f es: %d\n",numero1,fact1);
                }
                else
                {
                    printf("No es posible realizar el factorial de un negativo\n");
                }
                if (flagFact2==1)
                {
                    printf("El factorial del operando %.0f es: %d\n",numero2,fact2);
                }
                else
                {
                    printf("No es posible realizar el factorial de un negativo\n");
                }

            }
            else if(flagCalc==0 && flag1==1 && flag2==1)
            {
                printf("No es posible informar sin antes calcular!\n ");
            }

            if (flag1==0 && flag2==0 && flagCalc==0)
            {
                printf("ERROR\nNo es posible calcular ni informar\n");
            }
             if (flagFact1==1)
            {
                flagFact1=0;
            }
            if (flagFact2==1)
            {
                flagFact2=0;
            }

        }


    system("pause");

    }while(opcion!='5');


    return 0;
}
