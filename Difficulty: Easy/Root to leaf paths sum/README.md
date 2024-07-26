<h2><a href="https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1?page=3&category=Tree&company=Microsoft&sortBy=submissions">Root to leaf paths sum</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree of N nodes, where every node value is a number. Find the sum of all the numbers that are formed from root to leaf paths. The formation of the numbers would be like 10*parent + current (see the examples for more clarification).</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input :      </strong>
           6                               
         /   \                          
        3     5                      
      /   \     \
     2    5      4             
        /  \                        
       7    4  </span>

<span style="font-size: 18px;"><strong>Output:</strong> 13997</span>

<span style="font-size: 18px;"><strong>Explanation :</strong>
There are 4 leaves, hence 4 root to leaf paths:
Path                      Number
6-&gt;3-&gt;2                   632
6-&gt;3-&gt;5-&gt;7                6357
6-&gt;3-&gt;5-&gt;4                6354
6-&gt;5&gt;4                    654   
Answer = 632 + 6357 + 6354 + 654 = 13997 </span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input :    </strong>
           10                               
         /   \                          
        20     30                      
      /   \     
     40       60    </span>

<span style="font-size: 18px;"><strong>Output :</strong>  2630</span>

<span style="font-size: 18px;"><strong>Explanation:</strong>
Path                      Number
10-&gt;20-&gt;40                1240
10-&gt;20-&gt;60                1260
10-&gt;30                    130
1240+1260+130 = 2630</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task: &nbsp;</strong><br>You don't need to read input or print anything. Complete the function <strong>treePathsSum()</strong> which takes the root node as input parameter and returns the sum of all the numbers formed by the root to leaf paths in the given Binary Tree.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(N)<br><strong>Expected Auxiliary Space: </strong>O(Height of Tree)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 12</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;