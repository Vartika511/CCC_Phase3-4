#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    int count = 0;
    
    // Read input strings
    scanf("%s %s", str1, str2);
    
    // Find the length of the strings
    int len1 = strlen(str1), len2 = strlen(str2);
    
    // Search for occurrences of str2 in str1
    if(len1>len2){
        for (int i = 0; i <= len1 - len2; i++) {
            if (strncmp(str1 + i, str2, len2) == 0) {
                count++;
            }
        }
    }
    // Search for occurrences of str1 in str2
    else{
        for (int i = 0; i <= len2 - len1; i++) {
            if (strncmp(str2 + i, str1, len1) == 0) {
                count++;
            }
        }
    }
    // Print the count of occurrences
    printf("%d\n", count);
    
    return 0;
}
