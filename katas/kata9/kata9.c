#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int n;
    printf("Enter the number of integers in the array: \n");
    scanf("%d", &n);
    int integers[n];

    printf("Enter the %d numbers: \n", n);

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &integers[i]);
    }

    int count = 0;
    int isUTF = TRUE;
    for (int i = 0; i < n; i++)
    {
        if (integers[i] < 0 || integers[i] > 255)
        {
            isUTF = FALSE;
            break;
        }
        if (count == 0)
        {
            if (integers[i] >= 192 && integers[i] <= 223)
            {
                count = 1;
            }
            else if (integers[i] >= 224 && integers[i] <= 239)
            {
                count = 2;
            }
            else if (integers[i] >= 240 && integers[i] <= 255)
            {
                count = 3;
            }
            else if (integers[i] >= 128 && integers[i] <= 191)
            {
                isUTF = FALSE;
                break;
            }
        }
        else
        {
            if (integers[i] >= 128 && integers[i] <= 191)
            {
                count--;
            }
            else
            {
                isUTF = FALSE;
                break;
            }
        }
    }
    if (count > 0)
    {
        isUTF = FALSE;
    }

    if (isUTF == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}