# SPRB03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Encryption Terminal Project

 **Hey Innovators!**  Welcome to  **Project 1: Encryption Terminal**  🔒🕵️‍♂️

In this project, you will build a  **Spring Boot Backend**  that acts as a digital coding machine. It converts readable text into secret codes and back again.
 **Data security is important!**  Chef needs a secure way to transmit messages so that no one else can read them. Your system will use a classic  **Caesar Cipher**  algorithm to "shift" letters.

Your  **task**  is to  **complete the missing backend logic**  to make this terminal fully functional.

 **Project Structure** 
You are given  **3 Java files**  representing a  **Layered Architecture** :

- EncryptionResponse.java → Model (Data Transfer Object) that structures the JSON output.
- EncryptionService.java → Service (Business Logic) that handles the math and string manipulation.
- EncryptionController.java → Controller (API Endpoints) that handles web requests.

 **Important Rules** 

- Do NOT change class names
- Do NOT change method names
- Complete the sections marked with TODO
- The testing system relies on the existing structure

 **The Logic: Caesar Cipher** 
This project uses a simple substitution method called the  **Caesar Cipher**.

- The Key: We use a SHIFT of 5.
- Encryption: Every letter moves forward by 5 spots in the alphabet (e.g., A becomes F).
- Decryption: Every letter moves backward by 5 spots to reveal the original message.
- Wrap-Around: If you shift past 'Z', you go back to 'A'. This is done using Modulo Arithmetic (%).

 **Your Task:** 

- Complete the Model File: model/EncryptionResponse.java This class acts as the "box" that holds the answer we send back to the user. Constructor: Assign the incoming parameters (originalText, transformedText, operation) to the class fields. Getters: Implement the methods to return the private field values so the system can convert them to JSON. Docs: Anatomy of a Java Class
- Connect the Service (The Brain) File: service/EncryptionService.java This is where the actual scrambling happens. Annotation: Add the correct Spring annotation to mark this class as a Service. Process Method (The Loop): Loop: Convert the text to a char array and iterate through it. Base Logic: Determine if the letter is Lowercase ('a') or Uppercase ('A') to select the correct base ASCII value (97 for 'a', 65 for 'A') needed to normalize the 0-25 index. The Math: Apply the cipher formula using the base you just identified: ((character - base + shift) % 26) + base Non-Letters: In the else block (numbers, spaces, symbols), do NOT change the character. Append it directly to the result. Encrypt/Decrypt Methods: Call the private process() helper method, passing the correct shift value. Hint for Decrypt: call the process() function with the input text. For the second argument, you must reverse the shift using this formula: 26 - (SHIFT % 26). Docs: @Service Annotation | Java StringBuilder | ASCII Table
- Define the API Endpoints (The Controller Layer) File: controller/EncryptionController.java This class listens for requests from the outside world.
- Class Configuration: Ensure this class is recognized as a REST Controller and handles requests starting with the base path "/api".
- Dependency Injection: Ensure the EncryptionService is correctly initialized via the constructor so the controller can use it.
- Endpoint 1: Encrypt a Message Goal: Create an endpoint that allows users to send plain text and receive the scrambled code. Mapping: This method should handle GET requests at the path "/encrypt". Input: The method expects a value to be passed in the URL query string (e.g., ?message=Hello). Use the appropriate Spring annotation to bind this parameter to a String variable. Logic: Pass the captured input to your service layer to generate the encrypted text. Response: Create and return a new instance of your EncryptionResponse model. Ensure the operation type is set to "encryption".
- Endpoint 2: Decrypt a Message Goal: Create an endpoint that allows users to reverse the process and recover their original text. Mapping: This method should handle GET requests at the path "/decrypt". Input: Similar to the encryption endpoint, capture the message parameter from the URL. Logic: Pass the captured input to your service layer to retrieve the original text. Response: Create and return a new instance of your EncryptionResponse model. Ensure the operation type is set to "decryption". Docs: @RestController Annotation | Building a RESTful Web Service | Spring @RequestParam | Mapping Requests

 **Expected Behaviour:**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T17:19:12.745Z  

```cpp
    private String process(String text, int shift) {
        StringBuilder result = new StringBuilder();
        for (char character : text.toCharArray()) {
    public String decrypt(String text) {
        return process(text, 26 - (SHIFT % 26));
    }

package com.example.demo.service;

import org.springframework.stereotype.Service;

@Service
public class EncryptionService {

    // Secret key for scrambling
    private static final int SHIFT = 5;

    public String encrypt(String text) {
        return process(text, SHIFT);
    }

```

---

[View on CodeChef](https://www.codechef.com/problems/SPRB03)