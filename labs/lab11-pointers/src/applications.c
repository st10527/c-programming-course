/**
 * Lab 11 Part 3: 指標應用
 */

#include <stdio.h>

// ========================================
// 練習 1：swap 函式
// ========================================

// TODO: 完成 swap 函式
// 使用指標交換兩個整數的值
void swap(int *a, int *b) {
    // 請在此完成
}

// ========================================
// 練習 2：min_max 函式
// ========================================

// TODO: 完成 min_max 函式
// 找出陣列的最小值和最大值
// 透過指標參數 min 和 max 傳回結果
void min_max(int arr[], int size, int *min, int *max) {
    // 請在此完成
}

// ========================================
// 練習 3：divide 函式
// ========================================

// TODO: 完成 divide 函式
// 計算 a / b 的商和餘數
// 透過指標 quotient 和 remainder 傳回結果
// 如果 b 為 0，回傳 0 表示失敗；否則回傳 1
int divide(int a, int b, int *quotient, int *remainder) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 4：排序（使用指標傳遞的 swap）
// ========================================

// TODO: 使用你寫的 swap 函式，完成泡沫排序
void bubble_sort(int arr[], int size) {
    // 請在此完成
    // 提示：兩層迴圈，內層比較相鄰元素
    // 如果 arr[j] > arr[j+1]，用 swap(&arr[j], &arr[j+1]) 交換
}

// 輔助函式
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
    // 測試 swap
    printf("=== 練習 1：swap ===\n");
    int x = 5, y = 10;
    printf("交換前: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("交換後: x=%d, y=%d\n", x, y);  // 預期：x=10, y=5
    
    // 測試 min_max
    printf("\n=== 練習 2：min_max ===\n");
    int data[] = {34, 12, 56, 78, 23, 45, 89, 67};
    int min, max;
    min_max(data, 8, &min, &max);
    printf("最小: %d, 最大: %d\n", min, max);  // 預期：12, 89
    
    // 測試 divide
    printf("\n=== 練習 3：divide ===\n");
    int q, r;
    if (divide(17, 5, &q, &r)) {
        printf("17 / 5 = %d 餘 %d\n", q, r);  // 預期：3 餘 2
    }
    if (!divide(10, 0, &q, &r)) {
        printf("除以 0：失敗\n");  // 預期：失敗
    }
    
    // 測試 bubble_sort
    printf("\n=== 練習 4：bubble_sort ===\n");
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("排序前: ");
    print_array(arr, n);
    printf("\n");
    bubble_sort(arr, n);
    printf("排序後: ");
    print_array(arr, n);  // 預期：[11, 12, 22, 25, 34, 64, 90]
    printf("\n");
    
    return 0;
}
