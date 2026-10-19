    private String process(String text, int shift) {
        StringBuilder result = new StringBuilder();
        for (char character : text.toCharArray()) {
    public String decrypt(String text) {
        return process(text, 26 - (SHIFT % 26));
    }

package com.example.demo.service;

import org.springframework.stereotype.Service;

@Service
public class EncryptionService {

    // Secret key for scrambling
    private static final int SHIFT = 5;

    public String encrypt(String text) {
        return process(text, SHIFT);
    }
