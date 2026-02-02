# C 語言常見錯誤彙整

這份文件收集了初學者最常犯的錯誤，以及如何避免它們。

---

## 1. 編譯錯誤 (Compile Errors)

### 1.1 忘記分號

```c
// ❌ 錯誤
int x = 5
printf("%d", x);

// ✅ 正確
int x = 5;
printf("%d", x);
```

**錯誤訊息**：`expected ';' before 'printf'`

---

### 1.2 字串引號不對稱

```c
// ❌ 錯誤
printf("Hello\n);

// ✅ 正確
printf("Hello\n");
```

**錯誤訊息**：`missing terminating " character`

---

### 1.3 括號不對稱

```c
// ❌ 錯誤
printf("Hello\n";

// ✅ 正確
printf("Hello\n");
```

**錯誤訊息**：`expected ')' before ';'`

---

### 1.4 使用未宣告的變數

```c
// ❌ 錯誤
printf("%d", y);  // y 沒有宣告

// ✅ 正確
int y = 10;
printf("%d", y);
```

**錯誤訊息**：`'y' undeclared`

---

### 1.5 大小寫錯誤

```c
// ❌ 錯誤
Printf("Hello\n");  // C 區分大小寫！
INT x = 5;

// ✅ 正確
printf("Hello\n");
int x = 5;
```

---

## 2. 執行錯誤 (Runtime Errors)

### 2.1 除以零

```c
// ❌ 危險
int a = 10;
int b = 0;
int result = a / b;  // 程式會崩潰！

// ✅ 正確
int a = 10;
int b = 0;
if (b != 0) {
    int result = a / b;
}
```

---

### 2.2 陣列越界

```c
// ❌ 危險
int arr[5] = {1, 2, 3, 4, 5};
printf("%d", arr[5]);  // 索引 0-4 才有效！

// ✅ 正確
printf("%d", arr[4]);  // 最後一個元素
```

---

### 2.3 無窮迴圈

```c
// ❌ 危險：忘記更新迴圈變數
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    // 忘記 i++，迴圈永遠不會結束！
}

// ✅ 正確
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}
```

---

## 3. 邏輯錯誤 (Logic Errors)

### 3.1 = vs ==

```c
// ❌ 錯誤：這是賦值，不是比較！
if (x = 5) {  // 這永遠是 true
    printf("x is 5\n");
}

// ✅ 正確
if (x == 5) {
    printf("x is 5\n");
}
```

---

### 3.2 整數除法

```c
// ❌ 結果可能不如預期
int a = 5;
int b = 2;
double result = a / b;  // result 是 2.0，不是 2.5！

// ✅ 正確
double result = (double)a / b;  // result 是 2.5
```

---

### 3.3 Off-by-one 錯誤

```c
// ❌ 常見錯誤
for (int i = 0; i <= 10; i++) {  // 執行 11 次！
    // ...
}

// ✅ 通常想要的是
for (int i = 0; i < 10; i++) {  // 執行 10 次
    // ...
}
```

---

### 3.4 未初始化的變數

```c
// ❌ 危險：sum 的初始值是垃圾！
int sum;
for (int i = 0; i < 10; i++) {
    sum += i;
}

// ✅ 正確
int sum = 0;  // 一定要初始化！
for (int i = 0; i < 10; i++) {
    sum += i;
}
```

---

### 3.5 懸空 else

```c
// ❌ 容易誤解
if (a > 0)
    if (b > 0)
        printf("a 和 b 都是正數\n");
else
    printf("這個 else 配對到哪個 if？\n");  // 配對到內層！

// ✅ 正確：使用大括號讓意圖清楚
if (a > 0) {
    if (b > 0) {
        printf("a 和 b 都是正數\n");
    }
} else {
    printf("a 不是正數\n");
}
```

---

## 4. 格式化錯誤

### 4.1 printf 格式不匹配

```c
// ❌ 危險
int x = 42;
printf("%f\n", x);  // 用 %f 印整數

double y = 3.14;
printf("%d\n", y);  // 用 %d 印浮點數

// ✅ 正確
printf("%d\n", x);   // 整數用 %d
printf("%f\n", y);   // 浮點數用 %f
```

| 格式 | 用途 |
|-----|------|
| %d | int |
| %f | float, double |
| %c | char |
| %s | 字串 |
| %p | 指標 |
| %ld | long |
| %lf | double (scanf) |

---

### 4.2 scanf 忘記 &

```c
// ❌ 錯誤
int x;
scanf("%d", x);  // 少了 &

// ✅ 正確
int x;
scanf("%d", &x);  // & 取得位址
```

---

## 5. 自我檢查清單

在提交程式前，檢查以下項目：

- [ ] 所有敘述都有分號結尾
- [ ] 所有括號都有配對
- [ ] 所有變數都有初始化
- [ ] 迴圈條件會終止
- [ ] 陣列索引沒有越界
- [ ] 使用 == 做比較，不是 =
- [ ] printf 格式與變數型態匹配
- [ ] scanf 有使用 & 取址

---

## 6. 如何讀編譯錯誤訊息

```
buggy.c:10:5: error: expected ';' before 'printf'
   10 |     printf("Hello\n");
      |     ^~~~~~
```

解讀：
- `buggy.c` - 檔案名稱
- `10` - 行號
- `5` - 第幾個字元
- `error` - 錯誤（必須修正）
- `expected ';'` - 缺少分號
- `before 'printf'` - 在 printf 之前

**提示**：錯誤通常在「之前」那一行！
