
// Class definition
public class Codechef {
    
    // Method to read and print the contents of a file
    public static void readFile(String filePath) {
        try {
            // Read all lines from the file into an ArrayList
            ArrayList<String> lines = new ArrayList<>(Files.readAllLines(Paths.get(filePath)));

            // Print each line using a traditional for loop
            for (int i = 0; i < lines.size(); i++) {
                // Complete this line to print each line
            }

        } catch (IOException e) {
            // Handling file-related exceptions
            System.out.println("Error reading file: " + e.getMessage());
        }
    }
                System.out.println(lines.get(i));