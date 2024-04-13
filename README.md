# 机器人项目

## 项目环境及依赖

### 代码环境

- vscode
  - 代码编辑器
- PlatformIO
  - Arduino项目管理插件
- Wokwi Simulator
  - 开发板模拟插件
  - 使用方法
    - 在[Wokwi在线编辑器](https://wokwi.com/)中编辑需要模拟的电子元件
    - 将diagram.json导入本地
    - 先用PlatformIO build项目,生成固件
    - 再启动模拟器
      - 可以按F1或者Alt+Shift+P调出命令接口输入```Wokwi: Start Simulator```
      - 也可以打开```diagram.json```文件,在```diagram.json```的UI里运行模拟器

### Arduino依赖

见platformio.ini
