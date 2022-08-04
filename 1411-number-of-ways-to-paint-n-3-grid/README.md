<h2><a href="https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/">1411. Number of Ways to Paint N × 3 Grid</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have a <code style="user-select: auto;">grid</code> of size <code style="user-select: auto;">n x 3</code> and you want to paint each cell of the grid with exactly one of the three colors: <strong style="user-select: auto;">Red</strong>, <strong style="user-select: auto;">Yellow,</strong> or <strong style="user-select: auto;">Green</strong> while making sure that no two adjacent cells have the same color (i.e., no two cells that share vertical or horizontal sides have the same color).</p>

<p style="user-select: auto;">Given <code style="user-select: auto;">n</code> the number of rows of the grid, return <em style="user-select: auto;">the number of ways</em> you can paint this <code style="user-select: auto;">grid</code>. As the answer may grow large, the answer <strong style="user-select: auto;">must be</strong> computed modulo <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/03/26/e1.png" style="width: 400px; height: 257px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 12
<strong style="user-select: auto;">Explanation:</strong> There are 12 possible way to paint the grid as shown.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5000
<strong style="user-select: auto;">Output:</strong> 30228214
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 5000</code></li>
</ul>
</div>