># 875. Koko Eating Bananas [Medium]
>Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
>
>Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
>
>Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
>
>Return the minimum integer k such that she can eat all the bananas within h hours.
>
>Example 1:  
>Input: piles = [3,6,7,11], h = 8  
>Output: 4  
>
>Example 2:  
>Input: piles = [30,11,23,4,20], h = 5  
>Output: 30  
>
>Example 3:  
>Input: piles = [30,11,23,4,20], h = 6  
>Output: 23  
> 
>Constraints:  
>1 <= piles.length <= 104  
>piles.length <= h <= 109  
>1 <= piles[i] <= 109  
>
>## Solution:
>Using the binary search algorithm, we can set the slowest rate to be 1, and the highest rate to be the largest number of bananas in a pile. It's possible to refine the highest rate a little bit by calculating the number of hours it'd take if we assumed every pile was equal to the largest pile, also. We then pick a rate in between those values and determine if we are eating the bananas faster or slower than the number of hours the guard will be gone. We shift the slowest or highest rate depending on if we're slower or faster. We then recalculate a middle rate, and continue until the slowest rate is higher than the highest. We should be left with the slowest rate possible at the end.
>
>#### Python Solution: [875_Koko_Eating_Bananas.py](/python/875_Koko_Eating_Bananas.py)
>#### C++ Solution: [875_Koko_Eating_Bananas.cpp](/c++/875_Koko_Eating_Bananas.cpp)
>
>## Time Complexity:
>Time complexity is O(n log m).
>
>## Space Complexity:
>Space complexity is O(1).