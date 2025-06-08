import platform
import subprocess
import re

def get_motherboard_info():
    system = platform.system()
    try:
        if system == "Windows":
            # 使用 wmic 命令获取主板信息
            result = subprocess.check_output(
                "wmic baseboard get product,Manufacturer",
                shell=True,
                text=True
            )
            # 提取制造商和型号信息
            lines = result.strip().split('\n')[1:]  # 跳过标题行
            info = [line.strip() for line in lines if line.strip()]
            return " ".join(info) if info else "未知"
            
        elif system == "Linux":
            # 尝试多种方法获取主板信息
            try:
                # dmidecode 方法（需要 root 权限）
                result = subprocess.check_output(
                    "dmidecode -t baseboard | grep -E 'Manufacturer|Product'",
                    shell=True,
                    text=True,
                    stderr=subprocess.DEVNULL
                )
                return re.sub(r'.*:', '', result).strip()
            except:
                # lshw 方法（需要安装 lshw）
                result = subprocess.check_output(
                    "lshw -c system | grep -i 'product\|vendor'",
                    shell=True,
                    text=True,
                    stderr=subprocess.DEVNULL
                )
                return re.sub(r'.*: ', '', result).strip()
        elif system == "Darwin":  # macOS
            # 使用 system_profiler 命令
            result = subprocess.check_output(
                "system_profiler SPHardwareDataType | grep -i 'Model Name\|Manufacturer'",
                shell=True,
                text=True
            )
            return re.sub(r'.*: ', '', result).strip()
        else:
            return "不支持的操作系统"
    except Exception as e:
        return f"获取失败: {str(e)}"

if __name__ == "__main__":
    print("主板信息:", get_motherboard_info())