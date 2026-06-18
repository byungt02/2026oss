#include "sub.h"

int mod(int x, int y)
{
    while (x >= y){ // > 를 >= 로 변경
        x = sub(x,y);
    }
    return x;
}
