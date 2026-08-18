import os
import glob
import concurrent.futures

# 指定要删除的文件路径模式
file_pattern = "C:\\fba*.json"

# 获取所有匹配的文件路径
file_list = glob.glob(file_pattern)


def delete_file(file_path):
    try:
        os.remove(file_path)
        print(f"已删除文件: {file_path}")
    except Exception as e:
        print(f"删除文件 {file_path} 时出错: {e}")


# 手动指定线程池大小
thread_count = 16  # 可以根据实际情况调整，这里设置为 16
with concurrent.futures.ThreadPoolExecutor(max_workers=thread_count) as executor:
    executor.map(delete_file, file_list)
