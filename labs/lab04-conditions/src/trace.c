/**
 * Lab 04 Part 3: 條件追蹤
 * 
 * 請先在 trace_answers.md 中追蹤執行流程，
 * 然後執行程式驗證你的答案。
 */

#include <stdio.h>

int main() {
    // ========================================
    // 題目 1：基本 if-else
    // ========================================
    printf("=== 題目 1 ===\n");
    int a = 7;
    
    if (a > 10) {
        printf("A\n");
    } else if (a > 5) {
        printf("B\n");
    } else {
        printf("C\n");
    }
    
    // ========================================
    // 題目 2：巢狀條件
    // ========================================
    printf("\n=== 題目 2 ===\n");
    int x = 4, y = 6;
    
    if (x > 3) {
        if (y > 5) {
            printf("X\n");
        } else {
            printf("Y\n");
        }
    } else {
        printf("Z\n");
    }
    
    // ========================================
    // 題目 3：邏輯運算子
    // ========================================
    printf("\n=== 題目 3 ===\n");
    int p = 5, q = 3;
    
    if (p > 3 && q > 3) {
        printf("Both\n");
    } else if (p > 3 || q > 3) {
        printf("One\n");
    } else {
        printf("None\n");
    }
    
    // ========================================
    // 題目 4：短路求值
    // ========================================
    printf("\n=== 題目 4 ===\n");
    int m = 0, n = 5;
    
    // && 短路：如果左邊是 false，右邊不會執行
    if (m != 0 && n / m > 2) {
        printf("條件成立\n");
    } else {
        printf("條件不成立\n");
    }
    // 注意：如果沒有短路求值，n / m 會造成除以零錯誤！
    
    // ========================================
    // 題目 5：連續判斷
    // ========================================
    printf("\n=== 題目 5 ===\n");
    int score = 75;
    
    if (score >= 90)
        printf("A ");
    if (score >= 80)
        printf("B ");
    if (score >= 70)
        printf("C ");
    if (score >= 60)
        printf("D ");
    printf("\n");
    // 注意：這裡每個 if 都是獨立的，不是 else if！
    
    // ========================================
    // 題目 6：switch
    // ========================================
    printf("\n=== 題目 6 ===\n");
    int day = 3;
    
    switch (day) {
        case 1:
            printf("Mon\n");
            break;
        case 2:
            printf("Tue\n");
            break;
        case 3:
            printf("Wed\n");
            break;
        case 4:
        case 5:
            printf("Thu or Fri\n");
            break;
        default:
            printf("Weekend\n");
    }
    
    // ========================================
    // 題目 7：switch 沒有 break
    // ========================================
    printf("\n=== 題目 7 ===\n");
    int num = 2;
    
    switch (num) {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Other\n");
    }
    // 注意 fall-through 行為！
    
    return 0;
}
