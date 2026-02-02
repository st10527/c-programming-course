# 第 1 週：環境建置與程式思維

## 📋 本週大綱

| 課堂 | 主題 | 時長 |
|-----|------|-----|
| 講課 A | 課程介紹與程式思維 | 2 hr |
| 講課 B | 開發環境建置 | 2 hr |
| 實驗課 | 環境測試 | 1 hr |

---

## 🎓 講課 A：課程介紹與程式思維

### 簡報大綱

1. **課程介紹** (20 min)
   - 課程目標
   - 評分方式
   - AI 使用規範

2. **為什麼學 C 語言？** (20 min)
   - C 語言的歷史地位
   - 誰還在用 C？（作業系統、嵌入式、遊戲引擎）
   - C 與其他語言的關係

3. **程式思維** (40 min)
   - 什麼是程式？
   - 演算法的概念
   - 用生活例子說明（食譜、組裝說明書）

4. **AI 時代的程式學習** (30 min)
   - AI 可以幫你寫程式，但...
   - 為什麼還要學？
   - 「程式語感」的重要性
   - 本課程的學習方法

5. **Q&A** (10 min)

### 關鍵程式碼片段

#### 片段 1：你的第一個 C 程式
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
> 完整範例：[examples/hello.c](examples/hello.c)

#### 片段 2：程式就是指令的集合
```c
// 這是一個簡單的計算程式
int a = 5;
int b = 3;
int sum = a + b;  // sum 現在是 8
```

### 課堂討論問題
1. 你覺得 AI 會取代程式設計師嗎？
2. 如果 AI 可以寫程式，為什麼我們還要學？
3. 你覺得什麼是「好的程式碼」？

---

## 🎓 講課 B：開發環境建置

### 簡報大綱

1. **編譯原理簡介** (20 min)
   - 原始碼 → 機器碼
   - 編譯 vs 直譯
   - 編譯的四個階段

2. **工具安裝** (40 min)
   - VS Code 安裝
   - macOS: Xcode Command Line Tools
   - Windows: MinGW-w64
   - 驗證安裝

3. **Git 基礎** (30 min)
   - 版本控制是什麼
   - Git 基本操作
   - GitHub 帳號設定

4. **GitHub Classroom** (20 min)
   - 如何接受作業
   - 如何提交
   - 自動評分說明

5. **實機演練** (10 min)

### 關鍵程式碼片段

#### 片段 1：編譯指令
```bash
# 編譯 hello.c 產生執行檔
gcc hello.c -o hello

# 執行程式
./hello
```

#### 片段 2：Git 基本操作
```bash
# 複製作業
git clone <作業網址>

# 完成後提交
git add .
git commit -m "完成作業"
git push
```

### 安裝檢查清單
- [ ] VS Code 已安裝
- [ ] 能在終端機執行 `gcc --version`
- [ ] 能在終端機執行 `git --version`
- [ ] GitHub 帳號已建立
- [ ] 已加入 GitHub Classroom

---

## 🔬 實驗課：環境測試

**對應作業**：[lab00-setup](../../labs/lab00-setup/)

### 實驗目標
1. 確認開發環境正常運作
2. 熟悉 GitHub Classroom 作業流程
3. 成功編譯並執行第一個程式

### 實驗步驟
1. 接受 GitHub Classroom 作業邀請
2. Clone 作業到本機
3. 完成 `hello.c`
4. 編譯並測試
5. Push 提交

---

## ✅ 本週學習檢核

學完本週後，你應該能夠：

- [ ] 說明為什麼要學 C 語言
- [ ] 解釋程式編譯的基本流程
- [ ] 使用 VS Code 編輯程式碼
- [ ] 使用終端機編譯和執行 C 程式
- [ ] 使用 Git 提交作業到 GitHub

---

## 📎 相關資源

- [VS Code 下載](https://code.visualstudio.com/)
- [Git 下載](https://git-scm.com/)
- [GitHub 學生方案](https://education.github.com/pack)
