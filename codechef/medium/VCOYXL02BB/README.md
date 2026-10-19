# VCOYXL02BB

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Run your first Spring Boot application
- Let’s run your first Spring Boot application that says “Hello, From Spring Boot!” in the browser.
- Don’t worry if you don’t understand all the code right now — we’ll explain terms like @SpringBootApplication, Controller, and main() later in the course.

 **How to Run the App** 

You have two options to run the project:

- Click the “Run” button (in your editor or provided interface)
- Or open the terminal and run:

```
cd ~/workspace/demo
mvn spring-boot:run

```

This will launch the application and you'll see  **“Hello, From Spring Boot!”**.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T08:21:44.786Z  

```cpp
package com.example.demo;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HelloController {

    @GetMapping("/") // handles GET request to root URL
    public String home() {
        return "Hello, From Spring Boot!";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/VCOYXL02BB)