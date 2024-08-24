<h2><a href="https://www.geeksforgeeks.org/problems/check-mirror-in-n-ary-tree1528/1">Check Mirror in N-ary tree</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two <strong>n</strong>-ary trees.&nbsp;Check if they are mirror images of each other or not. You are also given <strong>e</strong> denoting the number of edges in both trees, and two arrays, <strong>A[] </strong>and<strong> </strong><strong>B[]</strong>. </span> <span style="font-size:18px">Each array has&nbsp;2*e space separated values u,v denoting an edge from u to v for the both trees.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>n = </strong>3, <strong>e = </strong>2</span>
<span style="font-size:18px"><strong>A[] = </strong>{1, 2, 1, 3}</span>
<span style="font-size:18px"><strong>B[] = </strong>{1, 3, 1, 2}</span>
<span style="font-size:18px"><strong>Output:
</strong>1</span>
<span style="font-size:18px"><strong>Explanation:
</strong></span>   <span style="font-size:18px">1          1
 / \        /  \
2   3      3    2</span> 
<span style="font-size:18px">As we can clearly see, the second tree
is mirror image of the first.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><strong>n = </strong>3, <strong>e = </strong>2</span>
<span style="font-size:18px"><strong>A[] = </strong>{1, 2, 1, 3}</span>
<span style="font-size:18px"><strong>B[] = </strong>{1, 2, 1, 3}</span>
<span style="font-size:18px"><strong>Output:
</strong>0</span>
<span style="font-size:18px"><strong>Explanation:
</strong></span>   <span style="font-size:18px">1          1
 / \        /  \
2   3      2    3</span> 
<span style="font-size:18px">As we can clearly see, the second tree
isn't mirror image of the first.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>checkMirrorTree()</strong> which takes 2 Integers n, and e;&nbsp; and two arrays A[] and B[] of size 2*e as input and returns 1 if the trees are mirror images of each other and 0 if not.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(e)<br>
<strong>Expected Auxiliary Space:</strong> O(e)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 &lt;= n,e &lt;= 10<sup>5</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>Hike</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Queue</code>&nbsp;<code>Tree</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;