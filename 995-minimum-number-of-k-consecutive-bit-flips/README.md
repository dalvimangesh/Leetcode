<h2><a href="https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/">995. Minimum Number of K Consecutive Bit Flips</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a binary array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">k-bit flip</strong> is choosing a <strong style="user-select: auto;">subarray</strong> of length <code style="user-select: auto;">k</code> from <code style="user-select: auto;">nums</code> and simultaneously changing every <code style="user-select: auto;">0</code> in the subarray to <code style="user-select: auto;">1</code>, and every <code style="user-select: auto;">1</code> in the subarray to <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of <strong style="user-select: auto;">k-bit flips</strong> required so that there is no </em><code style="user-select: auto;">0</code><em style="user-select: auto;"> in the array</em>. If it is not possible, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a <strong style="user-select: auto;">contiguous</strong> part of an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,0], k = 1
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Flip nums[0], then flip nums[2].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,0], k = 2
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> No matter how we flip subarrays of size 2, we cannot make the array become [1,1,1].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,0,0,1,0,1,1,0], k = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 
Flip nums[0],nums[1],nums[2]: nums becomes [1,1,1,1,0,1,1,0]
Flip nums[4],nums[5],nums[6]: nums becomes [1,1,1,1,1,0,0,0]
Flip nums[5],nums[6],nums[7]: nums becomes [1,1,1,1,1,1,1,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length</code></li>
</ul>
</div>