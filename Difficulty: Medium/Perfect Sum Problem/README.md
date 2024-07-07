<h2><a href="https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?page=1&company=Microsoft&difficulty=Medium,Hard&status=unsolved&sortBy=submissions">Perfect Sum Problem</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr </strong>of size<strong> n</strong>&nbsp;of non-negative integers and an integer <strong>sum</strong>, the task is to count&nbsp;all subsets of the given array with a sum equal to a given <strong>sum</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> Answer can be very large, so, output answer modulo <strong>10<sup>9</sup>+7</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: <br>n = 6, arr = [5, 2, 3, 10, 6, 8], sum = 10
<strong>Output:</strong> <br>3</span>
<span style="font-size: 18px;"><strong>Explanation</strong>: <br>{5, 2, 3}, {2, 8}, {10} are possible subsets.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: <br>n = 5, arr = [2, 5, 1, 4, 3], sum = 10
<strong>Output:</strong> <br>3</span>
<span style="font-size: 18px;"><strong>Explanation</strong>: <br>{2, 1, 4, 3}, {5, 1, 4}, {2, 5, 3} are possible subsets.</span></pre>
<div><span style="font-size: 18px;"><strong><br>Expected Time Complexity:</strong> O(n*sum)<br><strong>Expected Auxiliary Space:</strong> O(n*sum)<br><strong><br>Constraints:</strong><br>1 ≤ n*sum ≤ 10<sup>6</sup></span></div>
<div><span style="font-size: 18px;">0 ≤ arr[i] ≤&nbsp;10<sup>6</sup></span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Tesco</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;