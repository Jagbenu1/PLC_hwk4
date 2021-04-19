#include <stdio.h>

int variables(int x){
    x = 21;
    int x;
    x = 42;
}

int main() {

    int a = 4;
    int ret;

    ret = variables(a);

    printf("What is returned is: %d\n", ret);

    return 0; 

}