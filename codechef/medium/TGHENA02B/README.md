# TGHENA02B

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Practice - Complete the Event API Controller

 **Scenario :** 
You are building a simple  **Event Management API**  using Spring Boot.

- The EventService and EventRepository layers are already implemented and working.
- The GET and POST endpoints in the EventController are already completed for you.

Your task is to  **complete the `EventController`**  by implementing the remaining CRUD functionality:  **PUT and DELETE**.

 **Instructions:** 

- Complete your code first.
- Click on "Run" to start the server and make sure it runs correctly.
- If you make any changes to the code after running, you must run the server again.
- Only after running the server with the latest changes, your submission will reflect the updated solution.
- Do not submit if the server is not running; otherwise, your solution will fail.

 **Controller Tasks :** 
You need to implement the following endpoints in EventController:
 **1. Update an event by ID** 

- Method: PUT -URL: /api/events/{id}
- Request Body: JSON with updated event data
- Response:

```
"Event updated successfully!" if ID exists

```

"Event not found!" if ID is invalid

 **2. Delete an event by ID** 

- Method: DELETE
- URL: /api/events/{id}
- Response:

```
"Event deleted successfully!" if ID exists

```

"Event not found!" if ID is invalid

- Delete all events
- Method: DELETE
- URL: /api/events
- Response:

```
"All events deleted successfully!"

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T16:50:19.126Z  

```cpp
    @DeleteMapping("/{id}")
    // URL: /api/events/{id}
    // Method: DELETE
    // 2️ Delete an event by ID


    }
        }
            return "Event not found!";
        } else {
            return "Event updated successfully!";
            eventService.updateEvent(id, event);
        if (id >= 0 || id < eventService.getEventCount()) {

                              @RequestBody Map<String, String> event) {
    public String updateEvent(@PathVariable int id,

    // 1️ Update an event by ID
    // Method: PUT
    // URL: /api/events/{id}
    @PutMapping("/{id}")
```

---

[View on CodeChef](https://www.codechef.com/problems/TGHENA02B)