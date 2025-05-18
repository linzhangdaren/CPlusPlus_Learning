#创建洗衣机类
class WashMachine:
    """_summary_
        类属性：品牌，容量
    """
    def __init__(self,品牌,容量):
        self.品牌=品牌
        self.容量=容量
        #门的状态
        self.门状态关=False#默认是开
        self.洗衣模式=0#0.未设置,1.轻柔,2.快速
        #转速
        self.转速=0#0.未设置,1.低速,2.中速
    
    #定义方法
    def 开门(self):
        self.门状态关=False
        print("洗衣机门打开")
        
    def 关门(self):
        self.门状态关=True
        print("洗衣机门关闭")

    def 设置洗衣模式(self,模式):
        if 模式 not in [1,2]:
            print("请输入正确的洗衣模式")
            return
        if 模式==1:
            self.洗衣模式=1
            self.转速=800
            print("洗衣模式设置为轻柔,转速为800rpm")
        if 模式==2:
            self.洗衣模式=2
            self.转速=1200
            print("洗衣模式设置为快速,转速为1200rpm")
            
    def 洗衣服(self):
        
        if self.洗衣模式==0:
            print("请先设置洗衣模式")
            return
        
        if not self.门状态关:#默认是开 开着门不能洗衣服!
            print("请先关闭洗衣机门")
            return
        
        
        print(f"开始洗衣服,洗衣模式为{self.洗衣模式},转速为{self.转速}rpm")



#创建对象
洗衣机=WashMachine("海尔",10)
洗衣机.开门()
洗衣机.设置洗衣模式(2)#1.轻柔,2.快速
洗衣机.关门()
洗衣机.洗衣服()
