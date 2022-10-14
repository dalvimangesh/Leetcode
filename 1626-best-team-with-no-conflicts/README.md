<h2><a href="https://leetcode.com/problems/best-team-with-no-conflicts/">1626. Best Team With No Conflicts</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are the manager of a basketball team. For the upcoming tournament, you want to choose the team with the highest overall score. The score of the team is the <strong style="user-select: auto;">sum</strong> of scores of all the players in the team.</p>

<p style="user-select: auto;">However, the basketball team is not allowed to have <strong style="user-select: auto;">conflicts</strong>. A <strong style="user-select: auto;">conflict</strong> exists if a younger player has a <strong style="user-select: auto;">strictly higher</strong> score than an older player. A conflict does <strong style="user-select: auto;">not</strong> occur between players of the same age.</p>

<p style="user-select: auto;">Given two lists, <code style="user-select: auto;">scores</code> and <code style="user-select: auto;">ages</code>, where each <code style="user-select: auto;">scores[i]</code> and <code style="user-select: auto;">ages[i]</code> represents the score and age of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> player, respectively, return <em style="user-select: auto;">the highest overall score of all possible basketball teams</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> scores = [1,3,5,10,15], ages = [1,2,3,4,5]
<strong style="user-select: auto;">Output:</strong> 34
<strong style="user-select: auto;">Explanation:</strong>&nbsp;You can choose all the players.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> scores = [4,5,6,5], ages = [2,1,2,1]
<strong style="user-select: auto;">Output:</strong> 16
<strong style="user-select: auto;">Explanation:</strong>&nbsp;It is best to choose the last 3 players. Notice that you are allowed to choose multiple people of the same age.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> scores = [1,2,3,5], ages = [8,9,10,1]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong>&nbsp;It is best to choose the first 3 players. 
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= scores.length, ages.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">scores.length == ages.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= scores[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= ages[i] &lt;= 1000</code></li>
</ul>
</div>