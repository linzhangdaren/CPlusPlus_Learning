#导入pygame库
import pygame
#初始化pygame
pygame.init()
#设置窗口大小
screen_width=640
screen_height=480
screen=pygame.display.set_mode((screen_width,screen_height))

#设置窗口标题
pygame.display.set_caption("飞机大战 v1.0")
#加载窗口图标
icon_image=pygame.image.load("plane.png")
#设置窗口图标
pygame.display.set_icon(icon_image)

#设置背景颜色
background_color=(128,128,128)

#准备图片只加载不显示
plane_image = pygame.image.load("plane.png")
piw=250#图片宽度
pih=300#图片高度
plane_image = pygame.transform.scale(plane_image, (piw,pih))
plane_location=(screen_width/2-piw/2,screen_height/1.5-pih/2)


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
    screen.fill(background_color)

    #绘制图片
    screen.blit(plane_image,(plane_location))
    #刷新界面
    pygame.display.flip()