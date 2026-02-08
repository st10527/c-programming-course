/**
 * Lab 08 Part 3: 遞迴除錯
 * 
 * 以下每個遞迴函式都有 bug，請找出並修正。
 */

#include <stdio.h>

// ========================================
// Bug 1：無限遞迴
// 這個函式應該計算 n! (n 的階乘)
// 但執行時會無限遞迴（stack overflow）
// ========================================

int factorial(int n) {
    // BUG: 缺少 base case
    return n * factorial(n - 1);
}

// ========================================
// Bug 2：回傳值錯誤
// 這個函式應該計算 base^exp
// 但計算結果不正確
// ========================================

int power(int base, int exp) {
    if (exp == 0) return 0;  // BUG: base^0 應該是？
    return base * power(base, exp - 1);
}

// ========================================
// Bug 3：遞迴方向錯誤
// 這個函式應該印出 1 到 n
// 但順序不對
// ========================================

void count_up(int n) {
    if (n <= 0) return;
    printf("%d ", n);      // BUG: 印出的順序不對
    count_up(n - 1);
}

// ========================================
// Bug 4：邊界條件錯誤
// 這個函式應該計算費氏數列第 n 項
// f(0)=0, f(1)=1, f(n)=f(n-1)+f(n-2)
// 但對某些輸入會出錯
// ========================================

int fibonacci(int n) {
    if (n == 1) return 1;   // BUG: 少了一個 base case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// ============================================================

int main() {
    // 測試 Bug 1（修正後再取消註解）
    // printf("factorial(5) = %d\n", factorial(5));    // 預期：120
    // printf("factorial(0) = %d\n", factorial(0));    // 預期：1
    
    // 測試 Bug 2
    printf("power(2, 3) = %d\n", power(2, 3));      // 預期：8，實際：?
    printf("power(5, 0) = %d\n", power(5, 0));      // 預期：1，實際：?
    
    // 測試 Bug 3
    printf("count_up(5): ");
    count_up(5);  // 預期：1 2 3 4 5
    printf("\n");
    
    // 測試 Bug 4（修正後再取消註解）
    // printf("fibonacci(0) = %d\n", fibonacci(0));  // 預期：0
    // printf("fibonacci(5) = %d\n", fibonacci(5));  // 預期：5
    
    return 0;
}
