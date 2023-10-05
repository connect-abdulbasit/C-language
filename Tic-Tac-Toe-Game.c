#include <stdio.h>
int i, num, result, player = 0;
char mark, number[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void display();
void start();
int check();
int main()
{
    int play = 0;
    printf("\tTic Tac Toe\n\n");
    display();
    while (play == 0)
    {
        player++;
        player = (player % 2 == 0) ? 2 : 1;
        start();
        display();
        play = check();
    }
    if (play == 1)
    {
        printf("Player %d won the match\n", player);
    }
    else
    {
        printf("Match is draw");
    }

    return 0;
}
void display()
{
    printf("\t    |    |    \n");
    printf("\t_%c__|_%c__|_%c__\n", number[1], number[2], number[3]);
    printf("\t    |    |    \n");
    printf("\t_%c__|_%c__|_%c__\n", number[4], number[5], number[6]);
    printf("\t    |    |    \n");
    printf("\t %c  | %c  | %c  \n\n", number[7], number[8], number[9]);
}
void start()
{
    printf("Enter a number for player %d\n", player);
    scanf("%d", &num);

    if (num < 0 || num > 9 || number[num] == 'X' || number[num] == 'O')
    {
        printf("Invalid Input\n");
        player--;
    }

    mark = (player == 1) ? 'X' : 'O';
    number[num] = mark;
}
int check()
{
    if (number[1] == number[2] && number[2] == number[3])
    {
        return 1;
    }
    else if (number[1] == number[4] && number[4] == number[7])
    {
        return 1;
    }
    else if (number[1] == number[5] && number[5] == number[9])
    {
        return 1;
    }
    else if (number[2] == number[5] && number[5] == number[8])
    {
        return 1;
    }
    else if (number[3] == number[6] && number[6] == number[9])
    {
        return 1;
    }
    else if (number[4] == number[5] && number[5] == number[6])
    {
        return 1;
    }
    else if (number[7] == number[8] && number[8] == number[9])
    {
        return 1;
    }
    else if (number[3] == number[5] && number[5] == number[7])
    {
        return 1;
    }
    else
    {
        result = 0;
        for (i = 0; i <= 9; i++)
        {
            if (number[i] == 'X' || number[i] == 'O')
            {
                result = result + 1;
            }
        }
        if (result == 9)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
}