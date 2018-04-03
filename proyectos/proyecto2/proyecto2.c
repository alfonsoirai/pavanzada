#include <stdio.h>
#include <math.h>

int N,
    K;

int R[110],
    H[110];

void ample()
{
    int t;

    long long answer = 0,
              current;

    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &R[i], &H[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if ((long long)R[j] * H[j] < (long long)R[j + 1] * H[j + 1])
            {
                t = R[j];
                R[j] = R[j + 1];
                R[j + 1] = t;
                t = H[j];
                H[j] = H[j + 1];
                H[j + 1] = t;
            }
        }
    }

    // Bottom pancakes
    int k;
    for (int i = 0; i < N; i++)
    {
        current = (long long)R[i] * R[i] + 2LL * R[i] * H[i];
        for (int j = 0, k = 0; j < K; k++)
        {
            if (i == k)
            {
                continue;
            }
            current += 2LL * R[k] * H[k];
            j++;
        }
        if (answer < current)
        {
            answer = current;
        }
    }
    printf("%.9f\n", answer * acos(-1));
}

int main()
{
    int T;
    int caseNo = 1;
    scanf("%d", &T);
    while (T--)
    {
        printf("\nCase #%d: ", caseNo++), ample();
    }
    return 0;
}