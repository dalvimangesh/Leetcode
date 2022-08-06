<h2><a href="https://leetcode.com/problems/maximum-xor-with-an-element-from-array/">1707. Maximum XOR With an Element From Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">nums</code> consisting of non-negative integers. You are also given a <code style="user-select: auto;">queries</code> array, where <code style="user-select: auto;">queries[i] = [x<sub style="user-select: auto;">i</sub>, m<sub style="user-select: auto;">i</sub>]</code>.</p>

<p style="user-select: auto;">The answer to the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> query is the maximum bitwise <code style="user-select: auto;">XOR</code> value of <code style="user-select: auto;">x<sub style="user-select: auto;">i</sub></code> and any element of <code style="user-select: auto;">nums</code> that does not exceed <code style="user-select: auto;">m<sub style="user-select: auto;">i</sub></code>. In other words, the answer is <code style="user-select: auto;">max(nums[j] XOR x<sub style="user-select: auto;">i</sub>)</code> for all <code style="user-select: auto;">j</code> such that <code style="user-select: auto;">nums[j] &lt;= m<sub style="user-select: auto;">i</sub></code>. If all elements in <code style="user-select: auto;">nums</code> are larger than <code style="user-select: auto;">m<sub style="user-select: auto;">i</sub></code>, then the answer is <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an integer array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;"> where </em><code style="user-select: auto;">answer.length == queries.length</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is the answer to the </em><code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> query.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,2,3,4], queries = [[3,1],[1,3],[5,6]]
<strong style="user-select: auto;">Output:</strong> [3,3,7]
<strong style="user-select: auto;">Explanation:</strong>
1) 0 and 1 are the only two integers not greater than 1. 0 XOR 3 = 3 and 1 XOR 3 = 2. The larger of the two is 3.
2) 1 XOR 2 = 3.
3) 5 XOR 2 = 7.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,2,4,6,6,3], queries = [[12,4],[8,1],[6,3]]
<strong style="user-select: auto;">Output:</strong> [15,-1,5]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length, queries.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[j], x<sub style="user-select: auto;">i</sub>, m<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>