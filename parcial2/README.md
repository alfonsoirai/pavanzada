# Save Humanity
Oh!! Mankind is in trouble again. This time, it's a deadly disease spreading at a rate never seen before. The need of the hour is to set up efficient virus detectors. You are the lead at Central Hospital and you need to find a fast and reliable way to detect the footprints of the virus DNA in that of the patient.

The DNA of the patient as well as of the virus consists of lowercase letters. Since the collected data is raw, there may be some errors. You will need to find all substrings in the patient DNA that either exactly matches the virus DNA, or has at most one mismatch, i.e., a difference in at most one location.

For example, "`aa`" and "`aa`" are matching, "`ab`" and "`aa`" are matching, while "`ab`" and "`ba`" are not.

## Input format
The first line contains the number of test cases, . test cases follow.
Each test case consists of a single line containing two space-separated strings p (the patient DNA) and v (the virus DNA).

## Constraints
- 1 <= t <= 10
- p and v contain at most 10^5 characters each.
- All characters in p and v are lowercase English letters.

## Output Format
For each test case, output a single line containing a space-delimited list of starting indices (
substrings of which are matching with according to the condition mentioned above. The indices have to be in increasing order. If there is no matching substring, output No Match! .

## Sample Input 0
```
3
abbab ba 
hello world 
banana nan
```

## Sample Output 0
```
12
No Match! 
02
```

## Explanation 0
For the first case, the substrings of p starting at indices 1 and 2 are "`bb`" and "`ba`" and they are matching with the string v which is "`ba`".
For the second case, there are no matching substrings so the output is No Match! .

## Breakdown
- The VirusDNA can't be longer than the HumanDNA.
- If at least one character on the virusDNA has the same position, and the humanDNA has just one character different, it will count.
- The VirusDNA can be a substring of the humanDNA
- The input must be in stdin
- If there is more than one difference, it will not be infected.

## Solution

