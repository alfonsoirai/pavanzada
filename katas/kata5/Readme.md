# Kata 5: Infograph
You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table ↴ , where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

"After beating the eggs, Dana read the next step:"

"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of  2




## Breakdown
- HashTable to store the following:
    - Words as `keys`.
    - Number of appearances as `values`.
- Input:
    - Long string
- When displaying the output, it will print all the elements in the HashTable.
- Upper case letters does not matter, they count the same as lower case ones.
- Max string length is 255.

## Solution
1. Read string into a char* variable.
2. Read and interate into the char* and compare if the characters are letters.
3. If it's a letter, add to a new array and store it.
4. Whenever a space is found, insert the word into a HashTable.
5. If a word already exists, increment the value.
6. Print the keys and values.

Complexity time: `O(n)`
