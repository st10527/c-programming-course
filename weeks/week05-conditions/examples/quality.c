/**
 * quality.c - 條件式程式碼品質比較
 * 
 * 這個程式示範好的與不好的條件判斷寫法。
 * 
 * 編譯：gcc quality.c -o quality
 * 執行：./quality
 */

#include <stdio.h>

int main() {
    // ============================================================
    // 比較 1：布林值的使用
    // ============================================================
    
    printf("=== 比較 1：布林值 ===\n");
    
    int is_valid = 1;
    
    // ❌ 冗長的寫法
    if (is_valid == 1) {
        printf("壞: 不需要 == 1\n");
    }
    
    // ✅ 簡潔的寫法
    if (is_valid) {
        printf("好: 直接用變數當條件\n");
    }
    
    // ❌ 更冗長
    int result_bad;
    if (is_valid) {
        result_bad = 1;
    } else {
        result_bad = 0;
    }
    
    // ✅ 一行搞定
    int result_good = is_valid;  // 本身就是 0 或 1
    
    printf("result_bad = %d, result_good = %d\n\n", result_bad, result_good);
    
    // ============================================================
    // 比較 2：Guard Clause 模式
    // ============================================================
    
    printf("=== 比較 2：Guard Clause ===\n");
    
    int age = 20, has_id = 1, has_ticket = 1;
    
    // ❌ 深層巢狀
    printf("壞的寫法（深層巢狀）：\n");
    if (age >= 18) {
        if (has_id) {
            if (has_ticket) {
                printf("  可以入場\n");
            } else {
                printf("  沒有票\n");
            }
        } else {
            printf("  沒有證件\n");
        }
    } else {
        printf("  未成年\n");
    }
    
    // ✅ Guard Clause（提前排除不合格的條件）
    printf("好的寫法（Guard Clause）：\n");
    if (age < 18) {
        printf("  未成年，無法入場\n");
    } else if (!has_id) {
        printf("  沒有證件，無法入場\n");
    } else if (!has_ticket) {
        printf("  沒有票，無法入場\n");
    } else {
        printf("  可以入場\n");
    }
    printf("\n");
    
    // ============================================================
    // 比較 3：簡化條件表達式
    // ============================================================
    
    printf("=== 比較 3：簡化條件 ===\n");
    
    int x = 15;
    
    // ❌ 冗長的範圍檢查
    if (x >= 10) {
        if (x <= 20) {
            printf("壞: x 在 10-20 之間\n");
        }
    }
    
    // ✅ 使用 && 簡化
    if (x >= 10 && x <= 20) {
        printf("好: x 在 10-20 之間\n");
    }
    printf("\n");
    
    // ============================================================
    // 比較 4：避免否定條件
    // ============================================================
    
    printf("=== 比較 4：肯定 vs 否定 ===\n");
    
    int is_empty = 0;
    
    // ❌ 雙重否定，難讀
    if (!is_empty) {
        printf("壞: !is_empty (雙重否定)\n");
    }
    
    // ✅ 用肯定的命名
    int has_data = 1;
    if (has_data) {
        printf("好: has_data (直接明瞭)\n");
    }
    printf("\n");
    
    // ============================================================
    // 比較 5：switch vs if-else
    // ============================================================
    
    printf("=== 比較 5：switch vs if-else ===\n");
    
    int day = 3;
    
    // 當比較同一個變數的多個固定值時，switch 更清楚
    switch (day) {
        case 1: printf("switch: 星期一\n"); break;
        case 2: printf("switch: 星期二\n"); break;
        case 3: printf("switch: 星期三\n"); break;
        case 4: printf("switch: 星期四\n"); break;
        case 5: printf("switch: 星期五\n"); break;
        default: printf("switch: 週末\n");
    }
    
    // 當需要範圍判斷時，if-else 更合適
    int temp = 25;
    if (temp > 30) {
        printf("if-else: 很熱\n");
    } else if (temp > 20) {
        printf("if-else: 舒適\n");
    } else {
        printf("if-else: 涼爽\n");
    }
    
    return 0;
}

/*
 * 程式碼品質重點整理：
 * 
 * 1. 不要用 == 1 / == 0 判斷布林值
 * 2. 用 Guard Clause 避免深層巢狀
 * 3. 用 && || 簡化巢狀條件
 * 4. 變數命名用肯定句，避免雙重否定
 * 5. 同一變數多值比較用 switch
 * 6. 範圍判斷用 if-else
 */
