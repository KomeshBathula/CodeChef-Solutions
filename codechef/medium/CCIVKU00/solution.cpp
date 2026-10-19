    // ---------------- GET ALL BOOKS ----------------
    // TODO: Create GET mapping to return all books
    @GetMapping
    public List<Book> getAllBooks() {

        // TODO: Return bookList
        return bookList;
    }

    // ---------------- GET BOOK BY ID ----------------
    // TODO: Create GET mapping with path variable
    @GetMapping("/{id}")
    public Book getBookById(@PathVariable int id) {

        // TODO: Loop through bookList
        // If book.id matches given id, return the book

        for (Book book : bookList) {
            if (book.id == id) {
                return book;
            }