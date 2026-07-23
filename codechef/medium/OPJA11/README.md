# OPJA11

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-23T09:02:15.672Z  

```java
class Student {
    public String name;
    public int score;
    public int age;

    public void eligible() {
        // Update your code below this line
        if (score > 10) 
            System.out.println("YES");
        else 
            System.out.println("NO");
    }
}

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Student obj = new Student();
        obj.name = "Tom";
        obj.score = 15;
        obj.age = 21;
        obj.eligible();
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA11)