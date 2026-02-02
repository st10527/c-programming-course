/**
 * compile_demo.c - 編譯流程示範
 * 
 * 這個程式用來示範編譯的不同階段：
 * 
 * 1. 預處理 (Preprocessing):
 *    gcc -E compile_demo.c -o compile_demo.i
 *    
 * 2. 編譯 (Compilation):
 *    gcc -S compile_demo.c -o compile_demo.s
 *    
 * 3. 組譯 (Assembly):
 *    gcc -c compile_demo.c -o compile_demo.o
 *    
 * 4. 連結 (Linking):
 *    gcc compile_demo.c -o compile_demo
 */

#include <stdio.h>

// 這是一個巨集，會在預處理階段被展開
#define GREETING "Hello from C!"

int main() {
    printf("%s\n", GREETING);
    return 0;
}
