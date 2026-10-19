# SPRB07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Tech Blog Platform Project

 **Hey Coders!**  Welcome to the  **Tech Blog Platform Project**  📝💻

In this project, you will build the  **Spring Boot Backend**  for a content publishing engine. This system acts as the backbone for a blogging site where creators can publish articles and readers can engage with them.

A blog isn't just a list of words; it's a web of relationships.  **Authors**  write  **Posts**, and  **Posts**  generate  **Comments**. Your system will use JPA Mappings to chain these entities together seamlessly.

Your  **task**  is to  **complete the missing backend logic**  to make this API fully functional.

 **Project Structure** 
You are given  **8 Java files**  representing a  **Layered Architecture** :

- Entities (The Data Model): Author.java → The Root entity. Represents the content creator. BlogPost.java → The Middle entity. Represents an article written by an Author. Comment.java → The Leaf entity. Represents reader feedback on a specific Post.
- Repositories (The Data Access Layer): AuthorRepository, BlogPostRepository & CommentRepository → Interfaces that handle saving and retrieving data for their respective entities.
- Service (The Business Logic): BlogService.java → Contains the logic to link posts to authors, comments to posts, and handle cascading deletions.
- Controller (The API Layer): BlogController.java → Handles web requests to publish posts, add comments, and fetch the feed.

 **Project Dependencies** 
To build this backend, your project is pre-configured with the following tools:

- Spring Web: For building RESTful API endpoints and handling HTTP requests.
- Spring Data JPA: For interacting with the database using Java objects instead of SQL.
- H2 Database: An in-memory database that stores your data while the app is running.
- Lombok: A library that automatically generates boilerplate code like Getters, Setters, and Constructors.

 **Important Rules** 

- Do NOT change class names
- Do NOT change method names
- Complete the sections marked with TODO
- The testing system relies on the existing structure

 **The Logic: ORM Relationships** 
This project focuses on  **Chained Relationships**  and  **Performance Tuning**.

- The Hierarchy: Author ➔ BlogPost ➔ Comment.
- Cascading:
- If you delete an Author, the system must delete all their Posts.
- If you delete a Post, the system must delete all its Comments.
- Fetch Types (Performance):
- LAZY: When loading an Author, don't load their 500 posts immediately (Too heavy!).
- EAGER: When loading a Comment, do load the Post info immediately (We need context!).

 **Database Access (H2 Console)** 
If you want to visually check your tables and run SQL queries manually:

- Run the file named consoleViewer.js and paste the CodeChef browser URL. For more details, refer to the project demonstration video.
- Command to run the file: node consoleViewer.js
- Copy the URL printed in the output.
- Paste it into your browser to access the H2 Console.
- Write this JDBC URL "jdbc:h2:mem:techblogdb" and click Connect to see your live data tables (for more details, check application.properties file).

 **Your Task:** 

