
            // Write your code here



        } catch (IOException e) {
            return "Error reading file: " + e.getMessage();  // Handle file read errors
        }
    }
            String content = Files.readString(Paths.get(filepath));

            return content;
            
{
    public static String readFile(String filepath){
        try {
import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.IOException;

class Codechef
    public static void main (String[] args) throws java.lang.Exception
    {
        System.out.println(readFile("/home/chef/workspace/server.log"));
    }
}