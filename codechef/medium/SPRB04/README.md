# SPRB04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mars Rover Navigator Project

 **Hey Learners!**  Welcome to the  **Mars Rover Navigator Project**  🪐🤖

In this project, you will build the  **backend logic**  for a navigation system that guides a rover across the surface of Mars. The rover moves on a grid, and your code will determine where it ends up based on a series of commands.

 **Precision is key!**  We need to ensure the rover stays within its exploration zone and doesn't drive off the map. Your system will track  **Coordinates (X, Y)**  and  **Direction (N, E, S, W)**.

Your  **task**  is to  **complete the missing backend logic**  to make this navigation system fully functional.

 **Project Structure** 
You are given  **3 Java files**  representing a  **Layered Architecture** :

- Rover.java → Model: A simple object (POJO) that holds the state (Position X, Position Y, and Direction).
- RoverService.java → Service (Business Logic): The "Brain" that calculates turns, movement, and checks boundaries.
- RoverController.java → Controller (API Endpoints): The "Doorway" that listens for web requests and talks to the service.

 **Important Rules** 

- Do NOT change class names
- Do NOT change method names
- Complete the sections marked with TODO
- The testing system relies on the existing structure

 **The Logic: Navigation & Grid** 
This project uses a  **2D Cartesian Grid**  (10x10).

- The Grid: Coordinates range from 0 to 9.
- Starting Point: The rover always starts at (0, 0) (Bottom-Left corner).
- Default Direction: North ("N").
- Turning
- Left ('L'): Rotates the rover 90 degrees Counter-Clockwise (e.g., North → West).
- Right ('R'): Rotates the rover 90 degrees Clockwise (e.g., North → East).
- Moving ('F') Moves the rover one step forward in the direction it is currently facing.
- North: Increases Y (moves up).
- South: Decreases Y (moves down).
- East: Increases X (moves right).
- West: Decreases X (moves left).
- Safety Boundaries The exploration zone is limited! The rover cannot move to a coordinate less than 0 or greater than 9. If a command tries to push it off the edge, the rover must ignore that move and stay put.

 **Your Task:** 

- Complete the Model File: model/Rover.java This class represents the "body" of the rover. It remembers where it is. Constructor: Initialize the x, y, and direction fields. The default constructor should set them to 0, 0, and "N". Getters & Setters: Implement the methods to allow other classes to read and modify these values. Docs: Anatomy of a Java Class
- Connect the Service (The Brain) File: service/RoverService.java This is where the magic happens. Annotation: Add the correct Spring annotation to mark this class as a Service. Initialization: Instantiate the rover object in the constructor so it is ready to use. Command Processing: Implement the processCommands(String commands) method This method should take a string of characters (e.g., "FFR"). Loop through each character and call the corresponding logic method (turnLeft, turnRight, or moveForward). Ignore any characters that are not 'F', 'L', or 'R'. Reset Logic: Implement the resetRover() method to snap the rover back to (0, 0) facing "N". Turning Logic: Complete the switch statements in turnLeft() and turnRight(). Hint: If you are facing North and turn Left, you are now facing West. Movement Logic: Complete the moveForward() method. Check the Boundary Condition first! Only update the coordinate if the new position is valid (between 0 and 9). Docs: @Service Annotation | Java Switch Statements
- Define the API Endpoints (The Controller Layer) File: controller/RoverController.java This class receives commands from the outside world (the frontend).
- Class Configuration: Annotate the class to make it a REST Controller and define the base URL path as "/api".
- Dependency Injection: Ensure the RoverService is correctly assigned in the constructor.
- Endpoint 1: Get Status Goal: Retrieve the current coordinates and direction of the rover without moving it. HTTP Method: Use GET because we are just reading data. Path: Map this to "/status" (Combined URL: /api/status). Logic: The Controller doesn't store data itself. Ask your Service layer to provide the current Rover object it is holding. Return: The Rover object obtained from the service. Spring will automatically format it as JSON.
- Endpoint 2: Move Rover Goal: Accept a string of commands (e.g., "FFR") and execute them. HTTP Method: Use POST (since we are modifying the state). Path: Map this to "/move". Input: The commands come in as a query parameter (e.g., ?commands=FF). Hint: Use the @RequestParam annotation to capture this string. Logic: The Controller is just a messenger. Pass the captured command string to the Service layer method responsible for processing movement logic. Return: The updated Rover object returned by the service.
- Endpoint 3: Reset Goal: Send the rover back to the starting position (0,0). HTTP Method: Use POST (since this is an action). Path: Map this to "/reset". Logic: Trigger the method in your Service layer designed to restore the rover to its default starting coordinates and direction. Return: The Rover object, which should now reflect the starting position. Docs: @RestController Annotation | @GetMapping & @PostMapping | Spring @RequestParam

 **Expected Behaviour:**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T17:22:09.350Z  

```cpp
    // Logic Methods:
    private void turnLeft() {
        switch (rover.getDirection()) {
        return rover;
    }

    // Reset rover to starting position
    public Rover resetRover() {
        rover.setX(0);
        rover.setY(0);
        rover.setDirection("N");
    public Rover getRoverStatus() {
        return rover;
    }
    
        }
        return rover;
    }

                moveForward();
            }
```

---

[View on CodeChef](https://www.codechef.com/problems/SPRB04)