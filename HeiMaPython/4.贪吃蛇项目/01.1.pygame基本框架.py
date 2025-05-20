#导入pygame库
import pygame
#初始化pygame
pygame.init()
#设置窗口大小
screen=pygame.display.set_mode((640,480))

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
            #判断按键是否为ESC
            if event.key==pygame.K_ESCAPE:
                #退出游戏
                pygame.quit()
                # exit()

    #填充背景色
    screen.fill((128,128,128))#RGB
    #刷新界面
    pygame.display.flip()