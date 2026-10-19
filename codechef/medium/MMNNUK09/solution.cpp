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