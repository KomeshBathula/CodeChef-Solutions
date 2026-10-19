# MMNNUK09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Practice - Product API using ResponseEntity

Create a Product API similar to the Book API.

 **Instructions:** 

- Complete your code first.
- Click on "Run" to start the server and make sure it runs correctly.
- If you make any changes to the code after running, you must run the server again.
- Only after running the server with the latest changes, your submission will reflect the updated solution.
- Do not submit if the server is not running; otherwise, your solution will fail.

 **Requirements** 
Implement the following APIs using `ResponseEntity`.

 **1. Add Product** 

```
POST /product

```

- Input: Product JSON
- Return: Status → 201 CREATED Body → saved product

 **2. Get All Products** 

```
GET /products

```

 **Return:** 

- Status → 200 OK
- Body → list of products

 **3. Get Product By ID** 

```
GET /product/{id}

```

If product exists:

- Status → 200 OK
- Body → product

If not exists:

- Status → 404 NOT FOUND
- Body → empty

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T17:57:45.566Z  

```cpp
        }

    // READ BY ID
    @GetMapping("/product/{id}")
    public ResponseEntity<Product> getProductById(@PathVariable int id) {

        Product product = service.getProductById(id);

        if (product == null) {
            return ResponseEntity.notFound().build();
        return ResponseEntity.ok(product);

    }
        return ResponseEntity.ok(service.getAllProducts());
    public ResponseEntity<List<Product>> getAllProducts() {
    // READ ALL
    @GetMapping("/products")
```

---

[View on CodeChef](https://www.codechef.com/problems/MMNNUK09)