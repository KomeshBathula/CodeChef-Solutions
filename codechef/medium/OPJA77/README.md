# OPJA77

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-25T04:39:46.433Z  

```java
class Car {
    public String carName;

    // Parameterized constructor
    public Car(String carName) {
        this.carName = carName;
    }

    // Copy constructor (constructor that takes an object of the same class)
    public Car(Car c) {
        this.carName = c.carName;
    }
}

class Codechef {
    public static void main(String[] args) {
        Car originalCar = new Car("Beat"); // Parameterized constructor called here
        System.out.println(originalCar.carName);

        Car copiedCar = new Car(originalCar); // Copy constructor called here
        System.out.println(copiedCar.carName);
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA77)