/**
 * pointer_errors.c - 常見指標錯誤
 * 
 * 編譯：gcc pointer_errors.c -o pointer_errors -Wall
 * 執行：./pointer_errors
 */

#include <stdio.h>
#include <stdlib.h>

// 函式宣告
void safe_print(int *p);

int main() {
    // ============================================================
    // 錯誤 1：未初始化的指標（野指標）
    // ============================================================
    
    printf("=== 錯誤 1：未初始化指標 ===\n");
    
    // ❌ 危險：ptr 指向隨機位址
    // int *wild_ptr;
    // *wild_ptr = 42;  // 可能造成 Segfault
    
    // ✅ 正確：初始化為 NULL
    int *safe_ptr = NULL;
    printf("初始化為 NULL: ptr = %p\n", (void*)safe_ptr);
    printf("使用前檢查 NULL\n\n");
    
    // ============================================================
    // 錯誤 2：解參考 NULL
    // ============================================================
    
    printf("=== 錯誤 2：解參考 NULL ===\n");
    
    int *null_ptr = NULL;
    
    // ❌ 危險：
    // printf("%d\n", *null_ptr);  // Segmentation Fault!
    
    // ✅ 正確：使用前檢查
    safe_print(null_ptr);  // 安全地處理
    
    int value = 42;
    int *valid_ptr = &value;
    safe_print(valid_ptr);
    printf("\n");
    
    // ============================================================
    // 錯誤 3：Dangling Pointer（概念說明）
    // ============================================================
    
    printf("=== 錯誤 3：Dangling Pointer ===\n");
    
    // ❌ 不要返回區域變數的位址
    // int* get_local_ptr() {
    //     int local = 42;
    //     return &local;  // local 會消失！
    // }
    
    printf("函式的區域變數在函式結束後消失\n");
    printf("返回它的位址 = Dangling Pointer\n");
    printf("解決方法：回傳值，不要回傳位址\n\n");
    
    // ============================================================
    // 錯誤 4：忘記解參考
    // ============================================================
    
    printf("=== 錯誤 4：忘記解參考 ===\n");
    
    int num = 10;
    int *p = &num;
    
    // ❌ 印出位址而不是值
    printf("錯誤: p = %p (這是位址，不是值)\n", (void*)p);
    
    // ✅ 解參考取值
    printf("正確: *p = %d (這才是值)\n", *p);
    printf("\n");
    
    // ============================================================
    // 錯誤 5：型態不匹配
    // ============================================================
    
    printf("=== 錯誤 5：型態不匹配 ===\n");
    
    int int_val = 42;
    // ❌ double* 指向 int → 解讀方式不同
    // double *wrong_type = (double*)&int_val;
    // printf("%f\n", *wrong_type);  // 垃圾值
    
    // ✅ 正確：型態要匹配
    int *correct_type = &int_val;
    printf("正確: *correct_type = %d\n", *correct_type);
    printf("\n");
    
    // ============================================================
    // 動態記憶體簡介
    // ============================================================
    
    printf("=== 動態記憶體簡介 ===\n");
    
    // malloc 分配記憶體
    int *dynamic = (int*)malloc(5 * sizeof(int));
    
    if (dynamic == NULL) {
        printf("記憶體分配失敗！\n");
        return 1;
    }
    
    // 使用動態陣列
    for (int i = 0; i < 5; i++) {
        dynamic[i] = (i + 1) * 10;
    }
    
    printf("動態陣列: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dynamic[i]);
    }
    printf("\n");
    
    // ✅ 用完一定要 free
    free(dynamic);
    dynamic = NULL;  // 避免 dangling pointer
    
    printf("free 後設為 NULL\n\n");
    
    // ============================================================
    // 指標安全規則總結
    // ============================================================
    
    printf("=== 指標安全規則 ===\n");
    printf("1. 宣告指標時初始化（NULL 或有效位址）\n");
    printf("2. 使用前檢查是否為 NULL\n");
    printf("3. 不要返回區域變數的位址\n");
    printf("4. malloc 後檢查是否成功\n");
    printf("5. free 後將指標設為 NULL\n");
    printf("6. 確保指標型態匹配\n");
    
    return 0;
}

/**
 * 安全的指標使用：使用前檢查 NULL
 */
void safe_print(int *p) {
    if (p == NULL) {
        printf("  指標是 NULL，無法印出\n");
        return;
    }
    printf("  值 = %d\n", *p);
}
