<h2><a href="https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/">1028. Recover a Tree From Preorder Traversal</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">We run a&nbsp;preorder&nbsp;depth-first search (DFS) on the <code style="user-select: auto;">root</code> of a binary tree.</p>

<p style="user-select: auto;">At each node in this traversal, we output <code style="user-select: auto;">D</code> dashes (where <code style="user-select: auto;">D</code> is the depth of this node), then we output the value of this node.&nbsp; If the depth of a node is <code style="user-select: auto;">D</code>, the depth of its immediate child is <code style="user-select: auto;">D + 1</code>.&nbsp; The depth of the <code style="user-select: auto;">root</code> node is <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">If a node has only one child, that child is guaranteed to be <strong style="user-select: auto;">the left child</strong>.</p>

<p style="user-select: auto;">Given the output <code style="user-select: auto;">traversal</code> of this traversal, recover the tree and return <em style="user-select: auto;">its</em> <code style="user-select: auto;">root</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/04/08/recover-a-tree-from-preorder-traversal.png" style="width: 320px; height: 200px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> traversal = "1-2--3--4-5--6--7"
<strong style="user-select: auto;">Output:</strong> [1,2,5,3,4,6,7]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/04/11/screen-shot-2019-04-10-at-114101-pm.png" style="width: 256px; height: 250px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> traversal = "1-2--3---4-5--6---7"
<strong style="user-select: auto;">Output:</strong> [1,2,5,3,null,6,null,4,null,7]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/04/11/screen-shot-2019-04-10-at-114955-pm.png" style="width: 276px; height: 250px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> traversal = "1-401--349---90--88"
<strong style="user-select: auto;">Output:</strong> [1,401,null,349,88,90]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the original tree is in the range <code style="user-select: auto;">[1, 1000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>