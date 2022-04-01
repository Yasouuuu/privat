//Snake game for fun

#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    //Variabels for border
    int8_t i = 0;
    int8_t j = 0;
    //Variabels for snake
    int8_t x = 14;
    int8_t y = 14;
    //Variabels for movement
    int8_t flag = 0;
    int8_t  gamestop = 0;
    //Variabels for score
    int8_t score = 0;
    //Variables for Food
    int8_t food = 0;
    int8_t food2 = 0;
    //FINISHED

    
    //Food generation
    food:
    food = rand() % 15;
    if(food == 0)
    {
        goto food;
    }

    food2:
    food2 = rand() % 15;
    if(food2 == 0)
    {
        goto food2;
    }
    //FINISHED
    
    
while (gamestop == 0)
{

    
    //Border
    for(i = 0; i < 30; i++)
    {   
        printf("\n");
        for(j = 0; j < 30; j++)
        {
            if(j == 0 || j == 30 - 1 || i == 0 || i == 30 - 1)
            {
                printf("#");
            } else if(x == i && y == j)
            {
                printf("0");
            } else if(food == i && food2 == j)
            {
                printf("*");
            }else {
                printf(" ");
            }
        }
    }
    //FINISHED
    printf("\n");
    //Score / Highscore
    printf("Your score: %d" , score);
    printf("\n");
    printf("To end the game press t\n");
    //FINISHED

    //movement
    switch (getchar())
    {
    case 'd':
        flag = 1;
        break;
    case 'a':
        flag = 2;
        break;
    case 's':
        flag = 3;
        break;
    case 'w':
        flag = 4;
        break;
    case 't':
        flag = 5;
        break;
    default:
        break;
    }

    if(flag == 1)//d
    {
        y = y + 1;
    } else if(flag == 2)//a
    {
        y = y - 1;
    } else if(flag == 3)//w
    {
        x = x + 1;
    } else if(flag == 4)//s
    {
        x = x - 1;
    } else if(flag == 5)//t
    {
        gamestop = gamestop + 1;
    }
    //FINISHED

    //Snake eats apple / score
    if(x == food && y == food2)
    {
        score = score + 1;
        goto food;
        goto food2;
    }
    //FINISHED

    //Game ends when:
    if(x < 0 || x > 30 || y < 0 || y > 30 || score == 10)
    {
        gamestop = gamestop + 1;
    } 
    //FINSIHED
}
    if(score == 10)
    {
        printf("YOU WON!");
    }
    return 0;
}   
