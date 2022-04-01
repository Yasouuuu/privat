//Alien shooter just4fun

#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int main(int argc, char** argv)
{   

    int8_t gamestop = 0;
    //Variabels for area
    int8_t i = 0;
    int8_t j = 0;
    //Variabels for movment
    int8_t flag = 0;
    int8_t x = 50;
    int8_t y = 28;
    //Vairabels for score
    int8_t score = 0;
    //Vairabels for enemy
    int8_t enemy1 = 0;
    int8_t enemy2 = 0;
    //Vairabels for bullet
    int8_t bullet1 = x;
    int8_t bullet2 = y;
    //FINISHED

    //Enemy
    enemy1:
        enemy1 = rand() % 50;
        if(enemy1 == 0)
        {
            goto enemy1;
        }
    enemy2:
        enemy2 = rand() % 15;
        if(enemy2 == 0)
        {
            goto enemy2;
        }
    //FINISHED

    while(gamestop == 0)
    {
        //Border
        for(i = 0; i < 30; i++)
        {   
            printf("\n");
            for(j = 0; j < 100; j++)
            {
               if(j == 0 || j == 100 - 1 || i == 0 || i == 30 -1)
               {
                   printf("*");
               }else if(x == j && y == i)
               {
                    printf("8");
               } else if(enemy1 == j && enemy2 == i)
               {
                    printf("O");
               } else if(bullet1 == j && bullet2 == i && flag == 3)
               {
                    printf("I");
               } else 
               {
                    printf(" ");
               }
            } 
        }
        //FINISHED
        printf("\n");

        //SCORE
        printf("Your score: %d" , score);
        printf("\n");
        printf("Press t to end the game");
        printf("\n");
        //FINSIHED

        //movment
        switch (getchar())
        {
        case 'a':
            flag = 1;
            break;
        case 'd':
            flag = 2;
            break;
        case 'w':
            flag = 3;
            break;
        case 't':
            flag = 4;
            break;
        default:
            break;
        }

        if(flag == 1)
        {
            x--;
        } else if(flag == 2)
        {
            x++;
        }else if(flag == 4)
        {
            gamestop = gamestop + 1;
        //FINISHED

        //Hit
        if(bullet1 == enemy1 && bullet2 == enemy2)
        {
            score = score + 1;
        }
        //FINISHED




         
    }
    return 0;
}