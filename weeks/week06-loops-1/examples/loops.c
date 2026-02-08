/**
 * loops.c - 三種迴圈結構示範
 * 
 * 這個程式示範 for、while、do-while 三種迴圈。
 * 
 * 編譯：gcc loops.c -o loops
 * 執行：./loops
 */

#include <stdio.h>

int main() {
    // ============================================================
    // for 迴圈 (知道次數時使用)
    // ============================================================
    
    printf("=== for 迴圈 ===\n");
    
    // 基本 for 迴圈：印出 1 到 5
    printf("1 到 5: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // 步進值不是 1
    printf("偶數: ");
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    // 遞減
    printf("倒數: ");
    for (int i = 5; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    
    // 計算總和 1+2+...+100
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("1+2+...+100 = %d\n", sum);
    printf("\n");
    
    // ============================================================
    // while 迴圈 (不知道次數時使用)
    // ============================================================
    
    printf("=== while 迴圈 ===\n");
    
    // 計算位數
    int n = 12345;
    int original = n;
    int digits = 0;
    while (n > 0) {
        n /= 10;
        digits++;
    }
    printf("%d 有 %d 位數\n", original, digits);
    
    // 找出第一個大於 1000 的 2 的冪次
    int power = 1;
    while (power <= 1000) {
        power *= 2;
    }
    printf("第一個大於 1000 的 2 的冪次: %d\n", power);
    printf("\n");
    
    // ============================================================
    // do-while 迴圈 (至少執行一次)
    // ============================================================
    
    printf("=== do-while 迴圈 ===\n");
    
    // do-while 至少執行一次
    int count = 0;
    do {
        count++;
        printf("第 %d 次\n", count);
    } while (count < 3);
    
    // 對比：while 在初始條件不成立時不執行
    printf("\nwhile (初始條件 false):\n");
    int x = 10;
    while (x < 5) {
        printf("這行不會印出\n");
        x++;
    }
    printf("while 沒有執行\n");
    
    printf("\ndo-while (初始條件 false):\n");
    int y = 10;
    do {
        printf("至少執行一次! y = %d\n", y);
        y++;
    } while (y < 5);
    printf("\n");
    
    // ============================================================
    // 三種迴圈的等價寫法
    // ============================================================
    
    printf("=== 三種迴圈做同一件事 ===\n");
    
    // for 版本
    printf("for:      ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // while 版本
    printf("while:    ");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // do-while 版本
    printf("do-while: ");
    int j = 1;
    do {
        printf("%d ", j);
        j++;
    } while (j <= 5);
    printf("\n");
    
    return 0;
}
