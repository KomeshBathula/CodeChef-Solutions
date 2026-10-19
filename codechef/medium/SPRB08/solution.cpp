    private final PaymentRepository paymentRepository;

import java.util.Optional;

@Service
public class BookingService {

    private final FlightRepository flightRepository;
import com.example.demo.entity.Flight;
import com.example.demo.entity.PaymentInfo;
import com.example.demo.repository.FlightRepository;
import com.example.demo.repository.PaymentRepository;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;
package com.example.demo.service;
