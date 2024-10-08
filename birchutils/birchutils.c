#include "birchutils.h"
//#include <birhutils.h>

void zero(int8 *str, int16 size){
    int8 *p;
    int16 n;

    for(n=0, p=str; n<size; n++, p++){
        *p = 0;
    }

    return;
}

//10.0.0.1
//0x0100000a

//0xddccbbaa
//0xff000000
//-------------
//0xdd000000
//0xdd

int8 *todotted(in_addr_t ip){
    int8 a,b,c,d;
    static int8 buf[16];

    d = ((ip & 0xff000000) >> 24);
    c = ((ip & 0xff0000) >> 16);
    b = ((ip & 0xff00) >> 8);
    a = ((ip & 0xff));

    zero(buf, 16);
    snprintf((char *)buf, 15, "%d.%d.%d.%d", a,b,c,d);
    return buf;


}