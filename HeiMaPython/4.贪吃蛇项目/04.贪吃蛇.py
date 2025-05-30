'''
1准备pygame开发环境窗口标题
    a.准备背景图
    b.准备蛇头
2.while循环
    a.处理用户输入事件
    b.处理游戏逻辑
    c.渲染界面
    d.设置帧率
'''

#导入pygame库
import pygame
#初始化pygame
pygame.init()
#设置窗口大小
screen_width=640#窗口宽度
screen_height=480#窗口高度
screen=pygame.display.set_mode((screen_width,screen_height))
#设置窗口标题
pygame.display.set_caption("贪吃蛇")
#设置窗口图标
icon=pygame.image.load("plane.png")
#加载图标
pygame.display.set_icon(icon)
#设置帧率
clock=pygame.time.Clock()
#设置背景颜色
color_bg=(128,128,128)
#设置线颜色
color_line=(180,180,180)
#设置蛇头颜色
color_head=(255,255,255)
#设置方块大小
block_size=20
#设置食物颜色
color_food=(255,0,0)


#循环窗口固定住
while True:
    #a.处理用户输入事件============================================
    for event in pygame.event.get():#判断事件是否为退出事件        
        if event.type==pygame.QUIT:#退出游戏            
            pygame.quit()# exit()
        #判断事件是否为按键按下事件
        elif event.type==pygame.KEYDOWN:
            print("按键按下",event.key)#测试按键            
            if event.key==pygame.K_UP:
                print("上")
            elif event.key==pygame.K_DOWN:
                print("下")
            elif event.key==pygame.K_LEFT:
                print("左")
            elif event.key==pygame.K_RIGHT:
                print("右")
            elif event.key==pygame.K_ESCAPE:
                pygame.quit()#退出游戏
                # exit()
                
    # b.处理游戏逻辑========================================================
    
    
    
    # c.渲染界面=========================================================
    screen.fill(color_bg)#RGB填充颜色
    #画线
    #参数分别为:画到屏幕,颜色,起点坐标,终点坐标,线宽
    for y in range(0,screen_height,block_size):#画横线
        pygame.draw.line(screen,color_line,(0,y),(screen_width,y),1)
    for x in range(0,screen_width,block_size):#画竖线
        pygame.draw.line(screen,color_line,(x,0),(x,screen_height),1)
    #画蛇头 参数为:画到屏幕,颜色,矩形坐标,矩形大小,边框圆角
    pygame.draw.rect(screen,color_head,(5*block_size,3*block_size,block_size,block_size),border_radius=6)
    pygame.draw.rect(screen,color_head,(4*block_size,3*block_size,block_size,block_size),border_radius=6)
    pygame.draw.rect(screen,color_head,(3*block_size,3*block_size,block_size,block_size),border_radius=6)
    #画食物
    pygame.draw.rect(screen,color_food,(10*block_size,5*block_size,block_size,block_size),border_radius=5)
    
    
    
    
    pygame.display.flip()#刷新窗口
    #绘制蛇身体
    # d.设置帧率===========================================================
    clock.tick(60)    
    # print(clock.get_fps())#显示帧率
