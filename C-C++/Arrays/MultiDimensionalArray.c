#include <stdio.h>

int main()
{

    // arr_name[row][column]

    int arr_2d[2][3] = {10, 20, 30, 40, 50, 60};

    printf("2D Array \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr_2d[i][j]);
        }
        printf("\n");
    }

    // 3 Dimensional Array

    int arr_3d[2][2][2] = {10, 20, 30, 40, 50, 60};

    printf("\n3D Array \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", arr_3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}