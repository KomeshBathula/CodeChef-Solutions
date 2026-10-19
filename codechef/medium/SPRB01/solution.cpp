    // TODO: Add the annotation to map DELETE requests with an {id} parameter
    @DeleteMapping("/{id}")
    public String deleteNote(@PathVariable Long id) {
        // TODO: Call the service to delete the note. (It returns true if successful)
        if (noteService.deleteNote(id)) {
            return "Note deleted successfully.";
        } else {
            return "Note not found.";
        }
    }
}


