# 1055: Combinations
## Problem Description
As you have known MMM corporation lab researches the matter of haricot proportions in soup For every day. As we wrote in the previous problem (T) the ladle is placed down into the soup pan. But now we are not interested in the form and linear sizes of the ladle. This time the ladle holds exactly M haricot seeds of N got into the pan. All the seeds are of different size.
Experimenters calculate the quantity of possible methods to proportion M seeds in the pan. Requisite quantity of methods is calculated with the formula: *C = N!/(M!·(N−M)!)*. The main feature of these experiments is the quantity of different prime divisors of number C.

*Example: N* = 7, *M* = 3. *C* = 7!/(3!*4!) = 5040/(6*24) = 35 = 5*7. This example shows that the quantity of different prime divisors is 2.

Lest money would be spent for programmer, MMM corporation board decided to make necessary estimating during trial tour of quarterfinal world programming contest in Rybinsk.

Thus, your aim is to find the quantity of different prime divisors of number C.

**Input**
Input contains integers *N* and *M*. You may assume that 1 ≤ *M* < *N* ≤ 50000.

**Output**
Output should contain one integer. 

**Sample Input**
```
7 3
```
**Sample Output**
```
2
```
## Breakdown
First, we need to define what is a prime number. A prime number is the one that can only be divided by 1 or itself, e.g. 2, 3, 5, 7, and on...

We need to stablish the next things:
- M and N need to comply with the following:
    `1<=M<=N<=50000`
- It'll be neccesary to use a `long int` type, because the max number that we can use is 50,000. `int` type maximum value is 32,767.
- How to see if its a prime number?

## Solution
1. Define a matrix of 5000x2, in order to store all the possible values.
2. I needed to declare a function to check if a number was a prime:
    ```
    bool primoNo(long int m){
        long int conP;
        j = 0;
        do{
            j++;
        }while(!((m % pri[j][0])==0) || !(pri[j][0]>sqrt(m)) || !(j == numPrimo));

        if((m % pri[j][0]) == 0){
            return true;
        }else{
            return false;
        }
    }
    ```
    This function returns a boolean value to check wether it's or it isn't a prime number.
    
3. Then I started to lookup if I could compare the N value and if it met the requirements of being greater than 1 and greater than M.
4. With a bunch of loops, I compared all the possible prime numbers given M and N. Tha fact is, that I needed to make a nested loop in this scenario:
    ```
    for(int i = 0; i<numPrimo; i++){
        aux = pri[i][1];
        do{
            pri[i][1] = pri[i][1]+(N/aux);
            pri[i][1] = pri[i][1]-(M/aux)-((N-M)/aux);
            aux = aux*pri[i][0];
        }while(!(N/aux==0));

        counter = 0;
        for(int i = 0; i<numPrimo; i++){
            if(pri[i][1]!=0){
                counter++;
                printf("%li", counter);
            }else{
                printf("%li", counter);
            }
        }

    }
    ```
    To compare one of tha values of the matrix and to see if it accomplished the factorial division. That's when I got my program running in `O(n^2)`.


## Bugs
I keep getting a floating point exception whenever I run the program :cry:.