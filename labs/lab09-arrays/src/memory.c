/**
 * Lab 09 Part 2: 記憶體分析
 * 
 * 閱讀這段程式碼，在 memory_answers.md 中回答問題。
 * 不要執行程式，用你的理解來回答。
 */

#include <stdio.h>

void modify(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    // 問題：arr 在函式中的 sizeof 是多少？
    printf("函式中 sizeof(arr) = %lu\n", sizeof(arr));
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b[3] = {1, 2};
    int c[5] = {0};
    
    // 區塊 1：大小分析
    printf("sizeof(a) = %lu\n", sizeof(a));
    printf("sizeof(a[0]) = %lu\n", sizeof(a[0]));
    printf("元素個數 = %lu\n", sizeof(a) / sizeof(a[0]));
    
    // 區塊 2：初始化分析
    printf("\nb 的值: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", b[i]);
    }
    printf("\nc 的值: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }
    
    // 區塊 3：位址分析
    printf("\n\na 的元素位址:\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] 的位址: %p\n", i, (void*)&a[i]);
    }
    
    // 區塊 4：函式傳遞
    printf("\n修改前: ");
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");
    
    modify(a, 5);
    
    printf("修改後: ");
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}
