/*In which we find the longest sub matrix with the maximum number of 1 in it.*/

#include <stdio.h>

int main()
{
    int row, col, n,flag;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of columns:");
    scanf("%d", &col);
    if (row < col)
    {
        n = row + 1;
    }
    else if (col < row)
    {
        n = col + 1;
    }
    else
    {
        n = row;
    }

    int matrix[row][col];
    int i, j, k, l, m, count, sr, er, sc, ec, max;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            do{
                flag=1;
            printf("Input 1,0 in (%d,%d): ", i , j );
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j]!=1&&matrix[i][j]!=0)
            {
                printf("Kindly input 1 or 0:\n");
                flag=0;
            }
            }while(flag==0);
        }
    }
    max = 0;
    for (k = 1; k < n; k++)
    {

        for (l = 0; l <= row - k; l++)
        {
            for (m = 0; m <= col - k; m++)
            {

                count = 0;

                for (i = l; i < l + k; i++)
                {
                    for (j = m; j < m + k; j++)
                    {

                        if (matrix[i][j] == 1)
                        {
                            count++;
                        }
                    }
                }

                if (max < count)
                {
                    max = count;
                    sc = l;
                    ec = i - 1;
                    sr = m;
                    er = j - 1;
                }
            }
        }
    }
    printf("Largest subsquare matrix:\n\n");
    for (i = sc; i <= ec; i++)
    {
        for (j = sr; j <= er; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nIndex values (%d,%d)--->(%d,%d)", sc, sr, ec, er);
   

    return 0;
}
