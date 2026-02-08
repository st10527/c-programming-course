/**
 * recursion_trace.c - 遞迴追蹤示範
 * 
 * 這個程式在遞迴函式中加入追蹤輸出，
 * 幫助理解遞迴的執行過程。
 * 
 * 編譯：gcc recursion_trace.c -o recursion_trace
 * 執行：./recursion_trace
 */

#include <stdio.h>

// ============================================================
// 函式宣告
// ============================================================

int factorial_trace(int n, int depth);
int fib_trace(int n, int depth);
void print_indent(int depth);

// ============================================================
// 主程式
// ============================================================

int main() {
    // --------------------------------------------------------
    // 追蹤階乘
    // --------------------------------------------------------
    
    printf("=== 追蹤 factorial(5) ===\n\n");
    int result = factorial_trace(5, 0);
    printf("\n最終結果: 5! = %d\n\n", result);
    
    // --------------------------------------------------------
    // 追蹤費波那契
    // --------------------------------------------------------
    
    printf("=== 追蹤 fib(5) ===\n\n");
    int fib_result = fib_trace(5, 0);
    printf("\n最終結果: fib(5) = %d\n\n", fib_result);
    
    // --------------------------------------------------------
    // 呼叫樹圖示
    // --------------------------------------------------------
    
    printf("=== 遞迴呼叫樹（手動畫） ===\n\n");
    
    printf("factorial(4) 的呼叫樹：\n");
    printf("factorial(4)\n");
    printf("└── 4 * factorial(3)\n");
    printf("    └── 3 * factorial(2)\n");
    printf("        └── 2 * factorial(1)\n");
    printf("            └── return 1\n");
    printf("        └── return 2 * 1 = 2\n");
    printf("    └── return 3 * 2 = 6\n");
    printf("└── return 4 * 6 = 24\n");
    printf("\n");
    
    printf("fib(4) 的呼叫樹：\n");
    printf("fib(4)\n");
    printf("├── fib(3)\n");
    printf("│   ├── fib(2)\n");
    printf("│   │   ├── fib(1) → 1\n");
    printf("│   │   └── fib(0) → 0\n");
    printf("│   │   → return 1\n");
    printf("│   └── fib(1) → 1\n");
    printf("│   → return 2\n");
    printf("└── fib(2)\n");
    printf("    ├── fib(1) → 1\n");
    printf("    └── fib(0) → 0\n");
    printf("    → return 1\n");
    printf("→ return 3\n");
    
    return 0;
}

// ============================================================
// 輔助函式
// ============================================================

/**
 * 印出縮排（用來視覺化呼叫深度）
 */
void print_indent(int depth) {
    for (int i = 0; i < depth; i++) {
        printf("  ");
    }
}

// ============================================================
// 帶追蹤的遞迴函式
// ============================================================

/**
 * 階乘 - 帶追蹤輸出
 */
int factorial_trace(int n, int depth) {
    print_indent(depth);
    printf("呼叫 factorial(%d)\n", n);
    
    if (n <= 1) {
        print_indent(depth);
        printf("→ 基礎情況: return 1\n");
        return 1;
    }
    
    int sub_result = factorial_trace(n - 1, depth + 1);
    int result = n * sub_result;
    
    print_indent(depth);
    printf("→ return %d * %d = %d\n", n, sub_result, result);
    
    return result;
}

/**
 * 費波那契 - 帶追蹤輸出
 */
int fib_trace(int n, int depth) {
    print_indent(depth);
    printf("呼叫 fib(%d)\n", n);
    
    if (n <= 0) {
        print_indent(depth);
        printf("→ 基礎情況: return 0\n");
        return 0;
    }
    if (n == 1) {
        print_indent(depth);
        printf("→ 基礎情況: return 1\n");
        return 1;
    }
    
    int left = fib_trace(n - 1, depth + 1);
    int right = fib_trace(n - 2, depth + 1);
    int result = left + right;
    
    print_indent(depth);
    printf("→ return fib(%d) + fib(%d) = %d + %d = %d\n",
           n - 1, n - 2, left, right, result);
    
    return result;
}
