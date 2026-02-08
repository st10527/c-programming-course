/**
 * Lab 09 Part 1: 陣列操作
 */

#include <stdio.h>

// ========================================
// 練習 1：找最大值與最小值
// ========================================

// TODO: 完成函式 find_max
// 回傳陣列中的最大值
int find_max(int arr[], int size) {
    // 請在此完成
    return 0;  // 請修改
}

// TODO: 完成函式 find_min
// 回傳陣列中的最小值
int find_min(int arr[], int size) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 2：反轉陣列
// ========================================

// TODO: 完成函式 reverse_array
// 將陣列中的元素反轉（原地修改）
// 例如：{1, 2, 3, 4, 5} → {5, 4, 3, 2, 1}
void reverse_array(int arr[], int size) {
    // 請在此完成
    // 提示：使用兩個索引，從兩端向中間交換
}

// ========================================
// 練習 3：計算出現次數
// ========================================

// TODO: 完成函式 count_occurrences
// 計算 target 在陣列中出現幾次
int count_occurrences(int arr[], int size, int target) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 4：移除重複元素
// ========================================

// TODO: 完成函式 remove_duplicates
// 移除已排序陣列中的重複元素，回傳新長度
// 例如：{1, 1, 2, 3, 3, 3, 4} → {1, 2, 3, 4}，回傳 4
int remove_duplicates(int arr[], int size) {
    // 請在此完成
    // 提示：用一個「寫入位置」的索引
    return 0;  // 請修改
}

// ========================================
// 輔助函式
// ========================================

void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

// ============================================================

int main() {
    // 測試練習 1
    printf("=== 練習 1：最大最小值 ===\n");
    int data[] = {34, 12, 56, 78, 23, 45, 89, 67};
    int n = sizeof(data) / sizeof(data[0]);
    printf("陣列: ");
    print_array(data, n);
    printf("\n");
    printf("最大值: %d\n", find_max(data, n));  // 預期：89
    printf("最小值: %d\n", find_min(data, n));  // 預期：12
    
    // 測試練習 2
    printf("\n=== 練習 2：反轉陣列 ===\n");
    int arr1[] = {1, 2, 3, 4, 5};
    printf("反轉前: ");
    print_array(arr1, 5);
    reverse_array(arr1, 5);
    printf("\n反轉後: ");
    print_array(arr1, 5);  // 預期：[5, 4, 3, 2, 1]
    printf("\n");
    
    // 測試練習 3
    printf("\n=== 練習 3：出現次數 ===\n");
    int arr2[] = {1, 3, 5, 3, 7, 3, 9};
    printf("3 出現 %d 次\n", count_occurrences(arr2, 7, 3));  // 預期：3
    printf("5 出現 %d 次\n", count_occurrences(arr2, 7, 5));  // 預期：1
    printf("2 出現 %d 次\n", count_occurrences(arr2, 7, 2));  // 預期：0
    
    // 測試練習 4
    printf("\n=== 練習 4：移除重複 ===\n");
    int arr3[] = {1, 1, 2, 3, 3, 3, 4, 5, 5};
    int new_size = remove_duplicates(arr3, 9);
    printf("移除重複後: ");
    print_array(arr3, new_size);  // 預期：[1, 2, 3, 4, 5]
    printf(" (長度: %d)\n", new_size);  // 預期：5
    
    return 0;
}
