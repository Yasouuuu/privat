// for schleife
#include <stdio.h>

int add(int num1 , int num2);

int main(int argc, char** argv){
    int result = 0;
    printf("%d\n" , result);
    result = add(2 , 3);
    return 0;
}
int add(int num1 , int num2) {
    int result = 0;
    result = num1 + num2;
    return result;
}