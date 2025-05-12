#1-100 [1,2,3...100] 变成[[1,2,3],[4,5,6]....]
#range(1,101)

#思路
'''
找出 索引
 0     3     6     9     12    15...
[a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z]

[
    [a,b,c],[d,e,f],[g,h,i]..
]
'''
list1=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
# #遍历索引
# index1=[i for i in range(len(list1)) if i%3==0]
# print(index1)#0,3,6...

# 切片
list2=[list1[i:i+3] for i in range(len(list1)) if i%3==0]
print(list2)