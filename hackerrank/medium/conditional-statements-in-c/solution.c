#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char *nums[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if (n >= 1 && n <= 9) {
        printf("%s\n", nums[n - 1]);
    } else {
        printf("Greater than 9\n");
    }
    
    return 0;
}
