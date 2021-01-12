<h1 class="gap">0x1E. C - Search Algorithms</h1>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/P7Fzn2q1H354zp1GTqfzqg" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a search algorithm</li>
<li>What is a linear search</li>
<li>What is a binary search</li>
<li>What is the best search algorithm to use depending on your needs</li>
</ul>

<h2 class="gap">Tasks</h2>

<h3 class="task">
    0. Linear search
</h3>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>Write a function that searches for a value in an array of integers using the <a href="/rltoken/60Mr-aRkqqgLCHEF9HZ64A" title="Linear search algorithm" target="_blank">Linear search algorithm</a></p>

<ul>
<li>Prototype : <code>int linear_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>

<pre><code>wilfried@0x1E-search_algorithms$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
</code></pre>

<h3 class="task">
    1. Binary search
</h3>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>Write a function that searches for a value in a sorted array of integers using the <a href="/rltoken/WyWx1D9mcUcAwpEA2ifkeQ" title="Binary search algorithm" target="_blank">Binary search algorithm</a></p>

<ul>
<li>Prototype : <code>int binary_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>You can assume that <code>value</code> won’t appear more than once in <code>array</code></li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)</li>
</ul>

<pre><code>wilfried@0x1E-search_algorithms$ cat 1-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary 
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
</code></pre>

<h3 class="task">
    2. Big O #0
</h3>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>What is the <code>time complexity</code> (worst case) of a linear search in an array of size <code>n</code>?</p>

<h3 class="task">
    3. Big O #1
</h3>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>What is the <code>space complexity</code> (worst case) of an iterative linear search algorithm in an array of size <code>n</code>?</p>

 <h3 class="task">
    4. Big O #2
  </h3>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>What is the <code>time complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>


  <h3 class="task">
    5. Big O #3
  </h3>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>What is the <code>space complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>

  <h3 class="task">
    6. Big O #4
  </h3>

  

  <!-- Progress vs Score -->

  <!-- Task Body -->
  <p>What is the space complexity of this function / algorithm?</p>

<pre><code>int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i &lt; n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
</code></pre>
