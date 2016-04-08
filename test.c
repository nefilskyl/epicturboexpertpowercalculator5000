#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <stdio.h>
#include "knihrary.h"
#include "errors.h"
int main ()
{
double c;
// adding
    // zero
        c=111;
        c=add(0,0);
        assert(c == 0);

        c=0;
        c=add(0,1);
        assert(c == 1);

        c=0;
        c=add(0,871253);
        assert(c == 871253);

        c=0;
        c=add(0,5421.7163);
        assert(c == 5421.7163);

        c=0;
        c=add(0,-652);
        assert(c == -652);

        c=0;
        c=add(0,-8565.423);
        assert(c == -8565.423);

        c=0;
        c=add(0,3189725476);
        assert(c == 3189725476);
    // one
        c=0;
        c=add(1,0);
        assert(c == 1);

        c=0;
        c=add(1,1);
        assert(c == 2);

        c=0;
        c=add(1,871253);
        assert(c == 871254);

        c=0;
        c=add(1,5421.7163);
        assert(c == 5422.7163);

        c=0;
        c=add(1,-652);
        assert(c == -651);

        c=0;
        c=add(1,-8565.423);
        assert(c == -8564.423);

        c=0;
        c=add(1,3189725476);
        assert(c == 3189725477);

    // natural number
        c=0;
        c=add(9712,0);
        assert(c == 9712);

        c=0;
        c=add(9712,1);
        assert(c == 9713);

        c=0;
        c=add(9712,871253);
        assert(c == 880965);

        c=0;
        c=add(9712,5421.7163);
        assert(c == 15133.7163);

        c=0;
        c=add(9712,-652);
        assert(c == 9060);

        c=0;
        c=add(9712,-8565.423);
        // assert(c == (9712-8565.423));
        // printf("%.100f\n",(9712-8565.423));
        assert(c == 1146.577);

        c=0;
        c=add(9712,3189725476);
        assert(c == 3189735188);

    // positive with decimal point
        c=0;
        c=add(14.714,0);
        assert(c == 14.714);

        c=0;
        c=add(14.714,1);
        assert(c == 15.714);

        c=0;
        c=add(14.714,871253);
        assert(c == 871267.714);

        c=0;
        c=add(14.714,5421.7163);
        assert(c == 5436.4303);

        c=0;
        c=add(14.714,-652);
        assert(c == -610.286);

        c=0;
        c=add(14.714,-8565.423);
        assert(c == -8550.709);

        c=0;
        c=add(14.714,3189725476);
        assert(c == 3189725490.714);

    // negative int
        c=0;
        c=add(-1243,0);
        assert(c == -1243);

        c=0;
        c=add(-1243,1);
        assert(c == -1242);

        c=0;
        c=add(-1243,871253);
        assert(c == 870010);

        c=0;
        c=add(-1243,5421.7163);
        assert(c == 4178.7163);

        c=0;
        c=add(-1243,-652);
        assert(c == -1895);

        c=0;
        c=add(-1243,-8565.423);
        assert(c == -9808.423);

        c=0;
        c=add(-1243,3189725476);
        assert(c == 3189724233);

    // negative with decimal point
        c=0;
        c=add(-75.874,0);
        assert(c == -75.874);

        c=0;
        c=add(-75.874,1);
        assert(c == -74.874);

        c=0;
        c=add(-75.874,871253);
        assert(c == 871177.126);

        c=0;
        c=add(-75.874,5421.7163);
        assert(c == 5345.8423);

        c=0;
        c=add(-75.874,-652);
        assert(c == -727.874);

        c=0;
        c=add(-75.874,-8565.423);
        assert(c == -8641.297);

        c=0;
        c=add(-75.874,3189725476);
        assert(c == 3189725400.126);

    // specialities
        c=0;
        c=add(-INFINITY,2);
        assert(c == -INFINITY);

        c=0;
        c=add(NAN,4);
        assert(c == NAN);

        c=0;
        c=add(INFINITY,14);
        assert(c == INFINITY);

        c=0;
        c=add(4,INFINITY);
        assert(c == INFINITY);

        c=0;
        c=add(-653.4,-INFINITY);
        assert(c == -INFINITY); // nebo zas nejaky undef

        c=0;
        c=add(-23.87,NAN);
        assert(c == NAN);

        c=0;
        c=add(NAN,NAN);
        assert(c == NAN);

        c=0;
        c=add(-INFINITY,NAN);
        assert(c == NAN);

        c=0;
        c=add(NAN,INFINITY);
        assert(c == NAN);

        c=0;
        c=add(-INFINITY,INFINITY);
        assert(c == NAN);

        c=0;
        c=add(INFINITY,-INFINITY);
        assert(c == NAN);

// substraction
    //zero
        c=111;
        c=sub(0,0);
        assert(c == 0);

        c=0;
        c=sub(0,1);
        assert(c == -1);

        c=0;
        c=sub(0,871253);
        assert(c == -871253);

        c=0;
        c=sub(0,5421.7163);
        assert(c == -5421.7163);

        c=0;
        c=sub(0,-652);
        assert(c == 652);

        c=0;
        c=sub(0,-8565.423);
        assert(c == 8565.423);

        c=0;
        c=sub(0,3189725476);
        assert(c == -3189725476);
    // one
        c=0;
        c=sub(1,0);
        assert(c == 1);

        c=0;
        c=sub(1,1);
        assert(c == 0);

        c=0;
        c=sub(1,871253);
        assert(c == -871252);

        c=0;
        c=sub(1,5421.7163);
        assert(c == -5421.7163);

        c=0;
        c=sub(1,-652);
        assert(c == 653);

        c=0;
        c=sub(1,-8565.423);
        assert(c == 8566.423);

        c=0;
        c=sub(1,3189725476);
        assert(c == -3189725475);

    // natural number
        c=0;
        c=sub(9712,0);
        assert(c == 9712);

        c=0;
        c=sub(9712,1);
        assert(c == 9711);

        c=0;
        c=sub(9712,871253);
        assert(c == -861541);

        c=0;
        c=sub(9712,5421.7163);
        assert(c == 4290.2837);

        c=0;
        c=sub(9712,-652);
        assert(c == 10364);

        c=0;
        c=sub(9712,-8565.423);
        assert(c == 18277.423);

        c=0;
        c=sub(9712,3189725476);
        assert(c == -3189715764);

    // positive with decimal point
        c=0;
        c=sub(14.714,0);
        assert(c == 14.714);

        c=0;
        c=sub(14.714,1);
        assert(c == 13.714);

        c=0;
        c=sub(14.714,871253);
        assert(c == -871238.286);

        c=0;
        c=sub(14.714,5421.7163);
        assert(c == -5407.0023);

        c=0;
        c=sub(14.714,-652);
        assert(c == 666.714);

        c=0;
        c=sub(14.714,-8565.423);
        assert(c == 8580.137);

        c=0;
        c=sub(14.714,3189725476);
        assert(c == -3189725461.286);

    // negative int
        c=0;
        c=sub(-1243,0);
        assert(c == -1243);

        c=0;
        c=sub(-1243,1);
        assert(c == -1244);

        c=0;
        c=sub(-1243,871253);
        assert(c == -872496);

        c=0;
        c=sub(-1243,5421.7163);
        assert(c == -6664.7163);

        c=0;
        c=sub(-1243,-652);
        assert(c == -591);

        c=0;
        c=sub(-1243,-8565.423);
        assert(c == 7322.423);

        c=0;
        c=sub(-1243,3189725476);
        assert(c == -3189726719);

    // negative with decimal point
        c=0;
        c=sub(-75.874,0);
        assert(c == -75.874);

        c=0;
        c=sub(-75.874,1);
        assert(c == -76.874);

        c=0;
        c=sub(-75.874,871253);
        assert(c == -871328.874);

        c=0;
        c=sub(-75.874,5421.7163);
        assert(c == -5497.5903);

        c=0;
        c=sub(-75.874,-652);
        assert(c == 576.126);

        c=0;
        c=sub(-75.874,-8565.423);
        assert(c == 8489.549);

        c=0;
        c=sub(-75.874,3189725476);
        assert(c == -3189725551.874);

    // specialities
        c=0;
        c=sub(-INFINITY,2);
        assert(c == -INFINITY);

        c=0;
        c=sub(NAN,4);
        assert(c == NAN);

        c=0;
        c=sub(INFINITY,14);
        assert(c == INFINITY);

        c=0;
        c=sub(4,INFINITY);
        assert(c == INFINITY);

        c=0;
        c=sub(-653.4,-INFINITY);
        assert(c == -INFINITY); // nebo zas nejaky undef

        c=0;
        c=sub(-23.87,NAN);
        assert(c == NAN);

        c=0;
        c=sub(NAN,NAN);
        assert(c == NAN);

        c=0;
        c=sub(-INFINITY,NAN);
        assert(c == NAN);

        c=0;
        c=sub(NAN,INFINITY);
        assert(c == NAN);

        c=0;
        c=sub(-INFINITY,INFINITY);
        assert(c == NAN);

        c=0;
        c=sub(INFINITY,-INFINITY);
        assert(c == NAN);

// division

    //zero + self
        c=0;
        c=division(0,0);
        assert(c == NAN);

        c=0;
        c=division(42,0);
        assert(c == NAN);

        c=0;
        c=division(-67.412,0);
        assert(c == NAN);
        
        c=0;
        c=division(816.7624,816.7624);
        assert(c == 1);

    // one
        c=42;
        c=division(0,1);
        assert(c == 0);

        c=0;
        c=division(1,1);
        assert(c == 1);

        c=0;
        c=division(871253,1);
        assert(c == 871253);

        c=0;
        c=division(5421.7163,1);
        assert(c == 5421.7163);

        c=0;
        c=division(-652,1);
        assert(c == -652);

        c=0;
        c=division(-8565.423,1);
        assert(c == -8565.423);

        c=0;
        c=division(3189725476,1);
        assert(c == 3189725476);

    // natural number
        c=42;
        c=division(0,912);
        assert(c == 0);

        c=0;
        c=division(1,912);
        assert(c == 0.0011);

        c=0;
        c=division(871253,912);
        assert(c == 955.32127);

        c=0;
        c=division(5421.7163,912);
        assert(c == 5.94486);

        c=0;
        c=division(-652,912);
        assert(c == -0.71491);

        c=0;
        c=division(-8565.423,912);
        assert(c == -9.39191);

        c=0;
        c=division(3189725476,912);
        assert(c == 3497506.00439);

    // positive with decimal point
        c=42;
        c=division(0,14.714);
        assert(c == 0);

        c=0;
        c=division(1,14.714);
        assert(c == 0.06796);

        c=0;
        c=division(871253,14.714);
        assert(c == 59212.51869);

        c=0;
        c=division(5421.7163,14.714);
        assert(c == 368.47331);

        c=0;
        c=division(-652,14.714);
        assert(c == -44.31154);

        c=0;
        c=division(-8565.423,14.714);
        assert(c == -582.12743);

        c=0;
        c=division(3189725476,14.714);
        assert(c == 216781668.88677);

    // negative int
        c=42;
        c=division(0,-1243);
        assert(c == 0);

        c=0;
        c=division(1,-1243);
        assert(c == -0.0008);

        c=0;
        c=division(871253,-1243);
        assert(c == -700.92759);

        c=0;
        c=division(5421.7163,-1243);
        assert(c == -4.3618);

        c=0;
        c=division(-652,-1243);
        assert(c == 0.52454);

        c=0;
        c=division(-8565.423,-1243);
        assert(c == 6.89093);

        c=0;
        c=division(3189725476,-1243);
        assert(c == -2566150.82542);

    // negative with decimal point
        c=42;
        c=division(0,-75.874);
        assert(c == 0);

        c=0;
        c=division(1,-75.874);
        assert(c == -0.01318);

        c=0;
        c=division(871253,-75.874);
        assert(c == -11482.89269);

        c=0;
        c=division(5421.7163,-75.874);
        assert(c == -71.45684);

        c=0;
        c=division(-652,-75.874);
        assert(c == 8.59319);

        c=0;
        c=division(-8565.423,-75.874);
        assert(c == 112.89009);

        c=0;
        c=division(3189725476,-75.874);
        assert(c == -42039769.56533);

    // specialities
        c=42;
        c=division(0,-INFINITY);
        assert(c == 0);

        c=42;
        c=division(0,INFINITY);
        assert(c == 0);
        
        c=0;
        c=division(0,NAN);
        assert(c == NAN);

        c=0;
        c=division(-INFINITY,2);
        assert(c == -INFINITY);

        c=0;
        c=division(NAN,4);
        assert(c == NAN);

        c=0;
        c=division(INFINITY,14);
        assert(c == INFINITY);

        c=42;
        c=division(4,INFINITY);
        assert(c == 0);

        c=42;
        c=division(-653.4,-INFINITY);
        assert(c == 0);

        c=0;
        c=division(-23.87,NAN);
        assert(c == NAN);

        c=0;
        c=division(NAN,NAN);
        assert(c == NAN);

        c=0;
        c=division(-INFINITY,NAN);
        assert(c == NAN);

        c=0;
        c=division(NAN,INFINITY);
        assert(c == NAN);

        c=0;
        c=division(-INFINITY,INFINITY);
        assert(c == NAN);

        c=0;
        c=division(INFINITY,-INFINITY);
        assert(c == NAN);

// multiplication

    //zero
        c=42;
        c=mul(0,0);
        assert(c == 0);

        c=42;
        c=mul(0,1);
        assert(c == 0);

        c=42;
        c=mul(0,871253);
        assert(c == 0);

        c=42;
        c=mul(0,5421.7163);
        assert(c == 0);

        c=42;
        c=mul(0,-652);
        assert(c == 0);

        c=42;
        c=mul(0,-8565.423);
        assert(c == 0);

        c=42;
        c=mul(0,3189725476);
        assert(c == 0);
    // one
        c=42;
        c=mul(1,0);
        assert(c == 0);

        c=0;
        c=mul(1,1);
        assert(c == 1);

        c=0;
        c=mul(1,871253);
        assert(c == 871253);

        c=0;
        c=mul(1,5421.7163);
        assert(c == 5421.7163);

        c=0;
        c=mul(1,-652);
        assert(c == -652);

        c=0;
        c=mul(1,-8565.423);
        assert(c == -8565.423);

        c=0;
        c=mul(1,3189725476);
        assert(c == 3189725476);

    // natural number
        c=42;
        c=mul(712,0);
        assert(c == 0);

        c=0;
        c=mul(712,1);
        assert(c == 712);

        c=0;
        c=mul(712,871253);
        assert(c == 620332136);

        c=0;
        c=mul(712,5421.7163);
        assert(c == 3860262.0056);

        c=0;
        c=mul(712,-652);
        assert(c == -464224);

        c=0;
        c=mul(712,-8565.423);
        assert(c == -6098581.176);

        c=0;
        c=mul(712,3189725476);
        assert(c == 2271084538912); // here should be limit error i guess

    // positive with decimal point
        c=42;
        c=mul(14.714,0);
        assert(c == 0);

        c=0;
        c=mul(14.714,1);
        assert(c == 14.714);

        c=0;
        c=mul(14.714,871253);
        assert(c == 12819616.642);

        c=0;
        c=mul(14.714,5421.7163);
        assert(c == 79775.13364);

        c=0;
        c=mul(14.714,-652);
        assert(c == -9593.528);

        c=0;
        c=mul(14.714,-8565.423);
        assert(c == -126031.63402);

        c=0;
        c=mul(14.714,3189725476);
        assert(c == 46933620653.864); // here should be limit error i guess

    // negative int
        c=42;
        c=mul(-1243,0);
        assert(c == 0);

        c=0;
        c=mul(-1243,1);
        assert(c == -1243);

        c=0;
        c=mul(-1243,871253);
        assert(c == -1082967479);

        c=0;
        c=mul(-1243,5421.7163);
        assert(c == -6739193.3609);

        c=0;
        c=mul(-1243,-652);
        assert(c == 810436);

        c=0;
        c=mul(-1243,-8565.423);
        assert(c == 10646820.789);

        c=0;
        c=mul(-1243,3189725476);
        assert(c == -3964828766668); // here should be limit error i guess

    // negative with decimal point
        c=42;
        c=mul(-75.874,0);
        assert(c == 0);

        c=0;
        c=mul(-75.874,1);
        assert(c == -75.874);

        c=0;
        c=mul(-75.874,871253);
        assert(c == -66105450.122);

        c=0;
        c=mul(-75.874,5421.7163);
        assert(c == -411367.30255);

        c=0;
        c=mul(-75.874,-652);
        assert(c == 49469.848);

        c=0;
        c=mul(-75.874,-8565.423);
        assert(c == 649892.9047);

        c=0;
        c=mul(-75.874,3189725476);
        assert(c == -242017230766.02399); // here should be limit error i guess

    // specialities
        
        c=42;
        c=mul(-INFINITY,0);
        assert(c == 0);
        
        c=42;
        c=mul(0,INFINITY);
        assert(c == 0);

        c=0;
        c=mul(0,NAN);
        assert(c == NAN);

        c=0;
        c=mul(-INFINITY,2);
        assert(c == -INFINITY);

        c=0;
        c=mul(NAN,4);
        assert(c == NAN);

        c=0;
        c=mul(INFINITY,14);
        assert(c == INFINITY);

        c=0;
        c=mul(4,INFINITY);
        assert(c == INFINITY);

        c=0;
        c=mul(-653.4,-INFINITY);
        assert(c == -INFINITY);

        c=0;
        c=mul(-23.87,NAN);
        assert(c == NAN);

        c=0;
        c=mul(NAN,NAN);
        assert(c == NAN);

        c=0;
        c=mul(-INFINITY,NAN);
        assert(c == NAN);

        c=0;
        c=mul(NAN,INFINITY);
        assert(c == NAN);

        c=0;
        c=mul(-INFINITY,INFINITY);
        assert(c == NAN);

        c=0;
        c=mul(INFINITY,-INFINITY);
        assert(c == NAN);    

// factorial

        c=0;
        c=fact(-1);
        assert(c == NAN);
        
        c=0;
        c=fact(3.3);
        assert(c == NAN);
        
        c=0;
        c=fact(-5.6);
        assert(c == NAN);
        
        c=0;
        c=fact(0);
        assert(c == 1);

        c=0;
        c=fact(1);
        assert(c == 1);

        c=0;
        c=fact(2);
        assert(c == 2);

        c=0;
        c=fact(3);
        assert(c == 6);

        c=0;
        c=fact(10);
        assert(c == 3628800);
    
        c=0;
        c=fact(13);
        assert(c == 6227020800); // here should be limit error i guess

    // specialities - soubor s nimy nelze spustit - integer nedovoluje INFINITY nebo NAN
        /*
        c=0;
        c=fact(-INFINITY);
        assert(c == NAN);
        
        c=0;
        c=fact(INFINITY);
        assert(c == NAN);

        c=0;
        c=fact(NAN);
        assert(c == NAN);
        */
// logarithm
        c=0;
        c=ln(-1);
        assert(c == NAN);
        
        c=0;
        c=ln(-5.6);
        assert(c == NAN);
        
        c=0;
        c=ln(0);
        assert(c == -INFINITY);

        c=42;
        c=ln(1);
        assert(c == 0);

        c=0;
        c=ln(2.718281828459);
        assert(c == 1);

        c=0;
        c=ln(78.81);
        assert(c == 4.3670398924);

        c=0;
        c=ln(4000000000);
        assert(c == 22.109560198);

    // specialities
        
        c=0;
        c=ln(-INFINITY);
        assert(c == NAN);
        
        c=0;
        c=ln(INFINITY);
        assert(c == INFINITY);

        c=0;
        c=ln(NAN);
        assert(c == NAN);

// power
    // zero base
        c=0;
        c=power(0,0);
        assert(c == NAN);

        c=42;
        c=power(0,2);
        assert(c == 0);

        c=0;
        c=power(0,4.45);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(0,-3);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(0,-10.6);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef
    
    // one
        c=42;
        c=power(1,0);
        assert(c == 1);

        c=0;
        c=power(1,1);
        assert(c == 1);

        c=0;
        c=power(1,253);
        assert(c == 1);

        c=0;
        c=power(1,54.7163);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(1,-652);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(1,-8565.423);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(1,189725476);
        assert(c == 1);

    // natural number
        c=42;
        c=power(12,0);
        assert(c == 1);

        c=0;
        c=power(12,1);
        assert(c == 12);

        c=0;
        c=power(12,3);
        assert(c == 1728);

        c=0;
        c=power(12,5421.7163);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(12,-652);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(12,-8565.423);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(12,476);
        assert(c == NAN); // here should be limit error i guess, nevim jak s tou navratovou hodnotou, toto je moc

    // positive with decimal point
        c=42;
        c=power(14.714,0);
        assert(c == 1);

        c=0;
        c=power(14.714,1);
        assert(c == 14.714);

        c=0;
        c=power(14.714,5);
        assert(c == 689689.729154413713824);

        c=0;
        c=power(14.714,5421.7163);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(14.714,-652);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(14.714,-8565.423);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(14.714,476);
        assert(c == NAN); // here should be limit error i guess

    // negative int
        c=42;
        c=power(-1243,0);
        assert(c == 1);

        c=0;
        c=power(-1243,1);
        assert(c == -1243);

        c=0;
        c=power(-1243,3);
        assert(c == -1920495907);

        c=0;
        c=power(-1243,5421.7163);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(-1243,-652);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(-1243,-8565.423);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(-1243,189725476);
        assert(c == NAN); // here should be limit error i guess

    // negative with decimal point
        c=42;
        c=power(-75.874,0);
        assert(c == 1);

        c=0;
        c=power(-75.874,1);
        assert(c == -75.874);

        c=0;
        c=power(-75.874,3);
        assert(c == -33141481.68679);

        c=0;
        c=power(-75.874,5421.7163);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(-75.874,-652);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(-75.874,-8565.423);
        assert(c == NAN); // nevim jestli nan nebo proste nejaky undef

        c=0;
        c=power(-75.874,189725476);
        assert(c == NAN); // here should be limit error i guess

    // specialities
        c=0;
        c=power(-INFINITY,2);
        assert(c == -INFINITY);

        c=0;
        c=power(NAN,4);
        assert(c == NAN);

        c=0;
        c=power(INFINITY,14);
        assert(c == INFINITY);

/*        c=0;
        c=power(4,INFINITY);
        assert(c == NAN); // podle mne infinity neni natural number

        c=0;
        c=power(4,-INFINITY);
        assert(c == NAN); // nebo zas nejaky undef

        c=0;
        c=power(-23.87,NAN);
        assert(c == NAN); */

printf("Uspech!\n");
return 0;
}

