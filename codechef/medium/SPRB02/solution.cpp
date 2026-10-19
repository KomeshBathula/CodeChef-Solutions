    public UrlController(UrlService urlService) {
        this.urlService = urlService;
    }

    // POST: Create Short URL
    @PostMapping("/api/shorten")

    // Constructor Injection
    public ResponseEntity<Map<String, String>> shortenUrl(@RequestBody UrlRequest request) {

        // Generate Short Code
        String shortCode = urlService.shortenUrl(request.getOriginalUrl());
        
        // Return the short code in the response body as JSON
        // Returning JSON: { "shortCode": "5d4140" }
        return ResponseEntity.ok(Collections.singletonMap("shortCode", shortCode));
    }

    // GET: Redirect to Original URL
    @GetMapping("/{shortCode}")
    public ResponseEntity<Void> redirectToOriginal(@PathVariable String shortCode) {