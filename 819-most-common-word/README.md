<h2><a href="https://leetcode.com/problems/most-common-word/">819. Most Common Word</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">paragraph</code> and a string array of the banned words <code style="user-select: auto;">banned</code>, return <em style="user-select: auto;">the most frequent word that is not banned</em>. It is <strong style="user-select: auto;">guaranteed</strong> there is <strong style="user-select: auto;">at least one word</strong> that is not banned, and that the answer is <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">The words in <code style="user-select: auto;">paragraph</code> are <strong style="user-select: auto;">case-insensitive</strong> and the answer should be returned in <strong style="user-select: auto;">lowercase</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.", banned = ["hit"]
<strong style="user-select: auto;">Output:</strong> "ball"
<strong style="user-select: auto;">Explanation:</strong> 
"hit" occurs 3 times, but it is a banned word.
"ball" occurs twice (and no other word does), so it is the most frequent non-banned word in the paragraph. 
Note that words in the paragraph are not case sensitive,
that punctuation is ignored (even if adjacent to words, such as "ball,"), 
and that "hit" isn't the answer even though it occurs more because it is banned.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> paragraph = "a.", banned = []
<strong style="user-select: auto;">Output:</strong> "a"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= paragraph.length &lt;= 1000</code></li>
	<li style="user-select: auto;">paragraph consists of English letters, space <code style="user-select: auto;">' '</code>, or one of the symbols: <code style="user-select: auto;">"!?',;."</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= banned.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= banned[i].length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">banned[i]</code> consists of only lowercase English letters.</li>
</ul>
</div>