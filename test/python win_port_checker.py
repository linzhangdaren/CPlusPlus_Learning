import subprocess
import sys
import re

def get_win_port_usage(port):
    """获取Windows系统指定端口的占用信息"""
    # 构造查询命令（netstat -ano 显示所有连接和端口占用，findstr过滤指定端口）
    cmd = f'netstat -ano | findstr ":{port} "'
    
    try:
        # 执行命令并获取输出（shell=True在Windows下需要）
        result = subprocess.run(
            cmd,
            shell=True,
            capture_output=True,
            text=True
        )
        output = result.stdout
        
        # 无输出表示端口未被占用
        if not output.strip():
            return f"端口 {port} 未被占用"

        # 解析netstat输出（Windows格式）
        parsed_info = []
        # 匹配TCP/UDP行的正则表达式（示例行: TCP    0.0.0.0:8080    0.0.0.0:0      LISTENING       12345）
        pattern = r'(TCP|UDP)\s+(\S+):(\d+)\s+(\S+):(\d+)\s+(\S+)\s+(\d+)'
        
        for line in output.split('\n'):
            line = line.strip()
            if not line:
                continue
            # 匹配TCP/UDP行
            match = re.search(pattern, line)
            if match:
                proto, local_ip, local_port, foreign_ip, foreign_port, state, pid = match.groups()
                parsed_info.append({
                    '协议': proto,
                    '本地地址': f'{local_ip}:{local_port}',
                    '外部地址': f'{foreign_ip}:{foreign_port}' if foreign_port != '0' else '无',
                    '状态': state if state != '0' else '无',
                    'PID': pid
                })
        return parsed_info

    except Exception as e:
        return f"发生错误: {str(e)}"

if __name__ == "__main__":
    try:
        port = input("请输入要查询的端口号(数字): ").strip()
        if not port.isdigit():
            print("错误: 请输入有效的数字端口号")
            sys.exit(1)
            
        result = get_win_port_usage(port)
        print(f"\n端口 {port} 占用检查结果:")
        
        if isinstance(result, list):
            if not result:
                print("端口未被占用")
                return
            # 打印表格标题
            print(f"{'协议':<5} | {'本地地址':<20} | {'外部地址':<20} | {'状态':<10} | {'PID':<6}")
            print("-" * 65)
            for item in result:
                print(f"{item['协议']:<5} | {item['本地地址']:<20} | {item['外部地址']:<20} | {item['状态']:<10} | {item['PID']:<6}")
        else:
            print(result)
            
        print("\n提示：可通过任务管理器（Ctrl+Shift+Esc）或命令行执行 'tasklist | findstr [PID]' 查看对应进程")
    except KeyboardInterrupt:
        print("\n操作已取消")
    except Exception as e:
        print(f"程序异常终止: {str(e)}")
    