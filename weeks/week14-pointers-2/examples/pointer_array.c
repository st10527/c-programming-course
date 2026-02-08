/**
 * pointer_array.c - 指標與陣列的關係
 * 
 * 編譯：gcc pointer_array.c -o pointer_array
 * 執行：./pointer_array
 */

#include <stdio.h>
#include <string.h>

int main() {
    // ============================================================
    // 陣列名稱就是指標
    // ============================================================
    
    printf("=== 陣列名稱就是指標 ===\n");
    
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // arr 就是 &arr[0]
    
    printf("arr 的值:   %p\n", (void*)arr);
    printf("&arr[0]:    %p (一樣！)\n", (void*)&arr[0]);
    printf("p 的值:     %p (也一樣！)\n", (void*)p);
    printf("\n");
    
    // ============================================================
    // 指標運算
    // ============================================================
    
    printf("=== 指標運算 ===\n");
    
    // p+1 不是加 1 byte，而是加 1 個 int 的大小 (4 bytes)
    printf("p   = %p (指向 arr[0])\n", (void*)p);
    printf("p+1 = %p (指向 arr[1])\n", (void*)(p+1));
    printf("p+2 = %p (指向 arr[2])\n", (void*)(p+2));
    printf("每次移動 %lu bytes (= sizeof(int))\n", sizeof(int));
    printf("\n");
    
    // ============================================================
    // 三種等價的存取方式
    // ============================================================
    
    printf("=== 三種等價的存取方式 ===\n");
    
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(arr+%d) = %d, *(p+%d) = %d\n",
               i, arr[i],
               i, *(arr + i),
               i, *(p + i));
    }
    printf("\n");
    
    // ============================================================
    // 用指標走訪陣列
    // ============================================================
    
    printf("=== 用指標走訪陣列 ===\n");
    
    // 方式 1：用索引
    printf("索引: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // 方式 2：用指標遞增
    printf("指標: ");
    for (int *q = arr; q < arr + 5; q++) {
        printf("%d ", *q);
    }
    printf("\n\n");
    
    // ============================================================
    // 指標與字串
    // ============================================================
    
    printf("=== 指標與字串 ===\n");
    
    // char[] 和 char* 的差異
    char str_arr[] = "Hello";   // 可修改的陣列
    char *str_ptr = "World";    // 指向字串常數（不可修改）
    
    printf("str_arr: %s\n", str_arr);
    printf("str_ptr: %s\n", str_ptr);
    
    // str_arr 可以修改
    str_arr[0] = 'h';
    printf("修改後 str_arr: %s\n", str_arr);
    
    // str_ptr 指向常數，修改會導致未定義行為
    // str_ptr[0] = 'w';  // ❌ 危險！
    printf("str_ptr 指向常數，不能修改\n\n");
    
    // ============================================================
    // 用指標走訪字串
    // ============================================================
    
    printf("=== 用指標走訪字串 ===\n");
    
    char msg[] = "C Language";
    
    // 用指標印出每個字元
    printf("逐字元: ");
    for (char *cp = msg; *cp != '\0'; cp++) {
        printf("[%c]", *cp);
    }
    printf("\n");
    
    // 手動實作 strlen（用指標版）
    char *end = msg;
    while (*end != '\0') end++;
    int length = end - msg;  // 指標相減 = 距離
    printf("指標版 strlen(\"%s\") = %d\n", msg, length);
    printf("標準版 strlen(\"%s\") = %lu\n", msg, strlen(msg));
    
    return 0;
}
