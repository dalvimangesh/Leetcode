<h2><a href="https://leetcode.com/problems/longest-cycle-in-a-graph/">2360. Longest Cycle in a Graph</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">directed</strong> graph of <code style="user-select: auto;">n</code> nodes numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>, where each node has <strong style="user-select: auto;">at most one</strong> outgoing edge.</p>

<p style="user-select: auto;">The graph is represented with a given <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">edges</code> of size <code style="user-select: auto;">n</code>, indicating that there is a directed edge from node <code style="user-select: auto;">i</code> to node <code style="user-select: auto;">edges[i]</code>. If there is no outgoing edge from node <code style="user-select: auto;">i</code>, then <code style="user-select: auto;">edges[i] == -1</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">longest</strong> cycle in the graph</em>. If no cycle exists, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">A cycle is a path that starts and ends at the <strong style="user-select: auto;">same</strong> node.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/08/graph4drawio-5.png" style="width: 335px; height: 191px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> edges = [3,3,4,2,3]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The longest cycle in the graph is the cycle: 2 -&gt; 4 -&gt; 3 -&gt; 2.
The length of this cycle is 3, so 3 is returned.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/06/07/graph4drawio-1.png" style="width: 171px; height: 161px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> edges = [2,-1,3,1]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There are no cycles in this graph.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == edges.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1 &lt;= edges[i] &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i] != i</code></li>
</ul>
</div>