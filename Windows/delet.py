import os
import glob

# 指定要删除的文件路径模式
file_pattern = "C:\\fba*.json"

# 获取所有匹配的文件路径
file_list = glob.glob(file_pattern)

# 逐个删除文件
for file_path in file_list:
    try:
        os.remove(file_path)
        print(f"已删除文件: {file_path}")
    except Exception as e:
        print(f"删除文件 {file_path} 时出错: {e}")
