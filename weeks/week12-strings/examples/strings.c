/**
 * strings.c - 字串基礎示範
 * 
 * 編譯：gcc strings.c -o strings
 * 執行：./strings
 */

#include <stdio.h>
#include <string.h>

int main() {
    // ============================================================
    // 字串的宣告與初始化
    // ============================================================
    
    printf("=== 字串的宣告 ===\n");
    
    // 方式 1：字串字面值（最常用）
    char greeting[] = "Hello, World!";
    
    // 方式 2：字元陣列初始化
    char name[] = {'A', 'l', 'i', 'c', 'e', '\0'};
    
    // 方式 3：指定大小（留空間給後續操作）
    char buffer[100] = "Hi";
    
    printf("greeting: %s\n", greeting);
    printf("name: %s\n", name);
    printf("buffer: %s\n", buffer);
    printf("\n");
    
    // ============================================================
    // 字串結尾 '\0'
    // ============================================================
    
    printf("=== '\\0' 字串結尾 ===\n");
    
    char str[] = "Hello";
    printf("字串: %s\n", str);
    printf("長度: %lu\n", strlen(str));               // 5
    printf("陣列大小: %lu\n", sizeof(str));           // 6（含 '\0'）
    
    // 逐字元印出（包含 '\0'）
    printf("逐字元: ");
    for (int i = 0; i <= (int)strlen(str); i++) {
        if (str[i] == '\0') {
            printf("[\\0]");
        } else {
            printf("[%c]", str[i]);
        }
    }
    printf("\n\n");
    
    // ============================================================
    // 字元與 ASCII
    // ============================================================
    
    printf("=== ASCII ===\n");
    
    char ch = 'A';
    printf("字元 '%c' 的 ASCII 值: %d\n", ch, ch);
    printf("'0' 的 ASCII 值: %d\n", '0');
    printf("'a' 的 ASCII 值: %d\n", 'a');
    
    // 大寫轉小寫
    char upper = 'B';
    char lower = upper + 32;  // 或 upper + ('a' - 'A')
    printf("'%c' 轉小寫: '%c'\n", upper, lower);
    printf("\n");
    
    // ============================================================
    // strlen - 字串長度
    // ============================================================
    
    printf("=== strlen ===\n");
    
    printf("strlen(\"Hello\") = %lu\n", strlen("Hello"));       // 5
    printf("strlen(\"\") = %lu\n", strlen(""));                 // 0
    printf("strlen(\"Hi\\n\") = %lu\n", strlen("Hi\n"));        // 3（\n 算一個字元）
    printf("\n");
    
    // ============================================================
    // strcmp - 字串比較
    // ============================================================
    
    printf("=== strcmp ===\n");
    
    char s1[] = "apple";
    char s2[] = "banana";
    char s3[] = "apple";
    
    // strcmp 回傳值：0 = 相等，< 0 = 前者較小，> 0 = 前者較大
    printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s2, strcmp(s1, s2));
    printf("strcmp(\"%s\", \"%s\") = %d\n", s1, s3, strcmp(s1, s3));
    
    // ❌ 不能用 == 比較字串！
    if (s1 == s3) {
        printf("== 比較的是位址，不是內容！\n");
    }
    
    // ✅ 用 strcmp
    if (strcmp(s1, s3) == 0) {
        printf("\"%s\" 等於 \"%s\" (strcmp)\n", s1, s3);
    }
    printf("\n");
    
    // ============================================================
    // strcpy - 字串複製
    // ============================================================
    
    printf("=== strcpy ===\n");
    
    char dest[50];
    strcpy(dest, "Hello, C!");
    printf("複製後: %s\n", dest);
    
    // ❌ 不能用 = 複製字串！
    // dest = "New String";  // 編譯錯誤
    printf("\n");
    
    // ============================================================
    // strcat - 字串串接
    // ============================================================
    
    printf("=== strcat ===\n");
    
    char result[100] = "Hello";
    strcat(result, ", ");
    strcat(result, "World!");
    printf("串接後: %s\n", result);
    printf("\n");
    
    // ============================================================
    // 手動實作 strlen
    // ============================================================
    
    printf("=== 手動實作 strlen ===\n");
    
    char test[] = "Programming";
    int len = 0;
    while (test[len] != '\0') {
        len++;
    }
    printf("手動計算 \"%s\" 的長度: %d\n", test, len);
    printf("strlen 的結果: %lu\n", strlen(test));
    
    return 0;
}
