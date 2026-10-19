# SPRB08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Flight Booking Engine Project

 **Hello Developers!**  Welcome to the  **Flight Booking Engine Project**  ✈️🌍

In this project, you will build a  **Spring Boot Backend**  for an airline reservation system.
A booking system isn't just about saving data, it's about  **Integrity**. When a user books a ticket, two things must happen:

- The seat count must decrease.
- The payment must be processed.

What happens if the seat is taken, but the payment fails immediately after? Does the airline lose a seat for free?
Your task is to implement  **Transaction Management**  to ensure that these two steps happen together (Commit) or not at all (Rollback).

 **Project Structure** 
You are given  **6 Java files**  representing a  **Layered Architecture** :

- Entities (The Data Model): Flight.java → Represents the aircraft and available inventory (seats). PaymentInfo.java → Represents the financial transaction details.
- Repositories (The Data Access Layer): FlightRepository & PaymentRepository → Interfaces that handle database operations.
- Service (The Business Logic): BookingService.java → Contains the logic to deduct seats and validate payments atomically.
- Controller (The API Layer): FlightController.java → Handles web requests to check seat status and book tickets.

 **Project Dependencies** 
To build this backend, your project is pre-configured with the following tools:

- Spring Web: For building RESTful API endpoints and handling HTTP requests.
- Spring Data JPA: For interacting with the database using Java objects instead of SQL.
- H2 Database: An in-memory database that stores your data while the app is running.
- Lombok: A library that automatically generates boilerplate code like Getters, Setters, and Constructors.

 **Important Rules** 

- Do NOT change class names
- Do NOT change method names
- Complete the sections marked with TODO
- The testing system relies on the existing structure

 **The Logic: Transactions & Rollback** 
This project focuses on  **Atomicity**.

- Rule: A Flight Booking is considered "Complete" only if BOTH the seat is deducted AND the payment is saved.
- Fail Scenario: If a user tries to pay more than $500 (Backend Limit), the system throws an exception.
- Requirement: If the exception occurs, the system must Undo (Rollback) the seat deduction automatically.

 **Database Access (H2 Console)** 
If you want to visually check your tables and run SQL queries manually:

- Run the file named consoleViewer.js and paste the CodeChef browser URL. For more details, refer to the project demonstration video.
- Command to run the file: node consoleViewer.js
- Copy the URL printed in the output.
- Paste it into your browser to access the H2 Console.
- Write this JDBC URL "jdbc:h2:mem:flightdb" and click Connect to see your live data tables (for more details, check application.properties file).

 **Pre-Loaded Data (`data.sql`)** 
To help you test immediately, we have pre-loaded the database with one flight using the `resources/data.sql` file:

- Flight ID: 1, Flight Number: CC-101, Destination: Bengaluru, Available Seats: 10.
- You can use this existing flight (ID 1) to test your booking and rollback logic.

 **Your Task:** 

- Complete the Entities
- File: entity/Flight.java Annotations: Mark this class as a JPA Entity. Primary Key: Configure the id field to be the Primary Key and set it to Auto-Increment using the IDENTITY strategy. Constructors: Implement the All-Args constructor. Getters & Setters: Generate these for all fields (manually or using Lombok annotations) so other classes can access the data.
- File: entity/PaymentInfo.java Annotations: Mark this class so that JPA recognizes it as a database table. Primary Key: Configure the id field as the Primary Key with Auto-Increment. Constructors: Implement the All-Args constructor. Getters & Setters: Generate these for all fields (manually or using Lombok annotations) so other classes can access the data. Docs: Guide to JPA Entities | Lombok @Getter & @Setter | @Id and @GeneratedValue
- Configure the Repositories File: repository/FlightRepository.java & repository/PaymentRepository.java These interfaces are your direct line to the database.
- Annotation: Add the correct Spring annotation to mark these interfaces as a Repository.
- Inheritance: Extend the standard JpaRepository interface.
- Generics: You must specify two things for each repository: The Entity Type it manages (e.g., Flight). The Data Type of that Entity's Primary Key. Docs: @Repository Annotation | Introduction to Spring Data JPA Repositories | JpaRepository Interface | Java Generics (The <T, ID> syntax)
- Build the Service File: service/BookingService.java
- Annotation: Add the correct Spring annotation to mark this class as a Service.
- Dependency Injection: Define the 2 repositories as private final fields and initialize them via Constructor Injection.
- Transaction: Apply the correct annotation to the bookFlight method to enable Atomic behaviour.
- Logic Flow: Use the flightId from the payment info to look up the flight. If the flight does not exist in the database, the process must stop immediately with an error. Verify that the flight actually has seats available. You cannot book a seat on a full flight. If valid, decrease the flight's availableSeats count by 1 and update the database. Apply the business rule: Any payment amount greater than 500 is invalid. If this condition is met, throw a RuntimeException. This exception is the trigger that tests if your Rollback logic is working. If the payment is within limits, save the PaymentInfo to the database. Docs: @Service Annotation | Understanding @Transactional | Rolling Back Transactions | Constructor Dependency Injection | Spring Data CrudRepository Methods (save, findById) | Java Optional Class
- Define the API Endpoints File: controller/FlightController.java Class Configuration: Annotate the class to make it a REST Controller and define the base URL path as "/api". Dependency Injection: Inject the BookingService using the constructor. Endpoint 1: Get Flight (GET /api/{id}) Retrieve the flight details using the provided ID. Return the Flight object if found, otherwise return an error. Endpoint 2: Book Flight (POST /api/book) Receive the PaymentInfo JSON and pass it to the service. If the service completes successfully, return a standard 200 OK response. If the transaction fails (due to the Payment Limit exception), you must catch that failure and return a 500 Internal Server Error to the client. Docs: @RestController Annotation | Building a RESTful Web Service | Overview of @GetMapping, @PostMapping, @DeleteMapping | Spring @PathVariable | @RequestBody Annotation

 **Expected Behaviour:** 
Before submitting the project, ensure the  **backend server is running**. If you make any changes to the code, you must  **restart the server**  for those changes to take effect.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T17:49:29.475Z  

```cpp
    private final PaymentRepository paymentRepository;

import java.util.Optional;

@Service
public class BookingService {

    private final FlightRepository flightRepository;
import com.example.demo.entity.Flight;
import com.example.demo.entity.PaymentInfo;
import com.example.demo.repository.FlightRepository;
import com.example.demo.repository.PaymentRepository;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;
package com.example.demo.service;

```

---

[View on CodeChef](https://www.codechef.com/problems/SPRB08)