# Midterm 2 Project: Ample Syrup

## Problem
The kitchen at the Infinite House of Pancakes has just received an order for a stack of K pancakes! The chef currently has N pancakes available, where N ≥ K. Each pancake is a cylinder, and different pancakes may have different radii and heights.

As the sous-chef, you must choose K out of the N available pancakes, discard the others, and arrange those K pancakes in a stack on a plate as follows. First, take the pancake that has the largest radius, and lay it on the plate on one of its circular faces. (If multiple pancakes have the same radius, you can use any of them.) Then, take the remaining pancake with the next largest radius and lay it on top of that pancake, and so on, until all K pancakes are in the stack and the centers of the circular faces are aligned in a line perpendicular to the plate, as illustrated by this example:

![alt text](https://code.google.com/codejam/contest/images/?image=pancake_stack.png&p=5768968631484416&c=3274486)

A stack of pancakes with varying radii and thicknesses, obeying the rules in the statement.

You know that there is only one thing your diners love as much as they love pancakes: syrup! It is best to maximize the total amount of exposed pancake surface area in the stack, since more exposed pancake surface area means more places to pour on delicious syrup. Any part of a pancake that is not touching part of another pancake or the plate is considered to be exposed.

If you choose the K pancakes optimally, what is the largest total exposed pancake surface area you can achieve?

### Input
The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with two integers N and K: the total number of available pancakes, and the size of the stack that the diner has ordered. Then, N more lines follow. Each contains two integers Ri and Hi: the radius and height of the i-th pancake, in millimeters.

### Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum possible total exposed pancake surface area, in millimeters squared. y will be considered correct if it is within an absolute or relative error of 10-6 of the correct answer.

### Limits
- 1 ≤ T ≤ 100.
- 1 ≤ K ≤ N.
- 1 ≤ Ri ≤ 106, for all i.
- 1 ≤ Hi ≤ 106, for all i.

### Small dataset
1 ≤ N ≤ 10.

### Sample

```
Input:
4
2 1
100 20
200 10
2 2
100 20
200 10
3 2
100 10
100 10
100 10
4 2
9 3
7 1
10 1
8 4

Output:
Case #1: 138230.076757951
Case #2: 150796.447372310
Case #3: 43982.297150257
Case #4: 625.176938064
```

## Breakdown
`N` = Available pancakes
`K` = Pancakes ordered
`R` = Pancake radius
`H` = Pancake height
`T` = Number of tests

*Limits*
- 1 ≤ T ≤ 100.
- 1 ≤ K ≤ N.
- 1 ≤ Ri ≤ 106, for all i.
- 1 ≤ Hi ≤ 106, for all i.

## Solution
1. In order to solve the problem, we declare the variables of the available pancakes and the ordered ones as an `int`.
Also, two integer arrays for the Radius of the pancakes and another one for the Height of them.

2. I'll declare some variables, one for the answer, and another one for the current pancake. However, in oirder to get the info correctly, I'll need to focus on how to get the area of the pancakes. For that, I'll be using the `acos()` function.

3. In my `ample()` function, I'll be solving the problem. For that will be necessary to implement a couple of for loops. The first one will make sure the scans stay less than the number of available pancakes.

4. The other for loop, will be the code in charge to "try" the bottom pancakes and from that, give us the solution to the problem.
```
int k;
    for(int i = 0; i < N; i++){
        current = (long long)R[i] * R[i] + 2LL * R[i] * H[i];
        for(int j=0, k=0; j< K; k++){
            if(i==k){
                continue;
            }
            current += 2LL * R[k] * H[k];
            j++;
        }
        if(answer < current){
            answer = current;
        }
    }
    printf("%.9f\n", answer*acos(-1));
```

Complexity: `O(n^2)`

## Makefile
```
make run
```