    @DeleteMapping("/{id}")
    // URL: /api/events/{id}
    // Method: DELETE
    // 2️ Delete an event by ID


    }
        }
            return "Event not found!";
        } else {
            return "Event updated successfully!";
            eventService.updateEvent(id, event);
        if (id >= 0 || id < eventService.getEventCount()) {

                              @RequestBody Map<String, String> event) {
    public String updateEvent(@PathVariable int id,

    // 1️ Update an event by ID
    // Method: PUT
    // URL: /api/events/{id}
    @PutMapping("/{id}")