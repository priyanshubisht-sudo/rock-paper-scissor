#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    0 --> Rock
    1 --> Paper
    2 --> Scissor
*/

int main(){
    srand(time(0));
    int player, computer = (rand() % 3) + 0;

    printf("Hi Player! Choose 0 for Rock, 1 for Paper and 2 for Scissor.\n");
    scanf("%d", &player);
    printf("%d\n", computer);
    
    if (player == 0 && computer == 0)
    {
        printf("Its a Draw!\n");
        
    }
    else if (player == 0 && computer == 1)
    {
        printf("You lost!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Won!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Won!\n");
    }

    else if (player == 1 && computer == 1)
    {
        printf("Its a Draw!\n");
    }
    
    else if (player == 1 && computer == 2)
    {
        printf("You Lost!\n");
    }

    else if (player == 2 && computer == 0)
    {
        printf("You Lost!\n");
    }

    else if (player == 2 && computer == 1)
    {
        printf("You Won!\n");
    }

    else if (player == 2 && computer == 2)
    {
        printf("Its a draw!\n");
    }
 
    else{
        printf("ERROR! You chose wrong number! \n");
        
    }
    return 0;
}