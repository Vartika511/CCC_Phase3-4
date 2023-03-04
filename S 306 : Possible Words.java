import java.io.*;
import java.util.*;

public class GenAlphabetCodes {
    public static String[] convert(Set<String> setOfString)
    {
  
        // Create String[] of size of setOfString
        String[] arrayOfString = new String[setOfString.size()];
  
        // Copy elements from set to string array
        // using advanced for loop
        int index = 0;
        for (String str : setOfString)
            arrayOfString[index++] = str;
  
        // return the formed String[]
        return arrayOfString;
    }

public static void main(String[] args) {
// TODO Auto-generated method stub

Scanner input = new Scanner(System.in);
//System.out.println("Please enter any length number but combination of 1 to 26 ....... ");
String val = input.next();
String []s1=convert(decode(val));
    for(int i=0;i<s1.length;i++)
        s1[i]=s1[i].toUpperCase();
    Arrays.sort(s1);
    for(int i=0;i<s1.length;i++)
        System.out.println(s1[i]);
}

public static Set<String> decode(String in) {
char curChar = 'a';
Map<Integer, Character> numberToChar = new HashMap<Integer, Character>();
for (int i = 1; i <= 26; i++) {
numberToChar.put(i, curChar);
curChar++;
}
return decodeHelper(numberToChar, in, 0, new ArrayList<Character>());
}

private static Set<String> decodeHelper(
Map<Integer, Character> numberToChar, String in, int charAt,
ArrayList<Character> arrayList) {
Set<String> result = new HashSet<String>();
if (charAt >= in.length()) {
String str = "";
for (char c : arrayList) {
str += c;
}
result.add(str);
return result;
} else {
int charCode = Integer.valueOf(in.charAt(charAt) + "");
if (charCode == 0) {
int precCharCode = Integer.valueOf(in.charAt(charAt - 1) + "");
if (precCharCode == 1)
charCode = 10;
if (precCharCode == 2)
charCode = 20;
}
char curChar = numberToChar.get(charCode);
arrayList.add(curChar);
result.addAll(decodeHelper(numberToChar, in, charAt + 1, arrayList));
arrayList.remove(arrayList.size() - 1);
if (in.length() > charAt + 1) {
charCode = Integer.valueOf(in.substring(charAt, charAt + 2));
if (charCode <= 26) {
curChar = numberToChar.get(charCode);
arrayList.add(curChar);
result.addAll(decodeHelper(numberToChar, in, charAt + 2,
arrayList));
arrayList.remove(arrayList.size() - 1);
}
}
}
return result;
}
}
