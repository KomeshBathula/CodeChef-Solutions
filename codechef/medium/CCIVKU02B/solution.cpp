
@RestController
@RequestMapping("/api/notes")
public class NoteController {

    private final NoteService noteService;

    // TODO: Constructor-based dependency injection
    public NoteController( NoteService noteService ) {
        this.noteService = noteService;
    }

    // POST /api/notes
    @PostMapping
    public String addNote(@RequestBody String note) {
        // TODO: Call service layer to add note
        noteService.addNote(note);
        return "Note added successfully!";
    }

    // GET /api/notes/list