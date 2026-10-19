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
