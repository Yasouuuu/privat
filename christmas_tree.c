// author @Julian Sorger

#include <stdio.h>
int main (int argc, char** argv){

    int i;
    int j;
    int k;

    for (int i = 1; i <= 7; i++) {
        for(k = i; k <= 6; k++){
            printf(" ");
        }
        for (int j = 1;j <= i; j++) {
            printf("* ");
            
        }
        printf("\n");
    } 
    for (int i = 5; i <= 7; i++) {
        for(k = i; k <= 6; k++){
            printf(" ");
        }
        for (int j = 1;j <= i; j++) {
            printf("* ");
            
        }
        printf("\n");
    } 
    for (int i = 5; i <= 7; i++) {
        for(k = i; k <= 6; k++){
            printf(" ");
        }
        for (int j = 1;j <= i; j++) {
            printf("* ");
            
        }
        printf("\n");
    } 
    for (int i = 4; i <= 7; i++) {
        for(k = i; k <= 6; k++){
            printf(" ");
        }
        for (int j = 1;j <= i; j++) {
            printf("* ");
            
        }
        printf("\n");
    }
    for (i=1;i<=7;i++){
        for(k=1;k<=4;k++){
            printf(" ");
        }
        for(j=1;j<4;j++){
            printf("# ");
        }
        printf("\n");
    }
    
    return 0;
}