import QtQuick 2.15  // 导入 QtQuick 模块，用于创建基本的 QML 元素和属性
import QtQuick.Controls 2.15  // 导入 QtQuick.Controls 模块，用于使用 Qt 的控件（如按钮、窗口等）

ApplicationWindow {  // 定义应用窗口
    visible: true  // 设置窗口可见
    width: 640  // 设置窗口宽度为 640 像素
    height: 480  // 设置窗口高度为 480 像素
    title: qsTr("Hello World")  // 设置窗口标题，使用国际化函数 qsTr 以支持多语言

    Button {  // 定义一个按钮
        anchors.centerIn: parent  // 将按钮居中放置在父元素（窗口）中
        text: qsTr("Click Me")  // 设置按钮的文本，支持国际化
        onClicked: console.log("Button clicked!")  // 定义点击按钮时的行为，输出日志信息
    }
}
