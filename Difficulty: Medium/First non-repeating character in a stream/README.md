<h2><a href="https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1?page=1&company=Amazon,Google&difficulty=Easy,Medium&status=unsolved&sortBy=submissions">First non-repeating character in a stream</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an input stream <strong>A </strong>of <strong>n</strong> characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.</span></p>
<p><strong>NOTE:<br></strong>1. You need to find the answer for every i (0 &lt;= i &lt; n)<br>2. In order to find the solution for every i you need to consider the string from starting position till ith position.<strong><br></strong>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>A = "aabc"
<strong>Output: </strong>"a#bb"
<strong>Explanation: </strong>For every ith character we will<br>consider the string from index 0 till index i first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - there are two non repeating characters 'b' and 'c', <br></span><span style="font-size: 18px;">first non-repeating character is 'b' because 'b' comes before<br>'c' in the stream.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>A = "zz"
<strong>Output: </strong>"z#"
<strong>Explanation: </strong>For every character first non
repeating character is as follow-
"z" - first non-repeating character is 'z'
"zz" - no non-repeating character so '#'</span>
</pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>FirstNonRepeating()&nbsp;</strong>which takes A as input parameter and returns a string after processing the input stream.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br><strong>Expected Space Complexity:&nbsp;</strong>O(n)</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>FactSet</code>&nbsp;<code>Payu</code>&nbsp;<code>Adobe</code>&nbsp;<code>Yahoo</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Queue</code>&nbsp;<code>Data Structures</code>&nbsp;