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
screen=pygame.display.set_mode((640,480))
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
color_line=(255,255,255)
#


#循环窗口固定住
while True:
    #a.处理用户输入事件
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
                
    # b.处理游戏逻辑
    
    # c.渲染界面
    screen.fill(color_bg)#RGB填充颜色
    #画线
    pygame.draw.line(screen,color_line,(0,0),(300,100),1)
    
    pygame.display.flip()#刷新窗口
    
    # d.设置帧率
    clock.tick(60)    
    # print(clock.get_fps())#显示帧率
