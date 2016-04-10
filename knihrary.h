#include <math.h>

/*
//pomocna funkce pro vypocitani zadanach cislic po desetinne carce
int dadp(char *str)
{
  int index = 0,rightLen = 0;
  const char s[2] = ".";
  char *token;
  token = strtok(str, s);

   while( token != NULL ) 
   {
      if (index==1)
      {
        rightLen = strlen(token);
      }
    token = strtok(NULL, s);
    index++;
   }
   return rightLen;
}
*/

//scitani
double add(double i1, double i2)
{

    /*
    char array1[20];
    sprintf(array1,"%lf", i1);
    char array2[20];
    sprintf(array2,"%lf", i2);
    printf("String: %s and %s\n", array1, array2);
    int one = dadp(array1);
    int two = dadp(array2);
    printf("DADP: %d and %d \n", one, two);
    */

    if (i1 == NAN || i2 == NAN)
    {
        return NAN;
    }

    i1 = i1 * 10000;
    i2 = i2 * 10000;
    double vys = i1 + i2;
    vys= vys / 10000;
    return vys;
}

//odcitani
double sub(double i1, double i2)
{
    if (i1 == NAN || i2 == NAN)
    {
        return NAN;
    }

    i1 = i1 * 10000;
    i2 = i2 * 10000;
    double vys = i1 - i2;
    vys= vys / 10000;
    return vys;
}

//nasobeni
double mul(double i1, double i2)
{
    return i1 * i2;
}

//deleni
double division(double i1, double i2)
{
    if (i2 == 0)
        return NAN;
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
double ln (double x)  //funkce pro vypocet prirozeneho logaritmu pomoci zretezeneho zlomku
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
