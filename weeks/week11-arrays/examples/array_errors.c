/**
 * array_errors.c - 陣列常見錯誤示範
 * 
 * 編譯：gcc array_errors.c -o array_errors
 * 執行：./array_errors
 */

#include <stdio.h>

// 函式宣告
void modify_array(int arr[], int size);
void wrong_size(int arr[]);

int main() {
    // ============================================================
    // 錯誤 1：陣列越界
    // ============================================================
    
    printf("=== 陣列越界問題 ===\n");
    
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("合法存取: arr[0]=%d, arr[4]=%d\n", arr[0], arr[4]);
    
    // ❌ 越界存取（索引 5 不合法，合法是 0-4）
    // 這不會報錯，但結果是未定義的！
    // printf("越界: arr[5] = %d (垃圾值！)\n", arr[5]);
    printf("arr[5] 是越界！C 語言不會幫你檢查！\n");
    printf("\n");
    
    // ============================================================
    // 錯誤 2：Off-by-one
    // ============================================================
    
    printf("=== Off-by-one 錯誤 ===\n");
    
    int data[5] = {1, 2, 3, 4, 5};
    
    // ❌ 錯誤：i <= 5 會存取 data[5]（越界）
    printf("錯誤 (i<=5): ");
    for (int i = 0; i <= 4; i++) {  // 修正版：用 <= 4 或 < 5
        printf("%d ", data[i]);
    }
    printf("\n");
    
    // ✅ 正確寫法
    printf("正確 (i<5):  ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", data[i]);
    }
    printf("\n\n");
    
    // ============================================================
    // 陣列在記憶體中的佈局
    // ============================================================
    
    printf("=== 記憶體佈局 ===\n");
    
    int nums[5] = {100, 200, 300, 400, 500};
    
    for (int i = 0; i < 5; i++) {
        printf("nums[%d] = %d, 位址 = %p\n",
               i, nums[i], (void*)&nums[i]);
    }
    printf("注意：每個元素相差 %lu bytes (= sizeof(int))\n\n",
           sizeof(int));
    
    // ============================================================
    // 陣列作為函式參數
    // ============================================================
    
    printf("=== 陣列作為函式參數 ===\n");
    
    int values[4] = {1, 2, 3, 4};
    printf("修改前: ");
    for (int i = 0; i < 4; i++) printf("%d ", values[i]);
    printf("\n");
    
    modify_array(values, 4);  // 陣列傳位址，不是傳值！
    
    printf("修改後: ");
    for (int i = 0; i < 4; i++) printf("%d ", values[i]);
    printf("\n");
    printf("陣列在函式中被修改了！（因為傳的是位址）\n\n");
    
    // ============================================================
    // sizeof 在函式中的問題
    // ============================================================
    
    printf("=== sizeof 在函式中的陷阱 ===\n");
    
    printf("main 中: sizeof(values) = %lu\n", sizeof(values));  // 16
    wrong_size(values);
    printf("所以傳陣列給函式時，必須同時傳大小！\n");
    
    return 0;
}

/**
 * 修改陣列內容（會影響原陣列）
 */
void modify_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 10;  // 會改到原陣列！
    }
}

/**
 * 展示 sizeof 在函式參數中的問題
 */
void wrong_size(int arr[]) {
    // ❌ 在函式中，arr 已經退化為指標
    // sizeof(arr) 會得到指標的大小，不是陣列的大小
    printf("函式中: sizeof(arr) = %lu (這是指標大小，不是陣列大小！)\n",
           sizeof(arr));
}
