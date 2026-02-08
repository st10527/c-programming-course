/**
 * Lab 12 Part 1: 指標與陣列
 */

#include <stdio.h>

// ========================================
// 練習 1：用指標求陣列總和
// ========================================

// TODO: 完成函式 array_sum
// 使用指標（不用索引）計算陣列總和
// 提示：用 int *end = arr + size; 然後用 ptr < end 走訪
int array_sum(int *arr, int size) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 2：用指標反轉陣列
// ========================================

// TODO: 完成函式 ptr_reverse
// 使用指標（不用索引）反轉陣列
// 提示：一個指標從頭，一個從尾，向中間靠攏
void ptr_reverse(int *arr, int size) {
    // 請在此完成
}

// ========================================
// 練習 3：用指標搜尋
// ========================================

// TODO: 完成函式 ptr_find
// 在陣列中搜尋 target
// 找到回傳指向該元素的指標，找不到回傳 NULL
int* ptr_find(int *arr, int size, int target) {
    // 請在此完成
    return NULL;  // 請修改
}

// ========================================
// 練習 4：用指標複製陣列
// ========================================

// TODO: 完成函式 ptr_copy
// 將 src 陣列複製到 dest（使用指標操作）
void ptr_copy(int *dest, int *src, int size) {
    // 請在此完成
}

// 輔助函式
void print_array(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", *(arr + i));
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

// ============================================================

int main() {
    // 測試練習 1
    printf("=== 練習 1：指標求和 ===\n");
    int data[] = {10, 20, 30, 40, 50};
    printf("總和: %d\n", array_sum(data, 5));  // 預期：150
    
    // 測試練習 2
    printf("\n=== 練習 2：指標反轉 ===\n");
    int arr1[] = {1, 2, 3, 4, 5};
    printf("反轉前: ");
    print_array(arr1, 5);
    ptr_reverse(arr1, 5);
    printf("\n反轉後: ");
    print_array(arr1, 5);  // 預期：[5, 4, 3, 2, 1]
    printf("\n");
    
    // 測試練習 3
    printf("\n=== 練習 3：指標搜尋 ===\n");
    int arr2[] = {10, 20, 30, 40, 50};
    int *found = ptr_find(arr2, 5, 30);
    if (found != NULL) {
        printf("找到 30，位址: %p\n", (void*)found);
        printf("該位置的值: %d\n", *found);  // 預期：30
    }
    found = ptr_find(arr2, 5, 99);
    if (found == NULL) {
        printf("找不到 99\n");  // 預期：找不到
    }
    
    // 測試練習 4
    printf("\n=== 練習 4：指標複製 ===\n");
    int src[] = {100, 200, 300};
    int dest[3];
    ptr_copy(dest, src, 3);
    printf("複製結果: ");
    print_array(dest, 3);  // 預期：[100, 200, 300]
    printf("\n");
    
    return 0;
}
