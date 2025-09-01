@echo off
chcp 65001
setlocal enabledelayedexpansion

echo 正在提交到 Git...
git add .
git commit -m "auto"
git push -u origin main
pause
