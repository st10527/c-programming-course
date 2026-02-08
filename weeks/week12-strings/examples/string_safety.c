/**
 * string_safety.c - 字串安全議題示範
 * 
 * 編譯：gcc string_safety.c -o string_safety
 * 執行：./string_safety
 */

#include <stdio.h>
#include <string.h>

int main() {
    // ============================================================
    // Buffer Overflow 示範
    // ============================================================
    
    printf("=== Buffer Overflow 問題 ===\n");
    
    char small[5];  // 只有 5 bytes
    
    // ❌ 危險：strcpy 不檢查目標大小
    // strcpy(small, "This is way too long!");  // 溢出！
    printf("small 只有 5 bytes，不能存超過 4 個字元的字串\n");
    
    // ✅ 安全：用 strncpy 限制長度
    strncpy(small, "Hi", sizeof(small) - 1);
    small[sizeof(small) - 1] = '\0';  // 確保結尾
    printf("安全複製: %s\n\n", small);
    
    // ============================================================
    // gets vs fgets
    // ============================================================
    
    printf("=== gets vs fgets ===\n");
    
    // ❌ gets() 已被 C11 標準移除，永遠不要用！
    // char input[10];
    // gets(input);  // 不檢查邊界，危險！
    printf("gets() 不安全，已被 C11 移除\n");
    
    // ✅ fgets() 會限制讀取長度
    // char input[10];
    // fgets(input, sizeof(input), stdin);
    printf("fgets() 安全，會限制讀取長度\n\n");
    
    // ============================================================
    // fgets 的注意事項
    // ============================================================
    
    printf("=== fgets 注意事項 ===\n");
    
    char line[20] = "Hello\n";  // fgets 會保留換行符
    printf("fgets 讀到的: [%s]", line);
    printf("注意最後有 \\n\n");
    
    // 移除換行符的方法
    size_t len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }
    printf("移除換行後: [%s]\n\n", line);
    
    // ============================================================
    // 安全的字串函式比較
    // ============================================================
    
    printf("=== 安全函式比較 ===\n");
    
    char dest[10];
    char src[] = "This is a very long string that exceeds buffer";
    
    // ❌ strcpy：不檢查大小
    printf("strcpy: 不檢查大小 → 可能溢出\n");
    
    // ✅ strncpy：限制複製長度
    strncpy(dest, src, sizeof(dest) - 1);
    dest[sizeof(dest) - 1] = '\0';
    printf("strncpy: %s (安全截斷)\n", dest);
    
    // ✅ snprintf：安全的格式化
    char formatted[20];
    snprintf(formatted, sizeof(formatted), "Score: %d", 100);
    printf("snprintf: %s\n\n", formatted);
    
    // ============================================================
    // scanf 的安全用法
    // ============================================================
    
    printf("=== scanf 的安全用法 ===\n");
    
    char word[10];
    
    // ❌ 危險
    // scanf("%s", word);  // 不限制長度
    
    // ✅ 安全：限制讀取長度
    // scanf("%9s", word);  // 最多讀 9 個字元（留 1 個給 '\0'）
    printf("scanf(\"%%9s\", word) 限制讀取 9 個字元\n\n");
    
    // ============================================================
    // 安全規則總結
    // ============================================================
    
    printf("=== 字串安全規則 ===\n");
    printf("1. 永遠不用 gets()，用 fgets()\n");
    printf("2. 用 strncpy() 取代 strcpy()\n");
    printf("3. 用 snprintf() 取代 sprintf()\n");
    printf("4. 用 scanf(\"%%Ns\") 限制讀取長度\n");
    printf("5. 永遠確保字串以 '\\0' 結尾\n");
    printf("6. 分配緩衝區時預留 '\\0' 的空間\n");
    
    return 0;
}
