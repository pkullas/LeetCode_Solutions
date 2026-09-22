# Problem: Valid Anagram (Easy)

Link: https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency array of size 26 to count the occurrences of each lowercase letter in the first string and subtract the occurrences from the second string. If all counts are zero, the strings are anagrams.

## Complexity

Time: O(n)
Space: O(1)

## Notes

Tested the program with two test cases. The first contains two strings that are anagrams, and the second contains strings that are not anagrams.

