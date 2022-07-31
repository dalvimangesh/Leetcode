<h2><a href="https://leetcode.com/problems/minimum-degree-of-a-connected-trio-in-a-graph/">1761. Minimum Degree of a Connected Trio in a Graph</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an undirected graph. You are given an integer <code style="user-select: auto;">n</code> which is the number of nodes in the graph and an array <code style="user-select: auto;">edges</code>, where each <code style="user-select: auto;">edges[i] = [u<sub style="user-select: auto;">i</sub>, v<sub style="user-select: auto;">i</sub>]</code> indicates that there is an undirected edge between <code style="user-select: auto;">u<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">v<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">connected trio</strong> is a set of <strong style="user-select: auto;">three</strong> nodes where there is an edge between <b style="user-select: auto;">every</b> pair of them.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">degree of a connected trio</strong> is the number of edges where one endpoint is in the trio, and the other is not.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> degree of a connected trio in the graph, or</em> <code style="user-select: auto;">-1</code> <em style="user-select: auto;">if the graph has no connected trios.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/26/trios1.png" style="width: 388px; height: 164px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, edges = [[1,2],[1,3],[3,2],[4,1],[5,2],[3,6]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> There is exactly one trio, which is [1,2,3]. The edges that form its degree are bolded in the figure above.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/26/trios2.png" style="width: 388px; height: 164px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, edges = [[1,3],[4,1],[4,3],[2,5],[5,6],[6,7],[7,5],[2,6]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are exactly three trios:
1) [1,4,3] with degree 0.
2) [2,5,6] with degree 2.
3) [5,6,7] with degree 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 400</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= edges.length &lt;= n * (n-1) / 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= u<sub style="user-select: auto;">i</sub>, v<sub style="user-select: auto;">i</sub> &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">u<sub style="user-select: auto;">i </sub>!= v<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">There are no repeated edges.</li>
</ul>
</div>