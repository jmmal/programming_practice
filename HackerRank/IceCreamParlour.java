import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int j = 0; j < t; j++) {
            int m = sc.nextInt();
            int n = sc.nextInt();

            HashMap complements = new HashMap();
            for(int i = 1; i <= n; i++) {
                int x = sc.nextInt();
                if (complements.containsKey(x)) {
                    System.out.printf("%d %d\n", complements.get(x), i);
                    sc.nextLine();
                    break;
                }
                complements.put(m - x, i);
            }
        }
        
        
    }
}
