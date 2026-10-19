package com.example.demo;

import org.springframework.web.bind.annotation.*;
import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/tickets")
public class TicketController {

    // In-memory list to store tickets
    private List<Ticket> ticketList = new ArrayList<>();

    // GET API - fetch all tickets
    @GetMapping
    public List<Ticket> getAllTickets() {
        return ticketList;
    }

    // POST API - raise a new ticket (starter template)
    @PostMapping