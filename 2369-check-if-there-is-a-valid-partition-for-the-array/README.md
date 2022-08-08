<h2><a href="https://leetcode.com/problems/check-if-there-is-a-valid-partition-for-the-array/">2369. Check if There is a Valid Partition For The Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>. You have to partition the array into one or more <strong style="user-select: auto;">contiguous</strong> subarrays.</p>

<p style="user-select: auto;">We call a partition of the array <strong style="user-select: auto;">valid</strong> if each of the obtained subarrays satisfies <strong style="user-select: auto;">one</strong> of the following conditions:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">The subarray consists of <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">2</code> equal elements. For example, the subarray <code style="user-select: auto;">[2,2]</code> is good.</li>
	<li style="user-select: auto;">The subarray consists of <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">3</code> equal elements. For example, the subarray <code style="user-select: auto;">[4,4,4]</code> is good.</li>
	<li style="user-select: auto;">The subarray consists of <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">3</code> consecutive increasing elements, that is, the difference between adjacent elements is <code style="user-select: auto;">1</code>. For example, the subarray <code style="user-select: auto;">[3,4,5]</code> is good, but the subarray <code style="user-select: auto;">[1,3,5]</code> is not.</li>
</ol>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if the array has <strong style="user-select: auto;">at least</strong> one valid partition</em>. Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,4,4,5,6]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The array can be partitioned into the subarrays [4,4] and [4,5,6].
This partition is valid, so we return true.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,1,2]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no valid partition for this array.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>