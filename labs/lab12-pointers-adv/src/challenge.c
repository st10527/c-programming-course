/**
 * Lab 12 Part 3: 指標綜合挑戰
 */

#include <stdio.h>
#include <string.h>

// ========================================
// 挑戰 1：用指標實作 strrev（字串反轉）
// ========================================

// TODO: 原地反轉字串
// 例如："Hello" → "olleH"
void my_strrev(char *str) {
    // 請在此完成
    // 提示：用兩個指標，一個指向開頭，一個指向結尾
}

// ========================================
// 挑戰 2：用指標合併兩個已排序陣列
// ========================================

// TODO: 將兩個已排序陣列合併為一個已排序陣列
// a: 已排序陣列 1
// b: 已排序陣列 2
// result: 合併後的結果
// 回傳 result 的長度
int merge_sorted(int *a, int size_a, int *b, int size_b, int *result) {
    // 請在此完成
    // 提示：用三個指標分別指向 a、b、result
    // 比較 *pa 和 *pb，較小的放入 *pr
    return 0;  // 請修改
}

// ========================================
// 挑戰 3：指標版字串搜尋
// ========================================

// TODO: 在 haystack 中搜尋 needle 第一次出現的位置
// 找到回傳指向該位置的指標，找不到回傳 NULL
// 例如：my_strstr("Hello World", "World") 回傳指向 "World" 的指標
char* my_strstr(char *haystack, char *needle) {
    // 請在此完成
    return NULL;  // 請修改
}

// 輔助函式
void print_int_array(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

// ============================================================

int main() {
    // 測試挑戰 1
    printf("=== 挑戰 1：字串反轉 ===\n");
    char s1[] = "Hello";
    printf("反轉前: %s\n", s1);
    my_strrev(s1);
    printf("反轉後: %s\n", s1);  // 預期：olleH
    
    char s2[] = "ABCDE";
    my_strrev(s2);
    printf("反轉 ABCDE: %s\n", s2);  // 預期：EDCBA
    
    // 測試挑戰 2
    printf("\n=== 挑戰 2：合併排序陣列 ===\n");
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8, 9};
    int result[9];
    int len = merge_sorted(a, 4, b, 5, result);
    printf("合併結果: ");
    print_int_array(result, len);  // 預期：[1, 2, 3, 4, 5, 6, 7, 8, 9]
    printf("\n");
    
    // 測試挑戰 3
    printf("\n=== 挑戰 3：字串搜尋 ===\n");
    char *found = my_strstr("Hello World", "World");
    if (found) {
        printf("找到: %s\n", found);  // 預期：World
    }
    found = my_strstr("Hello World", "xyz");
    if (found == NULL) {
        printf("找不到 xyz\n");  // 預期：找不到
    }
    
    return 0;
}
