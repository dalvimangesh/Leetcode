<h2><a href="https://leetcode.com/problems/flower-planting-with-no-adjacent/">1042. Flower Planting With No Adjacent</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> gardens, labeled from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>, and an array <code style="user-select: auto;">paths</code> where <code style="user-select: auto;">paths[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code> describes a bidirectional path between garden <code style="user-select: auto;">x<sub style="user-select: auto;">i</sub></code> to garden <code style="user-select: auto;">y<sub style="user-select: auto;">i</sub></code>. In each garden, you want to plant one of 4 types of flowers.</p>

<p style="user-select: auto;">All gardens have <strong style="user-select: auto;">at most 3</strong> paths coming into or leaving it.</p>

<p style="user-select: auto;">Your task is to choose a flower type for each garden such that, for any two gardens connected by a path, they have different types of flowers.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;"><strong style="user-select: auto;">any</strong> such a choice as an array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;">, where </em><code style="user-select: auto;">answer[i]</code><em style="user-select: auto;"> is the type of flower planted in the </em><code style="user-select: auto;">(i+1)<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> garden. The flower types are denoted </em><code style="user-select: auto;">1</code><em style="user-select: auto;">, </em><code style="user-select: auto;">2</code><em style="user-select: auto;">, </em><code style="user-select: auto;">3</code><em style="user-select: auto;">, or </em><code style="user-select: auto;">4</code><em style="user-select: auto;">. It is guaranteed an answer exists.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, paths = [[1,2],[2,3],[3,1]]
<strong style="user-select: auto;">Output:</strong> [1,2,3]
<strong style="user-select: auto;">Explanation:</strong>
Gardens 1 and 2 have different types.
Gardens 2 and 3 have different types.
Gardens 3 and 1 have different types.
Hence, [1,2,3] is a valid answer. Other valid answers include [1,2,4], [1,4,2], and [3,2,1].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, paths = [[1,2],[3,4]]
<strong style="user-select: auto;">Output:</strong> [1,2,1,2]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, paths = [[1,2],[2,3],[3,4],[4,1],[1,3],[2,4]]
<strong style="user-select: auto;">Output:</strong> [1,2,3,4]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= paths.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">paths[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">x<sub style="user-select: auto;">i</sub> != y<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">Every garden has <strong style="user-select: auto;">at most 3</strong> paths coming into or leaving it.</li>
</ul>
</div>