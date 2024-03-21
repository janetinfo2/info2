#pragma once

struct complejo
{
    double re;
    double im;
};

struct complejo sumacpx(struct complejo a, struct complejo b);
struct complejo restacpx(struct complejo a, struct complejo b);
struct complejo multcpx(struct complejo a, struct complejo b);
