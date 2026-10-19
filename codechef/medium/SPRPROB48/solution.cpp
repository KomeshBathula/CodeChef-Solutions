package com.example.demo.controller;

import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/api/text")
public class TextController {

    // Convert text to uppercase
    @GetMapping("/uppercase")
    public String convertToUppercase(@RequestParam String text ) {

        // Write your code here

    }

    // Convert text to lowercase
    @GetMapping("/lowercase")
    public String convertToLowercase(@RequestParam String text ) {

        return text.toUpperCase();