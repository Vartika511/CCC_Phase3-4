import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String k="Goodbye";
        int j=0;
        for(int i=0;i<s.length();i++)
        {if(s.charAt(i)==k.charAt(j))
                j+=1;
            if(j==k.length())
                break;}
        if(j==k.length())
            System.out.print("Yes");
        else
            System.out.print("No");
    }
}
