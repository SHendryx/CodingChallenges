># 74. Search a 2D Matrix [Medium]
>You are given an m x n integer matrix matrix with the following two properties:
>Each row is sorted in non-decreasing order.
>The first integer of each row is greater than the last integer of the previous row.
>Given an integer target, return true if target is in matrix or false otherwise.
>
>You must write a solution in O(log(m * n)) time complexity.
>
>Example 1:  
>![image](/images/mat.jpg)  
>Input: ```matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3```  
>Output: ```true```  
>
>Example 2:  
>![image](/images/mat2.jpg)  
>Input: ```matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13```  
>Output: ```false```  
> 
>Constraints:  
>m == matrix.length  
>n == matrix[i].length  
>1 <= m, n <= 100  
>-104 <= matrix[i][j], target <= 104  
>
>## Solution:
>The solution is basically the same as [704_Binary_Search](/markdown/704_Binary_Search.md), except that in this case we have to convert our middle number into an 2D array of rows and collumns. We determine the number of cols in the 2D array from ```len(matrix[0])```. The collumns are calculated by ```n % cols```, and rows are calculated by ```n // cols```.
>
>Another solution I was thinking of trying was by using a binary search method on the rows, and determining which row the target number should be in. Then using a binary search on that row of values. I had difficulty figuring out how to determine when I've found the row. It probably could be determined by using a binary search and once the start and end are equal, we have found the row. I haven't implemented it, however.
>
>#### Python Solution: [74_Search_A_2D_Matrix.py](/python/74_Search_A_2D_Matrix.py)
>#### C++ Solution: [74_Search_A_2D_Matrix.cpp](/c++/74_Search_A_2D_Matrix.cpp)
>
>## Time Complexity:
>Time complexity is O(log(m*n)).
>
>## Space Complexity:
>Space complexity is O(1).