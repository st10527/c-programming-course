# Lab 02: 變數與記憶體

## 🎯 目標

1. 熟悉不同資料型態的使用
2. 理解變數在記憶體中的表示
3. 練習手動追蹤變數值變化

## 📋 作業說明

### Part 1: 資料型態選擇 (30%)

閱讀 `src/types.c` 中的情境，選擇最適合的資料型態。

### Part 2: 變數追蹤 (40%)

閱讀 `src/trace.c` 的程式碼，在 `trace_answers.md` 中完成追蹤表格。

**重要**：請先手動追蹤，不要先執行程式！

### Part 3: 記憶體觀察 (30%)

完成 `src/memory.c` 中的程式，觀察並回答 `memory_answers.md` 中的問題。

## 📁 檔案結構

```
lab02-variables/
├── README.md
├── src/
│   ├── types.c          # Part 1: 資料型態選擇
│   ├── trace.c          # Part 2: 變數追蹤
│   └── memory.c         # Part 3: 記憶體觀察
├── trace_answers.md     # Part 2 答案
├── memory_answers.md    # Part 3 答案
└── .github/
    └── workflows/
        └── classroom.yml
```

## 🔧 編譯與執行

```bash
gcc src/trace.c -o trace && ./trace
gcc src/memory.c -o memory && ./memory
```

## ✅ 評分標準

| 項目 | 配分 | 說明 |
|-----|-----|------|
| 資料型態選擇 | 30% | 選擇正確且有說明理由 |
| 變數追蹤 | 40% | 追蹤表格正確 |
| 記憶體觀察 | 30% | 程式正確且問答完整 |

## 🤖 AI 使用規範

- ✅ 可以用 AI 解釋資料型態的差異
- ⚠️ 追蹤練習請先自己完成，再用程式驗證
- ⚠️ 請用自己的話解釋記憶體觀察結果
