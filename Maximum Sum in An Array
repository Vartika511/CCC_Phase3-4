import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) throws IOException{
        Scanner scanner = new Scanner(System.in);
        String temp = scanner.nextLine();
        int numberOfInputs = Integer.parseInt(temp);
        int numberOfElements = 0;
        int[] elements;
        String input ;
        StringTokenizer stringTokenizer;
        if(numberOfInputs<1 || numberOfInputs>10)
            return;
        for(int i=0;i<numberOfInputs;i++){
            temp = scanner.nextLine();
            numberOfElements = Integer.parseInt(temp);
            if(numberOfElements<1 || numberOfElements>100000)
                return;
            elements = new int[numberOfElements];
            input = scanner.nextLine();
            stringTokenizer = new StringTokenizer(input);
            for(int j=0;j<numberOfElements;j++){
                elements[j] = Integer.parseInt(stringTokenizer.nextToken());
                if(elements[j]<-10000 || elements[j]>10000)
                    return;
            }
            findMaxContiguous(numberOfElements,elements);
        }
        for(String res : result )
            System.out.println(res);

        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
    static List<String> result = new ArrayList<String>();
    static void findMaxContiguous(int n,int[] elements){
        int[] table = new int[n+1];
        boolean allNegative=true;
        boolean allZeros = true;
        for(int i=0;i<n;i++){
            if(elements[i]>0){
                allNegative=false;
                allZeros = false;
                break;
            }
        }
        if(allNegative){
            Arrays.sort(elements);
            result.add(elements[elements.length-1]+" "+elements[elements.length-1]);
            return;
        }
        if(allZeros){
            result.add("0 0");
            return;
        }

        int maxSum=0,maxSumSofar=0;

        table[0] = elements[0]>0?elements[0]:0;

        for(int i=1;i<n;i++){
            table[i]=table[i-1];
            if(elements[i]>0){
                table[i] = table[i-1]+elements[i];
            }
        }

        for(int i=0;i<n;i++){
            maxSumSofar= maxSumSofar+elements[i];
            if(maxSumSofar>0){
                if(maxSum<maxSumSofar){
                    maxSum = maxSumSofar;
                }
            }
            else{
                maxSumSofar = 0;
                continue;
            }
        }
        String res = maxSum +" "+ table[n-1];
        result.add(res);
    }
}
