#include <stdio.h>
char maze[5][5] = {{'S', 'O', 'O', 'W', 'W'},
                   {'O', 'W', 'O', 'W', 'W'},
                   {'W', 'O', 'O', 'W', 'W'},
                   {'W', 'W', 'O', 'W', 'W'},
                   {'W', 'W', 'O', 'E', 'W'}};

int find(int a, int b)
{
    if (maze[a][b] == 'S')
    {
        return 1;
    }
    if (maze[a][b] == 'W' || maze[a][b] == 'X')
    {
        return 0;
    }
    maze[a][b] == 'X';
    if (find(a, b - 1))
    {
        printf("(%d,%d)\n", a, b - 1);
        return 1;
    }
    if (find(a - 1, b))
    {
        printf("(%d,%d)\n", a - 1, b);
        return 1;
    }
    return 0;
}
int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (maze[i][j] == 'E')
            {
                break;
            }
        }
        if (maze[i][j] == 'E')
        {
            break;
        }
    }
    printf("Index Of Clear Path--->\n");
    if (find(i, j))
    {
        printf("(%d,%d)", i, j);
    }
    else
    {
        printf("There is no way");
    }
    return 0;
}
