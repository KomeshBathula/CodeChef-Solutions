# TWOLMM15

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Read Cities File

In this task, you need to read the content of a file and print it line by line using Java. The file `cities.txt` is already saved at the specified location.

 **File Path:** 
You can use either of the below paths:

- /home/chef/workspace/cities.txt
- cities.txt

 **Tasks:** 

- Inside the try block of readFile() method, complete the line.
- Print Each Line Using a Traditional For Loop.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T11:26:03.195Z  

```cpp

// Class definition
public class Codechef {
    
    // Method to read and print the contents of a file
    public static void readFile(String filePath) {
        try {
            // Read all lines from the file into an ArrayList
            ArrayList<String> lines = new ArrayList<>(Files.readAllLines(Paths.get(filePath)));

            // Print each line using a traditional for loop
            for (int i = 0; i < lines.size(); i++) {
                // Complete this line to print each line
            }

        } catch (IOException e) {
            // Handling file-related exceptions
            System.out.println("Error reading file: " + e.getMessage());
        }
    }
                System.out.println(lines.get(i));
```

---

[View on CodeChef](https://www.codechef.com/problems/TWOLMM15)