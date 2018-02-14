# Kata3: Judge Route Circle
Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.

The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:

Input: "UD"  Output: true  

Example 2:

Input: "LL"  Output: false  

## Breakdown
- We will receive a string.
- The string must be integrated with U, D, L, R.
- In order to have a true, we expect the robot goes back to the initial position.
- If the robot returns to the initial position, we must have the same amount of opposite movements.

## Solution
1. We need to add a counter for the movements variables:
    - `left`
    - `right`
    - `up`
    - `down`
2. Add a temp character to traverse the string.
3. Create a loop to traverse the string.
4. If we found a character that it's not in the possible ones, we stop the program.
5. Finally, compare that there is the same amount of opposite characters.
6. If indeed, we have the same amount of opposite characters, return true. If not, return false.

The running time = `O(n)`