fun main() {
    // 变量类型在后面  默认不用写,自动识别的 val x: Int = 10不用写Int
    // 可变: var x: Int = 10 (类似read)
    // 只读: val x: Int = 10 (类似lock)

    val a = 10
    // a = 20 // 编译错误，不能修改锁定变量
    var b = 20
    var c = a + b
    print(c)
}
