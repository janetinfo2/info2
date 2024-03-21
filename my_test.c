#include "my_test.h"
    struct complejo sumacpx(struct complejo a, struct complejo b)
    {
    struct complejo s;
    s.re= a.re+b.re;
    s.im= a.im+b.im;
    //printf("\n");
    return s;
    }

    struct complejo restacpx(struct complejo a; struct complejo b)
    {
    struct complejo r;
    r.re= a.re+b.re;
    r.im= a.im+b.im;
    printf("\n");
    return r;
    }

    struct complejo multcpx(struct complejo a; struct complejo b)
    {
    struct complejo m;
    m.re=((a.re*b.re)+(b.im*a.im)*(-1));
    m.im=((a.im*b.re)+(b.im*a.re));
    printf("\n)")
    return m;
    }

