# SPRPROB31

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Practice Problem - Create Fruit API

 **Instructions:** 

- Complete your code first.
- Click on "Run" to start the server and make sure it runs correctly.
- If you make any changes to the code after running, you must run the server again.
- Only after running the server with the latest changes, your submission will reflect the updated solution.
- Do not submit if the server is not running; otherwise, your solution will fail.

 **Goal**  :
Create a simple Spring Boot GET API to provide information about fruits. You will practice creating endpoints that return single objects and lists of objects as JSON.

 **Your Task :** 

- Create an endpoint to return Apple
- URL: /api/fruits/apple

 **Expected Output:** 

```
{
  "name": "Apple",
  "taste": "Sweet"
}

```

- Create an endpoint to return Banana
- URL: /api/fruits/banana

 **Expected Output:** 

```
{
  "name": "Banana",
  "taste": "Sweet"
}

```

- Create an endpoint to return Lemon
- URL: /api/fruits/lemon

 **Expected Output:** 

```
{
  "name": "Lemon",
  "taste": "Sour"
}

```

- Create an endpoint to return all fruits
- URL: /api/fruits/all

 **Expected Output:** 

```
[
  { "name": "Apple", "taste": "Sweet" },
  { "name": "Banana", "taste": "Sweet" },
  { "name": "Lemon", "taste": "Sour" }
]

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T09:54:12.757Z  

```cpp

    // GET /api/fruits/banana
    @GetMapping("/banana")
    public Fruit getBanana() {
        return new Fruit("Banana", "Sweet");
    }
    }
        return new Fruit("Apple", "Sweet");
    @GetMapping("/apple")
    public Fruit getApple() {
public class FruitController {

    // GET /api/fruits/apple

@RestController
@RequestMapping("/api/fruits")

import org.springframework.web.bind.annotation.*;
import java.util.List;
import java.util.Arrays;
package com.example.demo.controller;
```

---

[View on CodeChef](https://www.codechef.com/problems/SPRPROB31)