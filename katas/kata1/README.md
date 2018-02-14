# Find Anagram Mapping
Given two lists A and B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.

We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.

These lists A and B may contain duplicates. If there are multiple answers, output any of them.

For example, given

A = [12, 28, 46, 32, 50] B = [50, 12, 32, 46, 28]
We should return [1, 4, 3, 2, 0]
as P[0] = 1 because the 0th element of A appears at B[1], and P[1] = 4 because the 1st element of A appears at B[4], and so on. 

Note: A, B have equal lengths in range [1, 100]. A[i], B[i] are integers in range [0, 10^5].

## Breakdown

- The input has 2 lists of the same size.
- The lists can only have positive integers.
- I first will assume that there are **no duplicates**.
- There will only be one solution.

## Solution 1
The first solution that I made was making nested loops were I can compare each element and therefore, return the resulting list.
```
    for(i=0; i<sizeof(A); i++){
        for(j=0; j<sizeof(B);j++){
            if(A[i]==B[j]){
                P[i]=j;
                break;
            }
        }
    }
```
However, this solution gives a running time of `O(n^2)`.

## Solution 2
We could make a HashTable in order to map the indexes of the list. This would let us manage to separate loops to access the indexes. The running time would be `O(n)` 'cause the sum of the two loops would give us `O(2n) == O(n)`.