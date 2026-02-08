/**
 * Lab 10 Part 3: 手動實作字串函式
 * 
 * 不能使用 <string.h>！自己實作以下函式。
 */

#include <stdio.h>
// 注意：不能 #include <string.h>

// ========================================
// 練習 1：實作 my_strlen
// ========================================

// TODO: 計算字串長度（不含 '\0'）
int my_strlen(char str[]) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 2：實作 my_strcpy
// ========================================

// TODO: 將 src 複製到 dest
// 回傳 dest
char* my_strcpy(char dest[], char src[]) {
    // 請在此完成
    return dest;
}

// ========================================
// 練習 3：實作 my_strcmp
// ========================================

// TODO: 比較兩個字串
// 相等回傳 0，s1 < s2 回傳負數，s1 > s2 回傳正數
int my_strcmp(char s1[], char s2[]) {
    // 請在此完成
    return 0;  // 請修改
}

// ========================================
// 練習 4：實作 my_strcat
// ========================================

// TODO: 將 src 串接到 dest 後面
// 回傳 dest
char* my_strcat(char dest[], char src[]) {
    // 請在此完成
    return dest;
}

// ============================================================

int main() {
    // 測試 my_strlen
    printf("=== my_strlen ===\n");
    printf("my_strlen(\"Hello\") = %d\n", my_strlen("Hello"));  // 預期：5
    printf("my_strlen(\"\") = %d\n", my_strlen(""));            // 預期：0
    printf("my_strlen(\"Hi!\") = %d\n", my_strlen("Hi!"));      // 預期：3
    
    // 測試 my_strcpy
    printf("\n=== my_strcpy ===\n");
    char dest[50];
    my_strcpy(dest, "Hello, World!");
    printf("my_strcpy: %s\n", dest);  // 預期：Hello, World!
    
    // 測試 my_strcmp
    printf("\n=== my_strcmp ===\n");
    printf("my_strcmp(\"abc\", \"abc\") = %d\n", my_strcmp("abc", "abc"));   // 預期：0
    printf("my_strcmp(\"abc\", \"abd\") 是 %s\n",
           my_strcmp("abc", "abd") < 0 ? "負數" : "非負數");  // 預期：負數
    printf("my_strcmp(\"abd\", \"abc\") 是 %s\n",
           my_strcmp("abd", "abc") > 0 ? "正數" : "非正數");  // 預期：正數
    
    // 測試 my_strcat
    printf("\n=== my_strcat ===\n");
    char result[50] = "Hello";
    my_strcat(result, ", ");
    my_strcat(result, "World!");
    printf("my_strcat: %s\n", result);  // 預期：Hello, World!
    
    return 0;
}
