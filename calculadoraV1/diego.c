#include "diego.h"

/** \brief Suma dos numeros flotantes.
 *
 * \param numero1 float: Primer operando a sumar.
 * \param numero2 float: Segundo operando a sumar.
 * \return float Resultado: Es el retorno del valor de la operacion.
 *
 */
float sumar(float numero1, float numero2)
{
    float resultado;

    resultado = numero1 + numero2;

    return resultado;
}


/** \brief Verifica que los numeros sean positivos o negativos, luego realiza la operacion.
 *
 * \param Es el primer valor de la resta
 * \param Es els egundo valor de la resta
 * \return Es el retorno del valor de la operacion
 *
 */
float resta (float numero1, float numero2)
{
    float resultado;

    if ((numero1<0 && numero2<0)|| (numero1<0 && numero2>0)| (numero1>0 && numero2<0))
    {
        resultado = numero1 + numero2;
    }
    else
    {
        resultado = (numero1) - (numero2);
    }


    return resultado;
}


/** \brief Realiza la division de dos numeros flotantes
 *
 * \param numero1 float: Es el multiplicando de la operacion
 * \param numero2 float: Es el multiplicador de la operacion
 * \return float: Es el retorno del valor de la operacion
 *
 */
float producto (float numero1, float numero2)
{
    float resultado;

    resultado = numero1 * numero2;

    return resultado;
}

/** \brief Realiza la division de dos numeros flotantes
 *
 * \param numero1 float: Primer numero el cual sera el dividendo
 * \param numero2 float: Segundo numero el cual sera el divisor
 * \return float: Es el cociente entre ambos numeros
 *
 */
float division(float numero1, float numero2)
{
    float resultado;

    resultado = (numero1/numero2);

    return resultado;
}

/** \brief Realiza el factorial de un numero
 *
 * \param numero float: Inicializamos el valor en 1 para realizar la operacion
 * \return float: Retorna el valor del factorial
 *
 */
int factorial(int numero)
{
    int  i = 1;
    int resultado = 1;

    for (i=1; i<= numero; i++)
    {
        resultado =(int)resultado*i;
    }

    return resultado;
}

