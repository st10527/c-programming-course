/**
 * Lab 01 Part 2: 程式閱讀
 * 
 * 請閱讀這個程式，然後回答 reading_answers.md 中的問題。
 * 
 * 重要：請先閱讀並回答問題，不要先執行程式！
 */

#include <stdio.h>

int main() {
    // 區塊 A
    int x = 10;
    int y = 3;
    
    // 區塊 B
    int sum = x + y;
    int diff = x - y;
    int product = x * y;
    int quotient = x / y;
    int remainder = x % y;
    
    // 區塊 C
    printf("x = %d, y = %d\n", x, y);
    printf("x + y = %d\n", sum);
    printf("x - y = %d\n", diff);
    printf("x * y = %d\n", product);
    printf("x / y = %d\n", quotient);
    printf("x %% y = %d\n", remainder);
    
    // 區塊 D
    x = x + 5;
    printf("After x = x + 5: x = %d\n", x);
    
    // 區塊 E
    y = y * 2;
    printf("After y = y * 2: y = %d\n", y);
    
    return 0;
}
