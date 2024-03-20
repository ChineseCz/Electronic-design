电子设计竞赛——智能送药小车开源
=========
本项目用于记录2021年电子设计竞赛-智能送药小车组的三天三夜奋斗
## 内容列表

- [背景](##背景)
- [安装](##安装)
- [使用说明](##使用说明)
- [相关链接](##示例)

## 背景
项目起源于2021年电子设计竞赛-智能送药小车组，基本要求：在指定赛道，自制小车，识别数字，送达指定位置。
本人负责软件开发，具体为小车的图像识别与路线控制，队友负责硬件开发。
> 具体赛题(引用)：[https://starstudio.feishu.cn/docx/Kp5LdWR0xoQT9Lxa55Rchz2pnKh?from=from_copylink](https://wusiyuan.blog.csdn.net/article/details/121174097)


## 安装
下载安装Git克隆本项目到本地后，使用AURIX Development Studio编译后，使用DAPminiWiggler烧录到TC377芯片中。

## 使用说明
主要源码目录简介：
```
-Design_test
  |- code                          各模块功能
      |- Flash                     芯片断电保存数据
      |- ICM                       陀螺仪读取姿态
      |- Menu                      OLED交互菜单
      |- PCI                       外设控制(电机、编码器、摄像头、药品检测器)
      |- PID                       PID控制
      |- UART                      串口通讯
  |- USER                          主程序、定时器并行调度
  |- Libraries                     项目依赖配置、开源库
```

## 相关链接(个人赛后总结)

CSDN：https://blog.csdn.net/weixin_45845008/article/details/121680588?spm=1001.2014.3001.5501
