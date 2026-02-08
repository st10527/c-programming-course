/**
 * Lab 08 Part 1: 遞迴練習
 */

#include <stdio.h>

// ========================================
// 練習 1：計算 1+2+...+n（遞迴版）
// ========================================

// TODO: 完成遞迴函式 sum_to_n
// 參數：正整數 n
// 回傳：1+2+...+n
// Base Case: n == 1 → 回傳 1
// Recursive Case: n + sum_to_n(n-1)
int sum_to_n(int n) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 2：反轉印出數字
// ========================================

// TODO: 完成遞迴函式 print_reverse
// 參數：正整數 n
// 功能：反轉印出 n 的每個位數
// 例如：print_reverse(1234) 印出 "4 3 2 1"
// Base Case: n < 10 → 印出 n
// Recursive Case: 印出 n%10，然後遞迴 n/10
void print_reverse(int n) {
    // 請在此完成
}

// ========================================
// 練習 3：計算字串長度（遞迴版）
// ========================================

// TODO: 完成遞迴函式 my_strlen
// 參數：字串指標 str
// 回傳：字串長度
// Base Case: *str == '\0' → 回傳 0
// Recursive Case: 1 + my_strlen(str + 1)
int my_strlen(char *str) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 4：二進位表示
// ========================================

// TODO: 完成遞迴函式 print_binary
// 參數：非負整數 n
// 功能：印出 n 的二進位表示
// 例如：print_binary(10) 印出 "1010"
// Base Case: n == 0 → 不印東西（或 n <= 1 → 印出 n）
// Recursive Case: 先遞迴 n/2，再印出 n%2
void print_binary(int n) {
    // 請在此完成
}

// ============================================================

int main() {
    // 測試練習 1
    printf("=== 練習 1：遞迴求和 ===\n");
    printf("sum_to_n(5) = %d\n", sum_to_n(5));      // 預期：15
    printf("sum_to_n(10) = %d\n", sum_to_n(10));    // 預期：55
    printf("sum_to_n(1) = %d\n", sum_to_n(1));      // 預期：1
    
    // 測試練習 2
    printf("\n=== 練習 2：反轉數字 ===\n");
    printf("print_reverse(1234): ");
    print_reverse(1234);  // 預期：4 3 2 1
    printf("\n");
    printf("print_reverse(9): ");
    print_reverse(9);     // 預期：9
    printf("\n");
    
    // 測試練習 3
    printf("\n=== 練習 3：遞迴 strlen ===\n");
    printf("my_strlen(\"Hello\") = %d\n", my_strlen("Hello"));      // 預期：5
    printf("my_strlen(\"\") = %d\n", my_strlen(""));                // 預期：0
    printf("my_strlen(\"C Language\") = %d\n", my_strlen("C Language")); // 預期：10
    
    // 測試練習 4
    printf("\n=== 練習 4：二進位 ===\n");
    printf("print_binary(10): ");
    print_binary(10);     // 預期：1010
    printf("\n");
    printf("print_binary(7): ");
    print_binary(7);      // 預期：111
    printf("\n");
    printf("print_binary(1): ");
    print_binary(1);      // 預期：1
    printf("\n");
    
    return 0;
}
