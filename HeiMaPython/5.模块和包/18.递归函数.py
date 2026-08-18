#自己调用自己的函数 拓展延伸 背包问题

#5的阶乘
#5*4*3*2*1=5!
def factorial(n):
    if n == 1:
        return 1
    else:
        return n * factorial(n-1)
    
print(factorial(5))