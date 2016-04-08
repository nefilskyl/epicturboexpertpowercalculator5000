#include <math.h>

 
//scitani
double add(double i1, double i2)
{
    return i1 + i2;
}

//odcitani
double sub(double i1, double i2)
{
    return i1 - i2;
}

//nasobeni
double mul(double i1, double i2)
{
    return i1 * i2;
}

//deleni
double div(double i1, double i2)
{
    return i1 / i2;
}

//faktorial
unsigned fact(int i1)
{
  int c, fact = 1;

  for (c = 1; c <= i1; c++)
    fact = fact * c;

  return fact;
}

//mocnina s prirozenym exponentem
double power (double i1, int i2)
{
    if (i2 == 0)
    {
        return 1;
    }

    double temp = i1;

    while (i2 != 1)
    {
        temp = temp * i1;
        i2--;
    }

    return temp;
}

//logaritmus
double logar (double x)  //funkce pro vypocet prirozeneho logaritmu pomoci zretezeneho zlomku
{
    double cf = 1.0;
    double a, b;
    unsigned int n = 100;


    if (x < 0)  //osetreni zaporneho cisla
    {
        return NAN;
    }

    if (x == 0)  //osetreni nuly
    {
        return -INFINITY;
    }

    if (x == INFINITY)  //osetreni nekonecna
    {
        return INFINITY;
    }

    if (x == NAN)  //osetreni NAN
    {
        return NAN;
    }

    x = (x - 1)/(1 + x);
    for (; n >= 1; n--)  //cyklus zretezeneho zlomku
    {
        a = x * x * n *n;
        b = 2*n -1;
        cf = b - (a / cf);
    }
    x = (2*x) / cf;
    return x;
}
