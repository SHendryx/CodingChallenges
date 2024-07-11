> # 36. Valid Sudoku [Medium]
>Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
>
>Each row must contain the digits 1-9 without repetition.  
>Each column must contain the digits 1-9 without repetition.  
>Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.  
>Note:  
>A Sudoku board (partially filled) could be valid but is not necessarily solvable.  
>Only the filled cells need to be validated according to the mentioned rules.  
>```
>Example 1:  
>Input: board =   
>[["5","3",".",".","7",".",".",".","."]  
>,["6",".",".","1","9","5",".",".","."]  
>,[".","9","8",".",".",".",".","6","."]  
>,["8",".",".",".","6",".",".",".","3"]  
>,["4",".",".","8",".","3",".",".","1"]  
>,["7",".",".",".","2",".",".",".","6"]  
>,[".","6",".",".",".",".","2","8","."]  
>,[".",".",".","4","1","9",".",".","5"]  
>,[".",".",".",".","8",".",".","7","9"]]
>Output: true  
>
>Example 2:  
>Input: board =  
>[["8","3",".",".","7",".",".",".","."]  
>,["6",".",".","1","9","5",".",".","."]  
>,[".","9","8",".",".",".",".","6","."]  
>,["8",".",".",".","6",".",".",".","3"]  
>,["4",".",".","8",".","3",".",".","1"]  
>,["7",".",".",".","2",".",".",".","6"]  
>,[".","6",".",".",".",".","2","8","."]  
>,[".",".",".","4","1","9",".",".","5"]  
>,[".",".",".",".","8",".",".","7","9"]]  
>Output: false
>```
>Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
>
> ## Solution:
> I first defined 3 hashsets or sets to hold the numbers found in each row, each column, and each 3x3 square on the board. Iterating through the board by row and column, and checking to see if the number at that location already exists in any of the sets allows us to determine if the board is valid.
>
> #### C++ Solution: [36_Valid_Sudoku.cpp](/c++/36_Valid_Sudoku.cpp)
> #### Python Solution: [36_Valid_Sudoku.py](/python/36_Valid_Sudoku.py)
>
> ## Time Complexity:
> Time complexity should be O(n), n being the size of the board.
> ## Space Complexity:
> Space complexity is O(n).