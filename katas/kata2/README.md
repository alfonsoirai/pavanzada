## Kata2: Strong Password Checker

A password is considered strong if below conditions are all met:

    It has at least 6 characters and at most 20 characters.

    It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.

    It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met). Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

    Insertion, deletion or replace of any one character are all considered as one change.

`int strongPasswordChecker(char* s) { }`

## Breakdown
- 6 characters minimum.
- 20 character maximum.
- At least 1 upper case character.
- At least 1 lower case character.
- At least 1 digit number.
- No three same character can be together.

## Solution
1. Verify that the string size is at least 6.
2. Declare some variables:
    - Upper case characters: `boolean upperCase;`.
    - Lower case characters: `boolean lowerCase;`.
    - Digits: `boolean digits;`.
    - Repeated characters: `int characters`.
    - Operations counter: `int operations`.
    - Temporary `char` element to make the three letter comparision.
3. Make the comparisions to know if the string turns true the upper, lower and digits variables.
4. Return the expected value.