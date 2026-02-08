/**
 * Lab 02 Part 2: 變數追蹤練習
 * 
 * 請先在 trace_answers.md 中手動追蹤變數值，
 * 完成後再執行程式驗證你的答案。
 */

#include <stdio.h>

int main() {
    printf("=== 題目 1：基本賦值 ===\n");
    {
        int a = 10;
        int b = 20;
        int c = a;
        a = b;
        b = c;
        printf("a = %d, b = %d, c = %d\n", a, b, c);
    }
    
    printf("\n=== 題目 2：運算賦值 ===\n");
    {
        int x = 5;
        int y = 3;
        x = x + y;
        y = x - y;
        x = x - y;
        printf("x = %d, y = %d\n", x, y);
    }
    
    printf("\n=== 題目 3：遞增運算 ===\n");
    {
        int n = 10;
        int a = n++;    // 先賦值，再遞增
        int b = ++n;    // 先遞增，再賦值
        printf("n = %d, a = %d, b = %d\n", n, a, b);
    }
    
    printf("\n=== 題目 4：複合運算 ===\n");
    {
        int p = 10;
        p += 5;     // p = p + 5
        p -= 3;     // p = p - 3
        p *= 2;     // p = p * 2
        p /= 4;     // p = p / 4
        printf("p = %d\n", p);
    }
    
    printf("\n=== 題目 5：整數除法 ===\n");
    {
        int a = 17;
        int b = 5;
        int quotient = a / b;
        int remainder = a % b;
        printf("17 / 5 = %d ... %d\n", quotient, remainder);
    }
    
    printf("\n=== 題目 6：型態轉換 ===\n");
    {
        int i = 7;
        int j = 2;
        double result1 = i / j;           // 整數除法後轉 double
        double result2 = (double)i / j;   // 先轉 double 再除
        printf("result1 = %f\n", result1);
        printf("result2 = %f\n", result2);
    }
    
    return 0;
}
