# JQJTY01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Chef Calculates Subarray Minimums

Chef has an array of integers $inputArray$, and wants to find the  **sum of the minimum elements of all possible contiguous subarrays**  of this array.

Since the total number of subarrays can be very large and the resulting sum may exceed normal integer limits, Chef wants the final answer  **modulo $10^9 + 7$**.

Help Chef solve this problem efficiently for multiple test cases.

## Function Declaration
- Function Name $calculateSumOfSubarrayMinimums$
- Parameters $inputArray$: a list of integers representing Chef’s array
- Return Value An integer representing the sum of the minimum values of all contiguous subarrays of $inputArray$, taken modulo $10^9 + 7$
## Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 3 \times 10^4$
- $1 \leq inputArray[i] \leq 3 \times 10^4$
## Input Format
- The first line contains a single integer $T$ — the number of test cases.
- For each test case: The first line contains an integer $N$ — the size of the array. The second line contains $N$ space-separated integers representing $inputArray$.
## Output Format
- For each test case, print a single integer: the sum of the minimum elements of all contiguous subarrays of $inputArray$ modulo $10^9 + 7$.
### Sample 1:
Input
Output

```
3
3
1 3 2
4
8 7 6 5
1
10000
```

```
10
60
10000
```

### Explanation:

 **Test Case 1** 
Subarrays are: `[1]`, `[3]`, `[2]`, `[1,3]`, `[3,2]`, `[1,3,2]`
Minimums are: `1, 3, 2, 1, 2, 1`
Sum of minimums = `10`

 **Test Case 2** 

Subarrays are:
`[8]`, `[7]`, `[6]`, `[5]`,
`[8,7]`, `[7,6]`, `[6,5]`,
`[8,7,6]`, `[7,6,5]`,
`[8,7,6,5]`

Minimums are: `8, 7, 6, 5, 7, 6, 5, 6, 5, 5`
Sum of minimums = `60`

 **Test Case 3** 
Subarray is: `[10000]`
Minimum is: `10000`
Sum of minimums = `10000`

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-14T08:32:34.965Z  

```java
    public static int calculateSumOfSubarrayMinimums(int[] inputArray) {
        int sum = 0;
        int n = inputArray.length;
        
        for (int i = 0; i < n; i++) {
            int min = (int)1e9;
            for (int j = i; j < n; j++) {
                min = Math.min(min, inputArray[j]);
                sum += min;
            }
            
            
        }
        
        return sum;
    }
```

---

[View on CodeChef](https://www.codechef.com/problems/JQJTY01)