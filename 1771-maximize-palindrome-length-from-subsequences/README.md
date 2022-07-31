<h2><a href="https://leetcode.com/problems/maximize-palindrome-length-from-subsequences/">1771. Maximize Palindrome Length From Subsequences</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two strings, <code style="user-select: auto;">word1</code> and <code style="user-select: auto;">word2</code>. You want to construct a string in the following manner:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose some <strong style="user-select: auto;">non-empty</strong> subsequence <code style="user-select: auto;">subsequence1</code> from <code style="user-select: auto;">word1</code>.</li>
	<li style="user-select: auto;">Choose some <strong style="user-select: auto;">non-empty</strong> subsequence <code style="user-select: auto;">subsequence2</code> from <code style="user-select: auto;">word2</code>.</li>
	<li style="user-select: auto;">Concatenate the subsequences: <code style="user-select: auto;">subsequence1 + subsequence2</code>, to make the string.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">length</strong> of the longest <strong style="user-select: auto;">palindrome</strong> that can be constructed in the described manner. </em>If no palindromes can be constructed, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> of a string <code style="user-select: auto;">s</code> is a string that can be made by deleting some (possibly none) characters from <code style="user-select: auto;">s</code> without changing the order of the remaining characters.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">palindrome</strong> is a string that reads the same forward&nbsp;as well as backward.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "cacb", word2 = "cbba"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Choose "ab" from word1 and "cba" from word2 to make "abcba", which is a palindrome.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "ab", word2 = "ab"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Choose "ab" from word1 and "a" from word2 to make "aba", which is a palindrome.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "aa", word2 = "bb"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> You cannot construct a palindrome from the described method, so return 0.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word1.length, word2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word1</code> and <code style="user-select: auto;">word2</code> consist of lowercase English letters.</li>
</ul>
</div>