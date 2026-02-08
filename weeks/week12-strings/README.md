# 第 12 週：字串

## 📋 本週大綱

| 課堂 | 主題 | 時長 |
|-----|------|-----|
| 講課 A | 字串基礎 | 2 hr |
| 講課 B | 安全議題 | 2 hr |
| 實驗課 | 字串練習 | 1 hr |

---

## 🎓 講課 A：字串基礎

### 簡報大綱

1. **字元與字串** (20 min)
   - 字元 `char`：單一字元，用單引號
   - 字串：字元的陣列，用雙引號
   - ASCII 編碼

2. **字串是字元陣列** (30 min)
   - 字串的宣告方式
   - 字串結尾 `'\0'`（Null Terminator）
   - 字串長度 vs 陣列大小

3. **字串輸入輸出** (25 min)
   - `printf` 與 `%s`
   - `scanf` 與 `%s`（不能讀空格）
   - `fgets`（可以讀空格，更安全）

4. **常用字串函式** (30 min)
   - `strlen()`：字串長度
   - `strcmp()`：字串比較
   - `strcpy()`：字串複製
   - `strcat()`：字串串接
   - 需要 `#include <string.h>`

5. **手動實作字串函式** (10 min)
   - 自己寫 strlen
   - 理解 `'\0'` 的重要性

6. **練習** (5 min)

### 關鍵程式碼片段

#### 片段 1：字串的本質
```c
// 以下兩行等價
char str1[] = "Hello";
char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

// str1 在記憶體中：
// ['H']['e']['l']['l']['o']['\0']
//   0    1    2    3    4    5
// 長度 5，但佔 6 bytes（多一個 '\0'）
```
> 完整範例：examples/strings.c

#### 片段 2：常用字串函式
```c
#include <string.h>

char name[50] = "Alice";
printf("長度: %lu\n", strlen(name));       // 5

char copy[50];
strcpy(copy, name);                        // 複製

if (strcmp(name, "Alice") == 0) {          // 比較
    printf("名字是 Alice\n");
}
```

---

## 🎓 講課 B：安全議題

### 簡報大綱

1. **Buffer Overflow** (30 min)
   - **重點：字串操作的危險**
   - 什麼是 Buffer Overflow
   - 為什麼很危險（安全漏洞）
   - 經典案例

2. **gets vs fgets** (20 min)
   - `gets()` 為什麼被禁用
   - `fgets()` 的安全用法
   - 永遠不要用 `gets()`

3. **strcpy vs strncpy** (25 min)
   - `strcpy()` 不檢查邊界
   - `strncpy()` 限制複製長度
   - `snprintf()` 安全的格式化

4. **安全的字串處理** (30 min)
   - 永遠檢查緩衝區大小
   - 使用帶有 n 的函式版本
   - 防禦性程式設計

5. **討論** (15 min)

### 關鍵程式碼片段

#### 片段 1：Buffer Overflow
```c
char buffer[10];

// ❌ 危險！如果輸入超過 9 個字元就會溢出
scanf("%s", buffer);

// ✅ 安全：限制讀取長度
fgets(buffer, sizeof(buffer), stdin);
```
> 完整範例：examples/string_safety.c

#### 片段 2：安全的字串操作
```c
char dest[10];

// ❌ 危險
strcpy(dest, very_long_string);  // 可能溢出！

// ✅ 安全
strncpy(dest, very_long_string, sizeof(dest) - 1);
dest[sizeof(dest) - 1] = '\0';  // 確保結尾
```

---

## 🔬 實驗課：字串練習

**對應作業**：lab10-strings

### 實驗目標
1. 理解字串在記憶體中的表示
2. 使用常見字串函式
3. 了解字串操作的安全問題

### 實驗內容
1. 字串操作練習
2. 安全問題實驗
3. 字串函式實作

---

## ✅ 本週學習檢核

學完本週後，你應該能夠：

- [ ] 解釋字串在記憶體中的表示方式
- [ ] 使用 strlen、strcmp、strcpy、strcat
- [ ] 使用 fgets 安全地讀取字串
- [ ] 說明 Buffer Overflow 的危險
- [ ] 使用帶有 n 的安全函式版本
- [ ] 手動實作簡單的字串函式

---

## 📎 常見問題

**Q: 字串可以用 `==` 比較嗎？**
A: 不行！`==` 比較的是位址，不是內容。要用 `strcmp()` 比較字串內容。

**Q: 為什麼字串最後要有 `'\0'`？**
A: 因為 C 語言需要知道字串在哪裡結束。所有字串函式都依賴 `'\0'` 來判斷字串長度。

**Q: `char *str = "Hello"` 和 `char str[] = "Hello"` 有什麼差別？**
A: `char *str` 指向一個字串常數（不能修改），`char str[]` 是一個陣列（可以修改）。
