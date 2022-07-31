<h2><a href="https://leetcode.com/problems/maximum-score-of-a-good-subarray/">1793. Maximum Score of a Good Subarray</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of integers <code style="user-select: auto;">nums</code> <strong style="user-select: auto;">(0-indexed)</strong> and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">score</strong> of a subarray <code style="user-select: auto;">(i, j)</code> is defined as <code style="user-select: auto;">min(nums[i], nums[i+1], ..., nums[j]) * (j - i + 1)</code>. A <strong style="user-select: auto;">good</strong> subarray is a subarray where <code style="user-select: auto;">i &lt;= k &lt;= j</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum possible <strong style="user-select: auto;">score</strong> of a <strong style="user-select: auto;">good</strong> subarray.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,4,3,7,4,5], k = 3
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation:</strong> The optimal subarray is (1, 5) with a score of min(4,3,7,4,5) * (5-1+1) = 3 * 5 = 15. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,5,4,5,4,1,1,1], k = 0
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation:</strong> The optimal subarray is (0, 4) with a score of min(5,5,4,5,4) * (4-0+1) = 4 * 5 = 20.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt; nums.length</code></li>
</ul>
</div>