import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
                        
        Pattern link = Pattern.compile("<a [^<>]*href=\"(.*?)\"[^<>]*>((?:<[^<>]+>)*([^<>]*)(?:</[^<>]+>)*)</a>");
       
        for (int i = 0; i < N; i++) {
            String s = sc.nextLine();            
            Matcher linkMatch = link.matcher(s);
            
            while (linkMatch.find()) {
                System.out.print(linkMatch.group(1) + ',');
                System.out.print(linkMatch.group(3).trim() + '\n');
            }
            
        }
        
        
        sc.close();
    }
}