- Complete the Entities
- File: entity/Author.java (The Root) Annotations: Mark this class as a JPA Entity. Primary Key: Configure the id field to be the Primary Key and set it to Auto-Increment using the IDENTITY strategy. Relationship: Define a list of blogPosts using One-to-Many. Challenge 1: Map it to the author field in the BlogPost class. Challenge 2: Configure cascade to ALL (Delete Author ➔ Delete Posts). Challenge 2: Set fetch to LAZY (Performance optimization). JSON Handling: Add the annotation to ignore this list during JSON conversion (Stop Infinite Loops). Getters & Setters: Generate these for all fields (manually or using Lombok annotations) so other classes can access the data.
- File: entity/BlogPost.java (The Connector) Annotations: Mark this class so that JPA recognizes it as a database table. Primary Key: Configure the id field as the Primary Key with Auto-Increment. Content Field: The default storage is too small (255 chars). Challenge: Add an annotation to set the column length to 5000 characters. Relationship 1 (Link to Author): Many Posts belong to One Author. Fetch: Set to EAGER (Load author name with post). Foreign Key: Name the column "author_id". Relationship 2 (Link to Comments): One Post has Many Comments. MappedBy: Point to the blogPost field in Comment. Cascade: Set to REMOVE (Delete Post ➔ Delete Comments). Fetch: Set to LAZY. Getters & Setters: Generate these for all fields (manually or using Lombok annotations) so other classes can access the data.
- File: entity/Comment.java (The Leaf) Annotations: Mark this class so that JPA recognizes it as a database table. Primary Key: Configure the id field as the Primary Key with Auto-Increment. Relationship (Link to Post): Many Comments belong to One Post. Fetch: Set to EAGER. Foreign Key: Name the column "blogpost_id". JSON Handling: Add annotation to ignore the blogPost field (Stop Infinite Loops). Getters & Setters: Generate these for all fields (manually or using Lombok annotations) so other classes can access the data. Docs: Guide to JPA Entities | Lombok @Getter & @Setter | @Id and @GeneratedValue | Guide to @OneToMany and @ManyToOne | Understanding the mappedBy Attribute | JPA Cascade Types | Using @JoinColumn for Foreign Keys | Handling Infinite Recursion with @JsonIgnore
- Configure the Repositories (Code Provided) File: AuthorRepository, BlogPostRepository, CommentRepository
- Interface: Define these as Interfaces (not classes).
- Inheritance: Extend the standard JpaRepository interface.
- Generics: Specify the Entity Type (e.g., Author) and ID Type (e.g., Long).
- Build the Service File: service/BlogService.java
- Annotation: Add the correct Spring annotation to mark this class as a Service.
- Dependency Injection: Define the 3 repositories as private final fields and initialize them via Constructor Injection.
- Logic - Create Post: Find the Author by ID (use.orElse(null) logic). If found, LINK the Post to the Author (Foreign Key). Save the Post. If not found, throw RuntimeException.
- Logic - Add Comment: Find the BlogPost by ID. If found, LINK the Comment to the Post. Save the Comment.
- Logic - Delete Post: Delete by ID (Cascade settings in Entity will handle the rest).
- Logic - Get All Posts: Return the full list using the repository. Docs: @Service Annotation | Constructor Dependency Injection | Spring Data CrudRepository Methods (save, findById)
- Define the API Endpoints File: controller/BlogController.java Class Configuration: Annotate the class to make it a REST Controller and define the base URL path as "/api". Dependency Injection: Inject the BlogService using the constructor. Endpoints: Create Author (POST /authors) Convert the JSON body to an Author object. Action: Call the service method to save the author and return the saved object. Create Post (POST /authors/{authorId}/posts) Capture authorId from the URL path. Capture post data from the Request Body. Action: Call the service method that links the post to the author. Add Comment (POST /posts/{postId}/comments) Capture postId from the URL path. Capture comment data from the Request Body. Action: Call the service method to add the comment. Get Feed (GET /posts) Action: Call the service method to get all posts and return the list. Delete Post (DELETE /posts/{postId}) Capture postId from the URL path. Action: Call the service to delete the post (and its comments via Cascade). Docs: @RestController Annotation | Building a RESTful Web Service | Overview of @GetMapping, @PostMapping, @DeleteMapping | Spring @PathVariable | @RequestBody Annotation

 **Expected Behaviour:** 
Before submitting the project, ensure the  **backend server is running**. If you make any changes to the code, you must  **restart the server**  for those changes to take effect.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T17:47:11.963Z  

```cpp
    }

    public BlogPost createPost(Long authorId, BlogPost post) {
        Author author = authorRepo.findById(authorId)
                .orElseThrow(() -> new RuntimeException("Author not found"));
        post.setAuthor(author);
        return postRepo.save(post);
    }

    public Comment addComment(Long postId, Comment comment) {
        BlogPost post = postRepo.findById(postId)
                .orElseThrow(() -> new RuntimeException("Post not found"));
        comment.setBlogPost(post);
        return commentRepo.save(comment);
    }

```

---

[View on CodeChef](https://www.codechef.com/problems/SPRB07)