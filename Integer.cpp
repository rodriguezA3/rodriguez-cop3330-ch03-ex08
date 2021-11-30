#include "Integer.h"

Integer::Integer(int n) {
    num = n; 

    if (num % 2 == 0)
        even = true;
    else 
        even = false;
}

int Integer::getNum() {
    return num;
}

bool Integer::isEven() {
    return even;
}