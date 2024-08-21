<h2><a href="https://www.geeksforgeeks.org/problems/word-boggle-ii--141631/1?page=1&category=Graph&company=Amazon,Google&status=unsolved&sortBy=submissions">Open the gates</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Geek and his friends went on a trip to one of the hill stations in Geekland. While trekking they found a treasure map, it was in the form of <strong>r x c</strong> size board, each cell on the <strong>map</strong> denotes a latin uppercase letter. On the bottom of the map it was written that there are <strong>n gates</strong> with a specific name and if they could find out the name of the gate on the map that gate would open. Help Geek and his friends to find out the gates they could possibly open with the map they found.&nbsp;</span></p>
<p><span style="font-size: 14pt;">A name can be formed by a sequence of adjacent characters on the map. We can move to any of 8 adjacent characters. While forming a word we can move to any of the 8 adjacent cells. A cell can be used only once in one name.</span></p>
<p><span style="font-size: 14pt;">&nbsp;<strong>NOTE</strong>: All gate names returned must be different even it occurs multiple times in the input.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: 
</strong>n = 3
gate_names = {"ZARA", "ZETH", "MYTH"}
r = 3, c = 3
map = A Z E<br>       R Y T<br>       M A H
<strong>Output:</strong>
{"ZARA", "ZETH", "MYTH"}
<strong>Explanation</strong>: <br><span style="color: #e03e2d;"><span style="color: #000000;">Opening gate ZARA</span><br>A</span> <span style="color: #e03e2d;">Z</span> E<br><span style="color: #e03e2d;">R</span> Y T<br>M <span style="color: #e03e2d;">A</span> H<br>Opening gate ZETH<br>A <span style="color: #3598db;">Z</span> <span style="color: #3598db;">E</span><br>R Y <span style="color: #3598db;">T</span><br>M A <span style="color: #3598db;">H</span><br>Opening gate MYTH<br>A Z E<br>R <span style="color: #2dc26b;">Y</span> <span style="color: #2dc26b;">T</span><br><span style="color: #2dc26b;">M</span> A <span style="color: #2dc26b;">H</span>
</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong>
n = 5
gate_names = {"NYX","ONYX","VIRA","KARA", "NYX"}
r = 3, c = 3 
map = N O A<br>       P Y V<br>       K R X
<strong>Output:</strong>
{"NYX", "ONYX"}
<strong>Explanation</strong>: <br><span style="color: #000000;">Opening gate NYX<br><span style="color: #e03e2d;">N</span> O A<br>P <span style="color: #e03e2d;">Y</span> V<br>K R <span style="color: #e03e2d;">X</span><br>Opening gate ONYX<br><span style="color: #3598db;">N</span> <span style="color: #3598db;">O</span> A<br>P <span style="color: #3598db;">Y</span> V<br>K R <span style="color: #3598db;">X<br><strong><span style="color: #000000;">Note that NYX is counted only once.</span></strong></span></span></span></pre>
<p><span style="font-size: 14pt;"><strong>Your task:</strong><br>You don’t need to read input or print anything. Your task is to complete the function&nbsp;<strong>openGates()</strong> which takes the <strong>gate_names</strong> contaning <strong>n</strong> space-separated strings and <strong>r*c map</strong> as input parameters and returns a list of gate names that can be opened</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity: </strong>O(4^(N^2))<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N^2)</span></p>
<div><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ n ≤ 15<br>1 ≤ r, c ≤ 50<br>1 ≤ length of each gate name ≤ 60</span></div>
<div><span style="font-size: 14pt;">All words of gate_names and all characters of map are uppercase letters from <strong>'A'</strong> to <strong>'Z'</strong></span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Directi</code>&nbsp;<code>Google</code>&nbsp;<code>Facebook</code>&nbsp;<code>Yahoo</code>&nbsp;<code>Nvidia</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Trie</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;