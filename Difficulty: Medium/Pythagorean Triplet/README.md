<h2><a href="https://www.geeksforgeeks.org/problems/pythagorean-triplet3018/1?page=1&company=Amazon&status=unsolved&sortBy=submissions">Pythagorean Triplet</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr</strong> of <strong>n</strong> integers, write a function that returns true if there is a <strong>triplet (a, b, c)</strong> from the array (where a, b, and c are on different indexes) that satisfies <strong>a<sup>2</sup>&nbsp;+ b<sup>2</sup>&nbsp;= c<sup>2</sup></strong>, otherwise return false.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 5
Arr[] = {3, 2, 4, 6, 5}
<strong>Output:</strong> Yes
<strong>Explanation:</strong> a=3, b=4, and c=5 forms a
pythagorean triplet.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 3
Arr[] = {3, 8, 5}
<strong>Output:</strong> No
<strong>Explanation:</strong>&nbsp;No such triplet possible.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:<br></strong></span><span style="font-size: 18px;">You don't have to take any input or print any thing. You have to complete the function <strong>checkTriplet()</strong>&nbsp;which takes an array <strong>arr,</strong> a single integer&nbsp;<strong>n,</strong>&nbsp;as input parameters&nbsp;and returns <strong>boolean</strong> denoting answer to the problem.<br><strong>Note:</strong>&nbsp;The driver will print "<strong>Yes</strong>" or "<strong>No</strong>" instead of corresponding to the boolean value returned.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n+max(Arr[i])<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(max(Arr[i]))</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>1 &lt;= arr[i] &lt;= 1000</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;