/**
 * Lab 11 Part 2: 記憶體圖
 * 
 * 閱讀以下程式碼，在 diagram_answers.md 中畫出記憶體圖。
 * 不要執行程式！
 */

#include <stdio.h>

void mystery(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    // === 階段 1 ===
    int x = 10;
    int y = 20;
    int *p = &x;
    int *q = &y;
    // → 在 diagram_answers.md 畫出此時的記憶體圖
    
    // === 階段 2 ===
    *p = 30;
    q = p;
    // → 畫出此時的記憶體圖
    
    // === 階段 3 ===
    *q = 50;
    // → 畫出此時的記憶體圖
    // 問題：此時 x 的值是多少？y 的值呢？
    
    // === 階段 4 ===
    int a = 5, b = 8;
    mystery(&a, &b);
    // → 畫出 mystery 執行過程中每一步的記憶體圖
    // 問題：執行後 a 和 b 的值各是多少？
    
    printf("x=%d, y=%d\n", x, y);
    printf("a=%d, b=%d\n", a, b);
    
    return 0;
}
