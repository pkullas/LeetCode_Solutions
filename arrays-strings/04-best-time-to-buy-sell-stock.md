# Problem: Best Time to Buy and Sell Stock (Easy)

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I tracked the minimum price seen so far while scanning the array. For each price, I calculated the profit that could be made by selling on that day and kept the maximum profit found.

## Complexity

Time: O(n)
Space: O(1)

## Notes

Tested the program with two test cases. The first contains a profitable transaction and the second checks a case where no profit can be made.
