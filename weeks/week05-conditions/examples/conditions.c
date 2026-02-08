/**
 * conditions.c - 條件判斷完整示範
 * 
 * 這個程式示範 C 語言中各種條件判斷結構。
 * 
 * 編譯：gcc conditions.c -o conditions
 * 執行：./conditions
 */

#include <stdio.h>

int main() {
    // ============================================================
    // if 敘述
    // ============================================================
    
    printf("=== if 敘述 ===\n");
    
    int temperature = 35;
    
    if (temperature > 30) {
        printf("天氣很熱！溫度 %d 度\n", temperature);
    }
    printf("\n");
    
    // ============================================================
    // if-else 敘述
    // ============================================================
    
    printf("=== if-else 敘述 ===\n");
    
    int age = 16;
    
    if (age >= 18) {
        printf("你已成年\n");
    } else {
        printf("你未成年（%d 歲）\n", age);
    }
    printf("\n");
    
    // ============================================================
    // else if 串接
    // ============================================================
    
    printf("=== else if 串接 ===\n");
    
    int score = 85;
    
    if (score >= 90) {
        printf("等第: A\n");
    } else if (score >= 80) {
        printf("等第: B\n");
    } else if (score >= 70) {
        printf("等第: C\n");
    } else if (score >= 60) {
        printf("等第: D\n");
    } else {
        printf("等第: F\n");
    }
    printf("\n");
    
    // ============================================================
    // 重要觀念：else if vs 多個 if
    // ============================================================
    
    printf("=== else if vs 多個獨立 if ===\n");
    
    int val = 85;
    
    printf("使用 else if（只進入一個分支）：\n");
    if (val >= 90)      printf("  >= 90\n");
    else if (val >= 80) printf("  >= 80\n");  // 只印這個
    else if (val >= 70) printf("  >= 70\n");
    
    printf("使用多個 if（每個都會檢查）：\n");
    if (val >= 90) printf("  >= 90\n");
    if (val >= 80) printf("  >= 80\n");  // 印這個
    if (val >= 70) printf("  >= 70\n");  // 也印這個！
    printf("\n");
    
    // ============================================================
    // 巢狀 if
    // ============================================================
    
    printf("=== 巢狀 if ===\n");
    
    int x = 10, y = 20;
    
    if (x > 0) {
        if (y > 0) {
            printf("x 和 y 都是正數\n");
        } else {
            printf("x 是正數，y 不是\n");
        }
    } else {
        printf("x 不是正數\n");
    }
    printf("\n");
    
    // ============================================================
    // 邏輯運算子
    // ============================================================
    
    printf("=== 邏輯運算子 ===\n");
    
    int a = 5, b = 10;
    
    // && (AND)：兩邊都要 true
    if (a > 0 && b > 0) {
        printf("a 和 b 都是正數 (&&)\n");
    }
    
    // || (OR)：至少一邊 true
    if (a > 7 || b > 7) {
        printf("至少一個大於 7 (||)\n");
    }
    
    // ! (NOT)：反轉
    int is_raining = 0;  // false
    if (!is_raining) {
        printf("沒有下雨 (!)\n");
    }
    printf("\n");
    
    // ============================================================
    // 短路求值 (Short-Circuit Evaluation)
    // ============================================================
    
    printf("=== 短路求值 ===\n");
    
    int divisor = 0;
    
    // && 短路：左邊 false，右邊不執行
    // 這是很重要的技巧，可以防止除以零
    if (divisor != 0 && 100 / divisor > 5) {
        printf("商大於 5\n");
    } else {
        printf("除數為 0，安全跳過（短路求值保護）\n");
    }
    printf("\n");
    
    // ============================================================
    // switch 敘述
    // ============================================================
    
    printf("=== switch 敘述 ===\n");
    
    char grade = 'B';
    
    switch (grade) {
        case 'A':
            printf("優秀！\n");
            break;
        case 'B':
            printf("很好！\n");
            break;
        case 'C':
            printf("普通\n");
            break;
        case 'D':
            printf("需要加油\n");
            break;
        case 'F':
            printf("不及格\n");
            break;
        default:
            printf("無效的等第\n");
    }
    printf("\n");
    
    // ============================================================
    // 條件運算子 (Ternary Operator)
    // ============================================================
    
    printf("=== 條件運算子 ?:  ===\n");
    
    int num = 7;
    
    // 語法：條件 ? 真值 : 假值
    const char *parity = (num % 2 == 0) ? "偶數" : "奇數";
    printf("%d 是%s\n", num, parity);
    
    // 等同於：
    // if (num % 2 == 0)
    //     parity = "偶數";
    // else
    //     parity = "奇數";
    
    int abs_val = (num >= 0) ? num : -num;
    printf("|%d| = %d\n", num, abs_val);
    
    return 0;
}
