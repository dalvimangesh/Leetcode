<h2><a href="https://leetcode.com/problems/freedom-trail/">514. Freedom Trail</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">In the video game Fallout 4, the quest <strong style="user-select: auto;">"Road to Freedom"</strong> requires players to reach a metal dial called the <strong style="user-select: auto;">"Freedom Trail Ring"</strong> and use the dial to spell a specific keyword to open the door.</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">ring</code> that represents the code engraved on the outer ring and another string <code style="user-select: auto;">key</code> that represents the keyword that needs to be spelled, return <em style="user-select: auto;">the minimum number of steps to spell all the characters in the keyword</em>.</p>

<p style="user-select: auto;">Initially, the first character of the ring is aligned at the <code style="user-select: auto;">"12:00"</code> direction. You should spell all the characters in <code style="user-select: auto;">key</code> one by one by rotating <code style="user-select: auto;">ring</code> clockwise or anticlockwise to make each character of the string key aligned at the <code style="user-select: auto;">"12:00"</code> direction and then by pressing the center button.</p>

<p style="user-select: auto;">At the stage of rotating the ring to spell the key character <code style="user-select: auto;">key[i]</code>:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">You can rotate the ring clockwise or anticlockwise by one place, which counts as <strong style="user-select: auto;">one step</strong>. The final purpose of the rotation is to align one of <code style="user-select: auto;">ring</code>'s characters at the <code style="user-select: auto;">"12:00"</code> direction, where this character must equal <code style="user-select: auto;">key[i]</code>.</li>
	<li style="user-select: auto;">If the character <code style="user-select: auto;">key[i]</code> has been aligned at the <code style="user-select: auto;">"12:00"</code> direction, press the center button to spell, which also counts as <strong style="user-select: auto;">one step</strong>. After the pressing, you could begin to spell the next character in the key (next stage). Otherwise, you have finished all the spelling.</li>
</ol>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2018/10/22/ring.jpg" style="width: 450px; height: 450px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ring = "godding", key = "gd"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>
For the first key character 'g', since it is already in place, we just need 1 step to spell this character. 
For the second key character 'd', we need to rotate the ring "godding" anticlockwise by two steps to make it become "ddinggo".
Also, we need 1 more step for spelling.
So the final output is 4.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ring = "godding", key = "godding"
<strong style="user-select: auto;">Output:</strong> 13
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= ring.length, key.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">ring</code> and <code style="user-select: auto;">key</code> consist of only lower case English letters.</li>
	<li style="user-select: auto;">It is guaranteed that <code style="user-select: auto;">key</code> could always be spelled by rotating <code style="user-select: auto;">ring</code>.</li>
</ul>
</div>