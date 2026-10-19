# SPRPROB53

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Practice Problem - Support Ticket API

 **Instructions:** 

- Complete your code first.
- Click on "Run" to start the server and make sure it runs correctly.
- If you make any changes to the code after running, you must run the server again.
- Only after running the server with the latest changes, your submission will reflect the updated solution.
- Do not submit if the server is not running; otherwise, your solution will fail.

 **Goal:** 
The goal of this exercise is to practice creating a POST API using `@RequestBody` in Spring Boot.

 **Your Task:** 
Build a simple Support Ticket application. The application should allow clients (like frontend apps or Postman) to:

- Raise a new support ticket via POST API using @RequestBody to read JSON input.
- Fetch all tickets via GET API (for testing only).

Implement the  **POST API**  that will take a JSON object representing a  **Ticket**, read it using @RequestBody, and store it in an in-memory list.

 **Example JSON for POST request:** 

Select  **POST**  and add the  **JSON request** :

```
{
  "ticketTitle": "Cannot login",
  "description": "I am unable to login to my account"
}

```

 **After adding a ticket, the API should return a confirmation message like** :

```
"Ticket submitted successfully!"

```

 **For Testing** :
After sending your  **POST**  request, you can select  **GET**  and type  **`/tickets`**  in your API tester to check whether your tickets has been added successfully.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T11:11:45.043Z  

```cpp
package com.example.demo;

import org.springframework.web.bind.annotation.*;
import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/tickets")
public class TicketController {

    // In-memory list to store tickets
    private List<Ticket> ticketList = new ArrayList<>();

    // GET API - fetch all tickets
    @GetMapping
    public List<Ticket> getAllTickets() {
        return ticketList;
    }

    // POST API - raise a new ticket (starter template)
    @PostMapping
```

---

[View on CodeChef](https://www.codechef.com/problems/SPRPROB53)