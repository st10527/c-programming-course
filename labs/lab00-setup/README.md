# Lab 00: 環境建置與測試

## 🎯 目標

1. 確認開發環境正常運作
2. 熟悉 GitHub Classroom 作業流程
3. 成功編譯並執行第一個 C 程式

## 📋 作業說明

### Part 1: 完成 Hello World (40%)

修改 `src/hello.c`，讓程式輸出以下內容：

```
Hello, C Programming!
My name is [你的名字]
```

### Part 2: 環境檢查 (30%)

執行 `check_env.sh` 腳本，確認你的開發環境設定正確：

```bash
chmod +x check_env.sh
./check_env.sh
```

將輸出結果複製到 `env_report.txt` 中。

### Part 3: 問答題 (30%)

在 `answers.md` 中回答以下問題：

1. 你使用的作業系統是什麼？
2. 你的 GCC 版本是多少？
3. `#include <stdio.h>` 這行的作用是什麼？
4. `printf` 函式的功能是什麼？
5. 為什麼程式最後要寫 `return 0;`？

## 📁 檔案結構

```
lab00-setup/
├── README.md           # 本說明文件
├── src/
│   └── hello.c         # 需要完成的程式
├── check_env.sh        # 環境檢查腳本
├── env_report.txt      # 環境報告（需填寫）
├── answers.md          # 問答題（需填寫）
└── .github/
    └── workflows/
        └── classroom.yml
```

## 🔧 編譯與執行

```bash
# 編譯
gcc src/hello.c -o hello

# 執行
./hello
```

## ✅ 評分標準

| 項目 | 配分 | 說明 |
|-----|-----|------|
| hello.c 正確輸出 | 40% | 自動測試 |
| 環境報告完整 | 30% | 包含必要資訊 |
| 問答題正確 | 30% | 答案合理完整 |

## ⚠️ 注意事項

- 請確保程式可以在標準 Linux 環境下編譯
- 輸出格式必須完全符合要求（包含換行）
- 問答題請用自己的話回答，不要複製貼上

## 🤖 AI 使用規範

本作業允許使用 AI 工具輔助：
- ✅ 可以用 AI 解釋錯誤訊息
- ✅ 可以用 AI 學習概念
- ⚠️ 問答題請理解後用自己的話回答
