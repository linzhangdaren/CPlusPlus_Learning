//更改终端标题文字
Console.Title = "ZPH";
Console.WriteLine("请看 ↑↑↑↑↑↑↑ 终端标题已改为ZPH");

// //设置终端宽度和高度 有问题跳过先
// Console.WindowWidth = 40;
// Console.WindowHeight = 40;

//设置终端背景色和前景色
Console.ForegroundColor = ConsoleColor.Red;
Console.BackgroundColor = ConsoleColor.DarkBlue;

//清屏
// Console.Clear();

//输出
Console.WriteLine("你好请问你叫什么?\n请输入你的名字");
//输入
Console.ReadLine();

//等待输入不关闭对话框
Console.Read();