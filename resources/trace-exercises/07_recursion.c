/**
 * 程式追蹤練習 07：遞迴追蹤
 * 難度：⭐⭐⭐
 * 
 * 練習方式：
 * 1. 畫出遞迴呼叫樹
 * 2. 從最深層（base case）開始回推
 * 3. 標注每層的回傳值
 * 4. 預測輸出，再執行驗證
 */

#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

void countdown(int n) {
    if (n <= 0) {
        printf("Go!\n");
        return;
    }
    printf("%d\n", n);
    countdown(n - 1);
}

int fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int mystery(int n) {
    if (n < 10) return n;
    return mystery(n / 10) + (n % 10);
}

void print_binary(int n) {
    if (n == 0) return;
    print_binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    printf("=== 題目 1：階乘 ===\n");
    printf("factorial(5) = %d\n", factorial(5));
    
    printf("\n=== 題目 2：遞迴求和 ===\n");
    printf("sum(4) = %d\n", sum(4));
    
    printf("\n=== 題目 3：倒數計時 ===\n");
    countdown(3);
    
    printf("\n=== 題目 4：費氏數列 ===\n");
    printf("fib(6) = %d\n", fib(6));
    
    printf("\n=== 題目 5：mystery ===\n");
    printf("mystery(123) = %d\n", mystery(123));
    printf("mystery(9876) = %d\n", mystery(9876));
    
    printf("\n=== 題目 6：二進位 ===\n");
    printf("13 的二進位: ");
    print_binary(13);
    printf("\n");
    
    return 0;
}

/*
 * ========================================
 * 解答（先自己追蹤，再看答案！）
 * ========================================
 *
 * 題目 1：factorial(5)
 * factorial(5) = 5 * factorial(4)
 *              = 5 * 4 * factorial(3)
 *              = 5 * 4 * 3 * factorial(2)
 *              = 5 * 4 * 3 * 2 * factorial(1)
 *              = 5 * 4 * 3 * 2 * 1
 *              = 120
 * 輸出：factorial(5) = 120
 *
 * 題目 2：sum(4)
 * sum(4) = 4 + sum(3)
 *        = 4 + 3 + sum(2)
 *        = 4 + 3 + 2 + sum(1)
 *        = 4 + 3 + 2 + 1 + sum(0)
 *        = 4 + 3 + 2 + 1 + 0
 *        = 10
 * 輸出：sum(4) = 10
 *
 * 題目 3：countdown(3)
 * countdown(3): 印出 3, 呼叫 countdown(2)
 * countdown(2): 印出 2, 呼叫 countdown(1)
 * countdown(1): 印出 1, 呼叫 countdown(0)
 * countdown(0): 印出 Go!
 * 輸出：
 * 3
 * 2
 * 1
 * Go!
 *
 * 題目 4：fib(6)
 * 呼叫樹（畫出來會很大）：
 * fib(6) = fib(5) + fib(4)
 *        = (fib(4)+fib(3)) + (fib(3)+fib(2))
 *        = ((fib(3)+fib(2))+(fib(2)+fib(1))) + ((fib(2)+fib(1))+fib(2))
 * 結果：fib(0)=0, fib(1)=1, fib(2)=1, fib(3)=2, fib(4)=3, fib(5)=5, fib(6)=8
 * 輸出：fib(6) = 8
 *
 * 題目 5：mystery 計算各位數字之和
 * mystery(123) = mystery(12) + 3
 *              = mystery(1) + 2 + 3
 *              = 1 + 2 + 3 = 6
 * mystery(9876) = mystery(987) + 6
 *               = mystery(98) + 7 + 6
 *               = mystery(9) + 8 + 7 + 6
 *               = 9 + 8 + 7 + 6 = 30
 * 輸出：mystery(123) = 6
 *       mystery(9876) = 30
 *
 * 題目 6：print_binary(13)
 * 13 = 1101 in binary
 * print_binary(13): 先遞迴 print_binary(6), 再印 13%2=1
 * print_binary(6):  先遞迴 print_binary(3), 再印 6%2=0
 * print_binary(3):  先遞迴 print_binary(1), 再印 3%2=1
 * print_binary(1):  先遞迴 print_binary(0), 再印 1%2=1
 * print_binary(0):  return (base case)
 * 由深到淺印出：1, 1, 0, 1
 * 輸出：13 的二進位: 1101
 */
