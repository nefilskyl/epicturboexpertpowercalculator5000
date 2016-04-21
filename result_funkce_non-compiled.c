/**
 * 
 * @brief      { funkce provede vypocet na zaklade dane operace, vypise vysledek (prip. cislo erroru)na displej }
 * 
 * @param      op1     { prvni operand }
 * @param      op1     { druhy operand }   
 * @param      oper    { ukazatel na strukturu operatoru }
 *
 * @return     { navraci vysledek operace }
 */

double solution (double op1, double op2, struct operator *oper)
{
    double result;
       
    switch(oper->type)
    {
    case'+':
    result = add(op1,op2); 
    break;
    case'-':
    result = sub(op1,op2); 
    break;
    case'*':
    result = mul(op1,op2); 
    break;
    case'/':
    result = division(op1,op2); 
    break;
    case'!':
    result = fact(op1); 
    break; 
    case'l':
    result = ln(op1); 
    break; 
    case'p':
    result = power(op1,op2); 
    break;
    } // switch
    if (result == NAN)
    {
    error_report(error_num);
    // potreba poresit vypis na displej, mohla by to nejak delat tato fce    
    return 0;
    }
    else
    {
    // vypis result na displej
    return result;
    }
}

// switch na operaci - mam
// boolean na false - mam
// vytisknout vysledek
