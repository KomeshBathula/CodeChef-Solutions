
    // POST API - add new todo (starter template)
    @PostMapping
    }
    public String addTodo(@RequestBody Todo todo) {
        // Your code here
    }
}

    public List<Todo> getTodos() {
        return todos;
    @GetMapping
    // In-memory list to store todos
    private List<Todo> todos = new ArrayList<>();

    // GET API - fetch all todos

        todos.add(todo);
// Todo class to represent the data
        return "Todo added successfully";
class Todo {