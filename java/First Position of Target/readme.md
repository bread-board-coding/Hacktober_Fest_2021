## Description
Given a sorted array (ascending order) and a target number, find the first index of this number in O(log n)O(logn) time complexity.

If the target number does not exist in the array, return -1.
## Example
### Example 1:
Input:
<pre>
tuple = [1,4,4,5,7,7,8,9,9,10]
target = 1
</pre>
Output:
<pre>
0
</pre>
Explanation:

The first index of 1 is 0.
### Example 2:
Input:
<pre>
tuple = [1, 2, 3, 3, 4, 5, 10]
target = 3
</pre>
Output:
<pre>
2
</pre>
Explanation:

The first index of 3 is 2.
## Challenge
If the count of numbers is bigger than 2^32, can your code work properly?