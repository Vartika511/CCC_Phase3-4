import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        
        int max1 = Integer.MIN_VALUE, min1 = Integer.MAX_VALUE, max2 = Integer.MIN_VALUE, min2 = Integer.MAX_VALUE;
        
        for(int i = 0; i < n; i++) {
            max1 = Math.max(max1, a[i]+i);
            min1 = Math.min(min1, a[i]+i);
            max2 = Math.max(max2, a[i]-i);
            min2 = Math.min(min2, a[i]-i);
        }
        
        int res = Math.max(max1 - min1, max2 - min2);
        System.out.println(res);
    }
}
