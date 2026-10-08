# TWOLMM16

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find Longest Comment Length

In this task, you need to read a text file and determine the length of the  **longest line**  (comment) in the file. The file `comments.txt` is already saved at the specified path.

 **Steps to Follow** 

- Read all lines from the file Use Files.readAllLines(Paths.get(filePath)) to read the entire file. This returns a List<String> where each element is one line from the file.
- Find the longest line Create a variable maxLength and initialize it to 0. Loop through the list of lines using a for loop. For each line, check its length using.length(). Update maxLength if the current line is longer than the current maxLength.
- Handle errors Wrap the file reading code in a try-catch block. If there’s an IOException, print an error message and return -1.

 **Expected Output:** 

```
15

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T11:34:16.046Z  

```cpp
    public static int findLongestComment(String filePath) {
        
        try {
            List<String> lines = Files.readAllLines(Paths.get(filePath));
        }

            int max = -1;
            for (int i = 0; i < lines.size(); i++) {
                max = Math.max(max, lines.get(i).length());
            }

            return max;

        catch (IOException e) {
            System.out.println("Error reading from file");
        }
            return -1;

// Class definition
public class Codechef {
    
    // Method to find length of longest comment
```

---

[View on CodeChef](https://www.codechef.com/problems/TWOLMM16)