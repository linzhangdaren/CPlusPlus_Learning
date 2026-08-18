#家具类
class Item:
    def __init__(self,name,area):
        """家具类初始化
        :param name: 家具的名称
        :param area: 家具的占地面积
        """
        self.name=name
        self.area=area
    
    # def __str__(self):
    #     return f"__str__:家具的名称是:{self.name};占地面积是:{self.area}"
    def __repr__(self):
        return f"__repr__:家具的名称是:{self.name};占地面积是:{self.area}"#内嵌列表也能输出
        
#房子类        
class House:
    def __init__ (self,address,area):
        """房子类初始化
        :param address: 地址
        :param area: 房子的面积
        :param items: 房子的家具
        """
        self.address=address
        self.area=area
        self.free_area=area
        self.items=[]
        
    #添家具方法
    def add_item(self,item):
        """
        给房子添加家具:
        param item: 要添加的家具
        """
        if item.area>=self.free_area:
            print(f"{item.name}太大了,无法添加")
        else:
            self.items.append(item)
            self.free_area=self.free_area-item.area
            print(f"{item.name} 添加成功!")
            
        
    def __str__(self):
        return f"str:房子的地址是:{self.address};房子的面积是:{self.area};剩余面积是:{self.free_area}"

    
#创建一个房子对象
house=House("永宁花园",120)

#创建家具
床=Item("席梦思",40)
沙发=Item("沙发",10)
茶几=Item("茶几",70)

#添加家具
house.add_item(床)
house.add_item(沙发)
house.add_item(茶几)

#输出
# print (house,"家具个数:",len(house.items))
print (house.items)
print(house)