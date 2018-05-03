# Polo the Penguin and the XOR - Final Project
Polo, the Penguin, likes the XOR operation.

XOR-sum of a list of numbers is the result of XOR-ing all of them. XOR-sum of (A[1] XOR A[2] XOR ... XOR A[N]) is defined as A[1] XOR (A[2] XOR (A[3] XOR ( ... XOR A[N]))).

He has an array A consisting of N integers. Index in the array are numbered from 1 to N, inclusive. Let us denote by F(L, R), the XOR-sum of all integers in the array A whose indices lie from L to R, inclusive, i.e. F(L, R) = A[L] XOR A[L+1] XOR ... XOR A[R]. Your task is to find the total sum of XOR-sums F(L, R) over all L and R such that 1 ≤ L ≤ R ≤ N.

## Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of A. The second line contains N space-separated integers A[1], A[2], ..., A[N].

## Output
For each test case, output a single line containing the total sum to the corresponding test case.

## Constraints
- 1 ≤ T ≤ 100,000
- 1 ≤ N ≤ 100,000
- 0 ≤ A[i] ≤ 1,000,000,000 (10^9)
- The total sum of all N over all test cases will not exceed 100,000.

## Example
```
Input:
1
2
1 2
```
```
Output:
6
```

## Explanation
Example case 1. F(1, 1) = A[1] = 1, F(2, 2) = A[2] = 2 and F(1, 2) = A[1] XOR A[2] = 1 XOR 2 = 3. Hence the answer is 1 + 2 + 3 = 6.

## Solution
1. We need to declare 2 variables of type `long`:
    - `t` will be the number of test cases.
    - `n` will be size of the array that we will be comparing.
2. After we scan the last two variables to get the values, we start a `while` loop to execute the array scanning depending on the test cases entered by the user.
3. Inside the loop, we ask for the value of `n` which will be the size of the array.
    - After that, we create a new array of size `n`
    - Also, declare a variable that will store the previous value, starting at 0.
4. Inside the `while` loop, I will place a `for` loop to store all the respective values in their respective array position.
5. After that `for`, I'll declare some new variables to store the result and the number of 1's that will result of the convertion after the XOR.
6. In this new `for` loop, there will be a maximum of 32 runs to keep the 32 bits manipulation. Also, declare a new variable `p` that will let us assign a left shift with the current `i` value of the loop.
7. Inside another `for` loop, we make an if statement comparing with a binary AND operator the `p` value and the array position in `j`, if it's true, we add one to the variable where we are storing the number of 1's.
8. Finally, the result will be accumulating the number of ones * (n+1-number of ones)*p. 
