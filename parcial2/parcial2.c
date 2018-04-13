/*
## Breakdown
- The VirusDNA can't be longer than the HumanDNA.
- If at least one character on the virusDNA has the same position, and the HumanDNA has just one character different, it will count.
- The VirusDNA can be a substring of the humanDNA
- The input must be in stdin
- If there is more than one difference, it will not be infected.

## Solution
- I declared some variables to define the tests, for the length of the human DNA and another one for the virus DNA and a flag to compare when we are in a string.
- Two arrays of characters with maximum capacity of 100,000 characters.
- Inside a while, we will be iterating until the number of tests that we defined are over.
     - Compare if the virus string is largen than the human string
     - from there, inside a for loop, iterate through the indexes of the dna's, and checks if there are same characters in a same position.
     - After that, just print the results of the comparisions.

- Complexity: O(n^3)

- Future implementations: Being able to read the input from a file.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void checkVirus(){
    int tests,
        lengthHumanDNA,
        lengthVirusDNA,
        flag;

    //Characters maximum, 10^5 = 100,000
    char p[100000],
        v[100000];

    scanf("%d", &tests);
    while (tests--)
    {
        int tests = 0;
        scanf("%s", p);
        scanf("%s", v);
        lengthHumanDNA = strlen(p);
        lengthVirusDNA = strlen(v);

        if (lengthHumanDNA < lengthVirusDNA)
        {
            printf("The VirusDNA can't be larger than the HumansDNA\n");
            break;
        }

        if (lengthHumanDNA >= lengthVirusDNA)
        {
            for (int i = 0; i <= (lengthHumanDNA - lengthVirusDNA); i++)
            {
                flag = 0;
                for (int j = 0; j < lengthVirusDNA; j++){
                    if (p[i + j] == v[j]){
                        flag++;
                    }
                }

                if ((flag == lengthVirusDNA) || (flag == (lengthVirusDNA - 1)))
                {
                    tests = 1;
                    printf("%d ", i);
                }
            }
            printf("\n");
        }

        if (!tests)
        {
            printf("No Match!\n");
        }
    }
}

int main()
{
    checkVirus();
    return 0;
}