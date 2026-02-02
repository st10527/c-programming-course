#!/bin/bash
# 環境檢查腳本

echo "=== 開發環境檢查 ==="
echo ""

echo "1. 作業系統資訊："
uname -a
echo ""

echo "2. GCC 版本："
gcc --version 2>/dev/null || echo "GCC 未安裝"
echo ""

echo "3. Git 版本："
git --version 2>/dev/null || echo "Git 未安裝"
echo ""

echo "4. 編譯測試："
if gcc src/hello.c -o hello_test 2>/dev/null; then
    echo "編譯成功！"
    rm -f hello_test
else
    echo "編譯失敗，請檢查環境設定"
fi
echo ""

echo "=== 檢查完成 ==="
