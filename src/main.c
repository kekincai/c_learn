#include <stdio.h>
#include <stdbool.h> 

int main() {
    int res = 0;
    int v = 100;
    res = !(v>1000) + true;
    if(true)
        printf("the res is:%u\n", res);
    return 0;
}