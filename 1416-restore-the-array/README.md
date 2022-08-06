<h2><a href="https://leetcode.com/problems/restore-the-array/">1416. Restore The Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A program was supposed to print an array of integers. The program forgot to print whitespaces and the array is printed as a string of digits <code style="user-select: auto;">s</code> and all we know is that all integers in the array were in the range <code style="user-select: auto;">[1, k]</code> and there are no leading zeros in the array.</p>

<p style="user-select: auto;">Given the string <code style="user-select: auto;">s</code> and the integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the number of the possible arrays that can be printed as </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> using the mentioned program</em>. Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1000", k = 10000
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The only possible array is [1000]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1000", k = 10
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There cannot be an array that was printed this way and has all integer &gt;= 1 and &lt;= 10.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1317", k = 2000
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> Possible arrays are [1317],[131,7],[13,17],[1,317],[13,1,7],[1,31,7],[1,3,17],[1,3,1,7]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only digits and does not contain leading zeros.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>