#include <stdio.h>
#include "main.h"


int main()
{
    int ad, su, di, mu, mo;
    int a = 5, b = 3;

    ad = add(a, b);
    su = sub(a, b);
    di = div(a, b);
    mu = mul(a, b);
    mo = mod(a, b);

    printf("addition: %d + %d = %d\n",  a, b, ad);
    printf("subtraction: %d - %d = %d\n", a, b, su);
    printf("division: %d / %d = %d\n", a, b, di);
    printf("multiplication: %d * %d = %d\n", a, b, mu);
    printf("remainder: %d  %d = %d\n", a, b, mo);
    return 0;
}
