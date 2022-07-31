<h2><a href="https://leetcode.com/problems/edit-distance/">72. Edit Distance</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">word1</code> and <code style="user-select: auto;">word2</code>, return <em style="user-select: auto;">the minimum number of operations required to convert <code style="user-select: auto;">word1</code> to <code style="user-select: auto;">word2</code></em>.</p>

<p style="user-select: auto;">You have the following three operations permitted on a word:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Insert a character</li>
	<li style="user-select: auto;">Delete a character</li>
	<li style="user-select: auto;">Replace a character</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "horse", word2 = "ros"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 
horse -&gt; rorse (replace 'h' with 'r')
rorse -&gt; rose (remove 'r')
rose -&gt; ros (remove 'e')
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "intention", word2 = "execution"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> 
intention -&gt; inention (remove 't')
inention -&gt; enention (replace 'i' with 'e')
enention -&gt; exention (replace 'n' with 'x')
exention -&gt; exection (replace 'n' with 'c')
exection -&gt; execution (insert 'u')
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= word1.length, word2.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word1</code> and <code style="user-select: auto;">word2</code> consist of lowercase English letters.</li>
</ul>
</div>