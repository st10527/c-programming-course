/**
 * Lab 04 Part 2: 程式碼品質比較
 * 
 * 每組有兩種寫法，請在 compare_answers.md 中分析哪種較好。
 * 這個檔案可以執行，讓你驗證功能是否相同。
 */

#include <stdio.h>

int main() {
    int x = 5;
    
    // ========================================
    // 比較 1：判斷是否為偶數
    // ========================================
    printf("=== 比較 1：判斷偶數 ===\n");
    
    // 寫法 A
    if (x % 2 == 0) {
        printf("A: 偶數\n");
    } else {
        printf("A: 奇數\n");
    }
    
    // 寫法 B
    if (x % 2 != 0) {
        printf("B: 奇數\n");
    } else {
        printf("B: 偶數\n");
    }
    
    // ========================================
    // 比較 2：返回布林值
    // ========================================
    printf("\n=== 比較 2：返回布林值 ===\n");
    
    int age = 20;
    int is_adult_A, is_adult_B;
    
    // 寫法 A
    if (age >= 18) {
        is_adult_A = 1;
    } else {
        is_adult_A = 0;
    }
    
    // 寫法 B
    is_adult_B = (age >= 18);
    
    printf("寫法 A: is_adult = %d\n", is_adult_A);
    printf("寫法 B: is_adult = %d\n", is_adult_B);
    
    // ========================================
    // 比較 3：多重條件
    // ========================================
    printf("\n=== 比較 3：多重條件 ===\n");
    
    int score = 75;
    
    // 寫法 A：巢狀 if
    if (score >= 60) {
        if (score >= 80) {
            printf("A: 優秀\n");
        } else {
            printf("A: 及格\n");
        }
    } else {
        printf("A: 不及格\n");
    }
    
    // 寫法 B：else if 串接
    if (score >= 80) {
        printf("B: 優秀\n");
    } else if (score >= 60) {
        printf("B: 及格\n");
    } else {
        printf("B: 不及格\n");
    }
    
    // ========================================
    // 比較 4：提早返回
    // ========================================
    printf("\n=== 比較 4：條件邏輯 ===\n");
    
    int n = -5;
    
    // 寫法 A：完整的 if-else
    if (n > 0) {
        printf("A: 正數處理...\n");
        // 很多程式碼...
    } else {
        printf("A: 非正數，跳過\n");
    }
    
    // 寫法 B：guard clause（保護條款）
    if (n <= 0) {
        printf("B: 非正數，跳過\n");
    } else {
        printf("B: 正數處理...\n");
        // 很多程式碼...
    }
    
    // ========================================
    // 比較 5：複雜條件
    // ========================================
    printf("\n=== 比較 5：複雜條件 ===\n");
    
    int year = 2024;
    int is_leap;
    
    // 寫法 A：巢狀判斷
    if (year % 400 == 0) {
        is_leap = 1;
    } else {
        if (year % 100 == 0) {
            is_leap = 0;
        } else {
            if (year % 4 == 0) {
                is_leap = 1;
            } else {
                is_leap = 0;
            }
        }
    }
    printf("A: %d %s閏年\n", year, is_leap ? "是" : "不是");
    
    // 寫法 B：邏輯運算子
    is_leap = (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
    printf("B: %d %s閏年\n", year, is_leap ? "是" : "不是");
    
    return 0;
}
