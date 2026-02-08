/**
 * call_stack.c - Call Stack 與 Stack Frame 示範
 * 
 * 這個程式用來理解函式呼叫時記憶體的變化。
 * 透過印出變數的位址，觀察 Stack Frame 的配置。
 * 
 * 編譯：gcc call_stack.c -o call_stack
 * 執行：./call_stack
 */

#include <stdio.h>

// ============================================================
// 函式宣告
// ============================================================

int multiply(int x, int y);
int compute(int a, int b);
void show_scope(void);

// ============================================================
// 主程式
// ============================================================

int main() {
    // --------------------------------------------------------
    // 範例 1：基本函式呼叫追蹤
    // --------------------------------------------------------
    
    printf("=== 範例 1：基本呼叫追蹤 ===\n");
    
    /*
     * 執行追蹤：
     * 1. main 開始，a=3, b=4
     * 2. 呼叫 multiply(3, 4)
     * 3. multiply 的 x=3, y=4, result=12
     * 4. multiply 回傳 12
     * 5. main 的 c = 12
     */
    
    int a = 3, b = 4;
    printf("main: a=%d, b=%d\n", a, b);
    
    int c = multiply(a, b);
    printf("main: c = multiply(%d, %d) = %d\n", a, b, c);
    printf("\n");
    
    // --------------------------------------------------------
    // 範例 2：多層呼叫追蹤
    // --------------------------------------------------------
    
    printf("=== 範例 2：多層呼叫追蹤 ===\n");
    
    /*
     * Call Stack 變化：
     * 
     * 1. main() 呼叫 compute(3, 4)
     * 
     * ┌──────────────┐
     * │ compute()    │
     * │ a=3, b=4     │
     * ├──────────────┤
     * │ main()       │
     * │ a=3, b=4     │
     * └──────────────┘
     * 
     * 2. compute() 呼叫 multiply(3, 4)
     * 
     * ┌──────────────┐
     * │ multiply()   │
     * │ x=3, y=4     │
     * ├──────────────┤
     * │ compute()    │
     * │ a=3, b=4     │
     * ├──────────────┤
     * │ main()       │
     * │ a=3, b=4     │
     * └──────────────┘
     * 
     * 3. multiply 回傳 → compute 回傳 → 回到 main
     */
    
    int result = compute(3, 4);
    printf("main: compute(3, 4) = %d\n", result);
    printf("\n");
    
    // --------------------------------------------------------
    // 範例 3：區域變數的獨立性
    // --------------------------------------------------------
    
    printf("=== 範例 3：區域變數獨立性 ===\n");
    show_scope();
    printf("\n");
    
    // --------------------------------------------------------
    // 範例 4：觀察 Stack 位址
    // --------------------------------------------------------
    
    printf("=== 範例 4：Stack 位址觀察 ===\n");
    
    int local_var = 42;
    printf("main 的區域變數位址: %p\n", (void*)&local_var);
    
    // 呼叫 multiply 時，它的區域變數位址會更高（或更低）
    multiply(10, 20);
    
    return 0;
}

// ============================================================
// 函式定義
// ============================================================

int multiply(int x, int y) {
    int result = x * y;
    
    // 印出區域變數位址，觀察 Stack Frame
    printf("  multiply: x=%d (位址:%p), y=%d, result=%d\n",
           x, (void*)&x, y, result);
    
    return result;
}

/**
 * compute: 呼叫 multiply 來計算
 * 這展示了多層函式呼叫
 */
int compute(int a, int b) {
    printf("  compute: 準備呼叫 multiply(%d, %d)\n", a, b);
    
    int product = multiply(a, b);
    int sum = a + b;
    int final_result = product + sum;
    
    printf("  compute: %d * %d + %d + %d = %d\n",
           a, b, a, b, final_result);
    
    return final_result;
}

/**
 * 展示不同函式中同名變數是獨立的
 */
void show_scope(void) {
    int x = 100;  // 這個 x 和 main 裡的 a 無關
    printf("show_scope 的 x = %d\n", x);
    printf("這個 x 只存在於 show_scope 的 Stack Frame 中\n");
    printf("函式結束後就消失了\n");
}
