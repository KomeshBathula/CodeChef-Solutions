        try {
            // Read the entire file as a string
            String content = Files.readString(Paths.get(filepath));

            return content;  // Return file content
        } catch (IOException e) {
            return "Error reading file: " + e.getMessage();  // Handle file read errors
        }
    }

    public static void main(String[] args) throws java.lang.Exception {
        // Call the readFile method and print the contents of the text file
        System.out.println(readFile("/home/chef/workspace/data.txt"));
    }
    public static String readFile(String filepath) {
    // Method to read and return file content as a String

class Codechef {
import java.io.IOException;
import java.nio.file.Paths;
import java.nio.file.Files;