/**
 * debugging.c - 運算除錯練習
 * 
 * 這個程式示範常見的運算錯誤以及如何修正。
 * 每個範例先展示錯誤版本，再展示正確版本。
 * 
 * 編譯：gcc debugging.c -o debugging
 * 執行：./debugging
 */

#include <stdio.h>

int main() {
    // ============================================================
    // 範例 1：平均值計算錯誤
    // ============================================================
    
    printf("=== 範例 1：平均值計算 ===\n");
    
    int score1 = 75, score2 = 82, score3 = 91;
    
    // ❌ 錯誤版本：優先順序問題
    double avg_wrong = score1 + score2 + score3 / 3;
    printf("錯誤: avg = %.1f (score3 先除以 3 了)\n", avg_wrong);
    
    // ❌ 還是錯：整數除法
    double avg_still_wrong = (score1 + score2 + score3) / 3;
    printf("還是錯: avg = %.1f (整數除法，小數被截斷)\n", avg_still_wrong);
    
    // ✅ 正確版本
    double avg_correct = (score1 + score2 + score3) / 3.0;
    printf("正確: avg = %.1f\n", avg_correct);
    printf("\n");
    
    // ============================================================
    // 範例 2：華氏轉攝氏
    // ============================================================
    
    printf("=== 範例 2：華氏轉攝氏 ===\n");
    printf("公式: C = (F - 32) × 5 / 9\n\n");
    
    int fahrenheit = 100;
    
    // ❌ 錯誤：整數除法 5/9 = 0
    double celsius_wrong = (fahrenheit - 32) * 5 / 9;
    printf("錯誤: %d°F = %.2f°C (5/9 整數除法)\n", fahrenheit, celsius_wrong);
    
    // ✅ 正確版本
    double celsius_correct = (fahrenheit - 32) * 5.0 / 9.0;
    printf("正確: %d°F = %.2f°C\n", fahrenheit, celsius_correct);
    printf("\n");
    
    // ============================================================
    // 範例 3：型態轉換（隱式 vs 顯式）
    // ============================================================
    
    printf("=== 範例 3：型態轉換 ===\n");
    
    int i = 5, j = 2;
    
    // 隱式轉換：int 和 double 運算，int 會自動提升為 double
    double result1 = i + 2.5;
    printf("5 + 2.5 = %.1f (int 自動提升為 double)\n", result1);
    
    // 顯式轉換：使用 (type) 強制轉換
    double result2 = (double)i / j;
    printf("(double)5 / 2 = %.1f (顯式轉換)\n", result2);
    
    // 注意轉換的位置很重要！
    double result3 = (double)(i / j);   // 先做整數除法，再轉
    printf("(double)(5 / 2) = %.1f (太晚轉換了！)\n", result3);
    printf("\n");
    
    // ============================================================
    // 範例 4：= 和 == 的混淆
    // ============================================================
    
    printf("=== 範例 4：= vs == ===\n");
    
    int x = 5;
    
    // ❌ 常見錯誤：用 = 做比較（這其實是賦值）
    // if (x = 10)  ← 這會把 x 設為 10，而且條件永遠為 true
    
    // ✅ 正確：用 == 做比較
    if (x == 5) {
        printf("x 等於 5 (正確使用 ==)\n");
    }
    
    // 防禦性寫法：常數放左邊
    if (5 == x) {
        printf("常數放左邊，不小心寫成 = 會編譯錯誤\n");
    }
    printf("\n");
    
    // ============================================================
    // 範例 5：溢位問題
    // ============================================================
    
    printf("=== 範例 5：溢位 ===\n");
    
    // int 的最大值約 21 億
    int big = 2000000000;
    printf("big = %d\n", big);
    printf("big + big = %d (溢位了！)\n", big + big);
    
    // 解決：用 long
    long big_long = 2000000000L;
    printf("用 long: %ld + %ld = %ld\n", big_long, big_long, big_long + big_long);
    printf("\n");
    
    // ============================================================
    // 除錯技巧總結
    // ============================================================
    
    printf("=== 除錯技巧 ===\n");
    printf("1. 整數除法：至少一邊用浮點數\n");
    printf("2. 優先順序：不確定就加括號\n");
    printf("3. = vs ==：比較用雙等號\n");
    printf("4. 型態轉換：注意轉換的位置\n");
    printf("5. 溢位：大數字用 long\n");
    
    return 0;
}
