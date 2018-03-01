# Kata 4: Is it a valid number?

## Problem
Validate if a given string is numeric.

Some examples:
```
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
```

## Breakdown

- The input must be a string of max 255 characters.
- The number can have a coma
- The letter `e` can be used in a number after an integer, and can only have integers next to him.
- The integers after the letter `e` can have a negative or positive symbol (+ or -).
- Math operations are not considered numbers.
- The use of blank spaces at the beggining or after the number are allowed.
- Decimal numbers are the only type of numbers allowed.

## Solution
1. The first thing that I'll do is read character by character ignoring if their exists any blank space.
2. If the first character that appears in the string is a point, I need to make sure it's the first one to appear, otherwise, it's false.
3. After I start to read the input and their all numbers and I read a comma, I need to check they are at least three more numbers after, and, check if there are three numbers before or less.
4. When the reader reads an `e`, It must check that it's the only one I've read, and that it's not the last character in the input. 
5. If there's an e in the input, there sha'll not be any decimal point or comma after the letter.

