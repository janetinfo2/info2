#include<stdio.h>
#include "my_test.h"

int main()
{
    struct complejo a, b, r, s,m;
    printf("numero a:\n");
    a.re= 10;
    a.im= 5;

    printf("numero b:\n");
    b.re= 10;
    b.im= 10;

    s= sumacpx(a,b);
    printf("el resultado de la suma es: %lf+%lfi", s.re, s.im);
    printf("\n");
    r= restacpx(a,b);
    printf("el resultado de la resta es: %lf+%lfi", r.re, r.im);
    m= multcpx(a,b);
    printf("el resultado de la multiplicacion es: %lf+%lfi", m.re, m.im);

}
