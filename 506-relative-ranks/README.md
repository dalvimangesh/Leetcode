<h2><a href="https://leetcode.com/problems/relative-ranks/">506. Relative Ranks</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">score</code> of size <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">score[i]</code> is the score of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> athlete in a competition. All the scores are guaranteed to be <strong style="user-select: auto;">unique</strong>.</p>

<p style="user-select: auto;">The athletes are <strong style="user-select: auto;">placed</strong> based on their scores, where the <code style="user-select: auto;">1<sup style="user-select: auto;">st</sup></code> place athlete has the highest score, the <code style="user-select: auto;">2<sup style="user-select: auto;">nd</sup></code> place athlete has the <code style="user-select: auto;">2<sup style="user-select: auto;">nd</sup></code> highest score, and so on. The placement of each athlete determines their rank:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The <code style="user-select: auto;">1<sup style="user-select: auto;">st</sup></code> place athlete's rank is <code style="user-select: auto;">"Gold Medal"</code>.</li>
	<li style="user-select: auto;">The <code style="user-select: auto;">2<sup style="user-select: auto;">nd</sup></code> place athlete's rank is <code style="user-select: auto;">"Silver Medal"</code>.</li>
	<li style="user-select: auto;">The <code style="user-select: auto;">3<sup style="user-select: auto;">rd</sup></code> place athlete's rank is <code style="user-select: auto;">"Bronze Medal"</code>.</li>
	<li style="user-select: auto;">For the <code style="user-select: auto;">4<sup style="user-select: auto;">th</sup></code> place to the <code style="user-select: auto;">n<sup style="user-select: auto;">th</sup></code> place athlete, their rank is their placement number (i.e., the <code style="user-select: auto;">x<sup style="user-select: auto;">th</sup></code> place athlete's rank is <code style="user-select: auto;">"x"</code>).</li>
</ul>

<p style="user-select: auto;">Return an array <code style="user-select: auto;">answer</code> of size <code style="user-select: auto;">n</code> where <code style="user-select: auto;">answer[i]</code> is the <strong style="user-select: auto;">rank</strong> of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> athlete.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> score = [5,4,3,2,1]
<strong style="user-select: auto;">Output:</strong> ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
<strong style="user-select: auto;">Explanation:</strong> The placements are [1<sup style="user-select: auto;">st</sup>, 2<sup style="user-select: auto;">nd</sup>, 3<sup style="user-select: auto;">rd</sup>, 4<sup style="user-select: auto;">th</sup>, 5<sup style="user-select: auto;">th</sup>].</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> score = [10,3,8,9,4]
<strong style="user-select: auto;">Output:</strong> ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
<strong style="user-select: auto;">Explanation:</strong> The placements are [1<sup style="user-select: auto;">st</sup>, 5<sup style="user-select: auto;">th</sup>, 3<sup style="user-select: auto;">rd</sup>, 2<sup style="user-select: auto;">nd</sup>, 4<sup style="user-select: auto;">th</sup>].

</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == score.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= score[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">All the values in <code style="user-select: auto;">score</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>