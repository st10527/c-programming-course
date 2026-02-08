/**
 * arrays.c - 陣列基礎示範
 * 
 * 編譯：gcc arrays.c -o arrays
 * 執行：./arrays
 */

#include <stdio.h>

// 函式宣告
void print_array(int arr[], int size);
int find_max(int arr[], int size);
int find_min(int arr[], int size);
double calculate_avg(int arr[], int size);

int main() {
    // ============================================================
    // 陣列宣告與初始化
    // ============================================================
    
    printf("=== 陣列宣告與初始化 ===\n");
    
    // 方式 1：指定大小並初始化
    int scores[5] = {85, 92, 78, 95, 88};
    
    // 方式 2：自動推算大小
    int primes[] = {2, 3, 5, 7, 11, 13};
    int prime_count = sizeof(primes) / sizeof(primes[0]);
    
    // 方式 3：部分初始化（其餘為 0）
    int partial[10] = {1, 2, 3};  // 後 7 個是 0
    
    // 方式 4：全部初始化為 0
    int zeros[5] = {0};
    
    printf("scores: ");
    print_array(scores, 5);
    printf("primes (%d 個): ", prime_count);
    print_array(primes, prime_count);
    printf("partial: ");
    print_array(partial, 10);
    printf("zeros: ");
    print_array(zeros, 5);
    printf("\n");
    
    // ============================================================
    // 陣列的基本操作
    // ============================================================
    
    printf("=== 基本操作 ===\n");
    
    // 計算總和
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    printf("總分: %d\n", sum);
    printf("平均: %.1f\n", calculate_avg(scores, 5));
    printf("最高: %d\n", find_max(scores, 5));
    printf("最低: %d\n", find_min(scores, 5));
    printf("\n");
    
    // ============================================================
    // 線性搜尋
    // ============================================================
    
    printf("=== 線性搜尋 ===\n");
    
    int target = 78;
    int found_index = -1;
    
    for (int i = 0; i < 5; i++) {
        if (scores[i] == target) {
            found_index = i;
            break;
        }
    }
    
    if (found_index >= 0) {
        printf("找到 %d 在索引 %d\n", target, found_index);
    } else {
        printf("找不到 %d\n", target);
    }
    printf("\n");
    
    // ============================================================
    // 二維陣列
    // ============================================================
    
    printf("=== 二維陣列 ===\n");
    
    int matrix[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    
    // 走訪二維陣列
    printf("3x4 矩陣:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // ============================================================
    // sizeof 與陣列
    // ============================================================
    
    printf("=== sizeof 與陣列 ===\n");
    
    printf("scores 陣列的總大小: %lu bytes\n", sizeof(scores));
    printf("每個元素的大小: %lu bytes\n", sizeof(scores[0]));
    printf("元素個數: %lu\n", sizeof(scores) / sizeof(scores[0]));
    
    return 0;
}

// ============================================================
// 函式定義
// ============================================================

void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

double calculate_avg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}
