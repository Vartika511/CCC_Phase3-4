import java.io.*;
import java.util.*;
 
public class Solution {
 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int weight=sc.nextInt();
        int w[]=new int[n];
        int c[]=new int[n];
        for(int x=0;x<n;x++)
        {
            w[x]=sc.nextInt();
            c[x]=sc.nextInt();
        }
        double maxValue = getMaxValue(w, c, weight);
        if(maxValue < 0) System.out.print("-1");
        else System.out.printf("%.12f", maxValue);
    }
    private static double getMaxValue(int[] wt,int[] val, int capacity){
        ItemValue[] iVal = new ItemValue[wt.length];
        for(int i = 0; i < wt.length; i++)
        {
            iVal[i] = new ItemValue(wt[i], val[i], i);
        }
        Arrays.sort(iVal, new Comparator<ItemValue>(){
            @Override
            public int compare(ItemValue o1, ItemValue o2){
                Double prod1 = o2.val*o1.wt;
                return prod1.compareTo(o1.val*o2.wt) ;
            }
        });
        double totalValue = 0d;
        for(ItemValue i: iVal){
            int curWt = (int) i.wt;
            int curVal = (int) i.val;
            if (capacity - curWt >= 0){
                capacity = capacity-curWt;
                totalValue += curVal;
            }
            else{
                double fraction = ((double)capacity/(double)curWt);
                totalValue += (curVal*fraction);
                capacity = (int)(capacity - (curWt*fraction));
                break;
            }
        }
        if(capacity > 0) return -1;
        return totalValue;
    }
    static class ItemValue{
        Double cost;
        double wt, val, ind;
        public ItemValue(int wt, int val, int ind)
        {
            this.wt = wt;
            this.val = val;
            this.ind = ind;
            cost = new Double(val/wt );
        }
    }
}
