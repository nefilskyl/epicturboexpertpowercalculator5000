#include<stdlib.h>

int error_num=0;

void error_report(int e)
{
    switch(e)
    {
        case 0: break;
        case 1: printf("Error: Dividing by zero\n");
            break;
        case 2: printf("Error: Non-natural exponent\n");
            break;
        case 3: printf("Error: Factorial of negative number\n");
            break;
        case 4: printf("Error: Logarithm of negative number\n");
            break;
        case 5: printf("Error: \n");
            break;
        case 6: printf("Error: \n");
            break;
        case 7: printf("Error: \n");
            break;
        case 8: printf("Error: \n");
            break;
        case 9: printf("Error: \n");
            break;
        case 10: printf("Error: \n");
            break;

    }
}
