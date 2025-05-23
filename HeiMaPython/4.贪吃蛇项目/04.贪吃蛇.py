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
#

#循环窗口固定住
while True:
    #获取事件
    for event in pygame.event.get():
        #判断事件是否为退出事件
        if event.type==pygame.QUIT:
            #退出游戏
            pygame.quit()
            # exit()
            
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
                #退出游戏
                pygame.quit()
                # exit()
                

    #填充背景色
    screen.fill((128,128,128))#RGB
    #设置帧率
    clock.tick(60)
    #显示帧率
    # print(clock.get_fps())
    #刷新界面
    pygame.display.flip()