/**
 * pointer_diagrams.c - 指標記憶體圖與 swap 函式
 * 
 * 編譯：gcc pointer_diagrams.c -o pointer_diagrams
 * 執行：./pointer_diagrams
 */

#include <stdio.h>

// 函式宣告
void bad_swap(int a, int b);
void swap(int *a, int *b);
void add_ten(int *p);

int main() {
    // ============================================================
    // 記憶體圖示範
    // ============================================================
    
    printf("=== 記憶體圖示範 ===\n\n");
    
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;
    
    printf("變數 a: 值=%d, 位址=%p\n", a, (void*)&a);
    printf("變數 b: 值=%d, 位址=%p\n", b, (void*)&b);
    printf("指標 pa: 值=%p, 指向=%d\n", (void*)pa, *pa);
    printf("指標 pb: 值=%p, 指向=%d\n", (void*)pb, *pb);
    
    printf("\n記憶體圖:\n");
    printf("┌────────────────────────┐\n");
    printf("│  a    %p   10    │\n", (void*)&a);
    printf("└────────────────────────┘\n");
    printf("              ↑\n");
    printf("┌────────────────────────┐\n");
    printf("│  pa   %p   %p │\n", (void*)&pa, (void*)pa);
    printf("└────────────────────────┘\n\n");
    
    // ============================================================
    // 傳值呼叫 vs 傳指標
    // ============================================================
    
    printf("=== 傳值呼叫（交換失敗） ===\n");
    
    int x = 5, y = 10;
    printf("交換前: x=%d, y=%d\n", x, y);
    bad_swap(x, y);
    printf("bad_swap 後: x=%d, y=%d (沒變！)\n\n", x, y);
    
    printf("=== 傳指標（交換成功） ===\n");
    
    printf("交換前: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("swap 後: x=%d, y=%d (成功交換！)\n\n", x, y);
    
    // ============================================================
    // 為什麼 bad_swap 失敗？
    // ============================================================
    
    printf("=== 為什麼 bad_swap 失敗？ ===\n\n");
    
    printf("bad_swap(x, y) 的 Stack:\n");
    printf("┌──────────────────┐\n");
    printf("│  bad_swap()      │\n");
    printf("│  a = 5 (複製品)  │ ← 交換的是這裡\n");
    printf("│  b = 10 (複製品) │ ← 不影響原本\n");
    printf("├──────────────────┤\n");
    printf("│  main()          │\n");
    printf("│  x = 5           │ ← 沒被改到\n");
    printf("│  y = 10          │ ← 沒被改到\n");
    printf("└──────────────────┘\n\n");
    
    printf("swap(&x, &y) 的 Stack:\n");
    printf("┌──────────────────┐\n");
    printf("│  swap()          │\n");
    printf("│  a → 指向 x     │ ← 透過指標\n");
    printf("│  b → 指向 y     │ ← 修改原值\n");
    printf("├──────────────────┤\n");
    printf("│  main()          │\n");
    printf("│  x = 10          │ ← 被成功修改\n");
    printf("│  y = 5           │ ← 被成功修改\n");
    printf("└──────────────────┘\n\n");
    
    // ============================================================
    // 更多指標參數範例
    // ============================================================
    
    printf("=== 指標參數：函式修改外部變數 ===\n");
    
    int num = 25;
    printf("修改前: num = %d\n", num);
    add_ten(&num);
    printf("add_ten 後: num = %d\n", num);
    
    return 0;
}

// ============================================================
// 函式定義
// ============================================================

/**
 * 錯誤的交換：傳值只是複製品
 */
void bad_swap(int a, int b) {
    printf("  bad_swap 內: a=%d, b=%d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("  bad_swap 交換後: a=%d, b=%d\n", a, b);
    // 但 main 裡的 x, y 沒有變！
}

/**
 * 正確的交換：用指標修改原值
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * 透過指標讓函式修改外部變數
 */
void add_ten(int *p) {
    *p += 10;
}
