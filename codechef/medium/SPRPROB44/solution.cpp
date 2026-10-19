    }

    // Get all products
    @GetMapping
    public List<String> getAllProducts() {
        return products;
    }

    // Get product by ID
    @GetMapping("/{id}")
    public String getProductById(@PathVariable int id) {
        
        // Write your code here
        return products.get(id);
        
    }
}
