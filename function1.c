#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
    return reversedNum;
}

int main() {
    int X;
    

    printf("enter num:");
    scanf("%d",&X);
    int reversed = reverseNumber(X);
   
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
