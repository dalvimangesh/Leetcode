<h2><a href="https://leetcode.com/problems/beautiful-arrangement/">526. Beautiful Arrangement</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Suppose you have <code style="user-select: auto;">n</code> integers labeled <code style="user-select: auto;">1</code> through <code style="user-select: auto;">n</code>. A permutation of those <code style="user-select: auto;">n</code> integers <code style="user-select: auto;">perm</code> (<strong style="user-select: auto;">1-indexed</strong>) is considered a <strong style="user-select: auto;">beautiful arrangement</strong> if for every <code style="user-select: auto;">i</code> (<code style="user-select: auto;">1 &lt;= i &lt;= n</code>), <strong style="user-select: auto;">either</strong> of the following is true:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">perm[i]</code> is divisible by <code style="user-select: auto;">i</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">i</code> is divisible by <code style="user-select: auto;">perm[i]</code>.</li>
</ul>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">number</strong> of the <strong style="user-select: auto;">beautiful arrangements</strong> that you can construct</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> 2
<b style="user-select: auto;">Explanation:</b> 
The first beautiful arrangement is [1,2]:
    - perm[1] = 1 is divisible by i = 1
    - perm[2] = 2 is divisible by i = 2
The second beautiful arrangement is [2,1]:
    - perm[1] = 2 is divisible by i = 1
    - i = 2 is divisible by perm[2] = 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 15</code></li>
</ul>
</div>