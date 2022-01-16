// Julian Sorger
#include <stdio.h>
int add(int number1, int number2);
int main(int argc, char** argv){

    int number1 = 10;
    int number2 = 2;
    int sum = 0;
    printf("%d\n" , number1);

    if(number1 > number2){
        printf("%d is bigger.\n" , number1);
    } else {
        printf("wrong\n");
    }
    for(sum = 0; sum < 10; sum++){
        printf("loop counter: number1 = %u\n" , number1);
    }
    return 0;
    
}
