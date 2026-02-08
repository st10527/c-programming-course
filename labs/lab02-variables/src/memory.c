/**
 * Lab 02 Part 3: 記憶體觀察
 * 
 * 完成 TODO 的部分，執行後回答 memory_answers.md 中的問題。
 */

#include <stdio.h>

int main() {
    // ========================================
    // Part A: 觀察不同型態的大小
    // ========================================
    printf("=== 資料型態大小 ===\n");
    
    printf("char:   %lu bytes\n", sizeof(char));
    printf("short:  %lu bytes\n", sizeof(short));
    printf("int:    %lu bytes\n", sizeof(int));
    printf("long:   %lu bytes\n", sizeof(long));
    printf("float:  %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    printf("\n");
    
    // ========================================
    // Part B: 觀察變數的記憶體位址
    // ========================================
    printf("=== 記憶體位址 ===\n");
    
    int a = 100;
    int b = 200;
    int c = 300;
    
    printf("a: 值 = %d, 位址 = %p\n", a, (void*)&a);
    printf("b: 值 = %d, 位址 = %p\n", b, (void*)&b);
    printf("c: 值 = %d, 位址 = %p\n", c, (void*)&c);
    printf("\n");
    
    // ========================================
    // Part C: 觀察溢位 (Overflow)
    // ========================================
    printf("=== 整數溢位 ===\n");
    
    // TODO: 宣告一個 short 變數，值設為 32767（short 的最大值）
    // short max_short = ???;
    
    // TODO: 印出 max_short 的值
    // printf("max_short = %d\n", max_short);
    
    // TODO: 將 max_short 加 1，再印出來
    // max_short = max_short + 1;
    // printf("max_short + 1 = %d\n", max_short);
    
    // 提示：觀察溢位後的結果，在 memory_answers.md 解釋為什麼
    
    printf("\n");
    
    // ========================================
    // Part D: 觀察未初始化的變數
    // ========================================
    printf("=== 未初始化變數 ===\n");
    
    int uninitialized;  // 故意不初始化
    
    // 警告：這會印出「垃圾值」
    printf("未初始化的 int: %d\n", uninitialized);
    printf("（這個值每次執行可能不同！）\n");
    
    return 0;
}
