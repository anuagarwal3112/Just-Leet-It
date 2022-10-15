# String comparison
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">In a native language, the increasing order of priority of characters is a, b, c, d, e, f, g, h, i, j, k, l, m, n, ’ng’, o, p, q, r, s, t, u, v, w, x, y, z. You are given two strings s1 and s2 and your task is to&nbsp;compare them on the basis of the given priority order. </span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Function must return <strong>0</strong> if both the strings are equal, <strong>1</strong> if s1 is greater than s2, and <strong>-1</strong> if s1 is lesser than s2. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> s1 = "adding", s2 = "addio"</span>
<span style="font-size:18px"><strong>Output:</strong> -1
<strong>Explanation:</strong> 'o' has greater priority 
than 'ng'</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> s1 = "abcng", s2 = "abcno"</span>
<span style="font-size:18px"><strong>Output:</strong> 1
<strong>Explanation:</strong> 'ng' has greater priority 
than 'n'</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>stringComparsion()</strong>&nbsp;which takes the two strings<strong> </strong>as input and returns the integer value.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(|s1 + s2|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ |s1|, |s2| ≤ 10<sup>5</sup></span><br>
<span style="font-size:18px">The string contains lower case English alphabets</span></p>

</div>