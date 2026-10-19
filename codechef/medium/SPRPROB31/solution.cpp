
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