#网络之间的通讯都是需要二进制
#需要转换为bytes类型才能发送 .encode()编码 
#接收到二进制数据后需要解码 .decode()解码


# /////////字符编码/////////////

#默认编码为utf-8 
bytes_str="大".encode()
print(bytes_str,type(bytes_str))

#GBK编码
gbk_str="大".encode("GBK")#完整写法:encode("GBK",errors="ignore")
print(gbk_str,type(gbk_str))
# b'\xe5\xa4\xa7' <class 'bytes'>   utf-8编码三个字节
# b'\xb4\xf3' <class 'bytes'>       GBK编码两个字节

# /////////////字符串解码///////////

rst=bytes_str.decode(encoding="utf-8")
ret2=gbk_str.decode(encoding="GBK")
print(rst,type(rst))
print(ret2,type(ret2))
#如果出现乱码那说明编码选错了

