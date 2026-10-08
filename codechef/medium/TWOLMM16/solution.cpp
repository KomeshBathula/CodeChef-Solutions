    public static int findLongestComment(String filePath) {
        
        try {
            List<String> lines = Files.readAllLines(Paths.get(filePath));
        }

            int max = -1;
            for (int i = 0; i < lines.size(); i++) {
                max = Math.max(max, lines.get(i).length());
            }

            return max;

        catch (IOException e) {
            System.out.println("Error reading from file");
        }
            return -1;

// Class definition
public class Codechef {
    
    // Method to find length of longest comment