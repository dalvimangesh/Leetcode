<h2><a href="https://leetcode.com/problems/minimum-replacements-to-sort-the-array/">2366. Minimum Replacements to Sort the Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>. In one operation you can replace any element of the array with <strong style="user-select: auto;">any two</strong> elements that <strong style="user-select: auto;">sum</strong> to it.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, consider <code style="user-select: auto;">nums = [5,6,7]</code>. In one operation, we can replace <code style="user-select: auto;">nums[1]</code> with <code style="user-select: auto;">2</code> and <code style="user-select: auto;">4</code> and convert <code style="user-select: auto;">nums</code> to <code style="user-select: auto;">[5,2,4,7]</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of operations to make an array that is sorted in <strong style="user-select: auto;">non-decreasing</strong> order</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,9,3]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Here are the steps to sort the array in non-decreasing order:
- From [3,9,3], replace the 9 with 3 and 6 so the array becomes [3,3,6,3]
- From [3,3,6,3], replace the 6 with 3 and 3 so the array becomes [3,3,3,3,3]
There are 2 steps to sort the array in non-decreasing order. Therefore, we return 2.

</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4,5]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The array is already in non-decreasing order. Therefore, we return 0. 
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>