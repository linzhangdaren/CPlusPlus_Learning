import numpy as np
from scipy.io.wavfile import write
import warnings

def generate_sine_wave(freq, duration, sample_rate=44100):
    """生成指定频率、时长的正弦波信号（int16格式）"""
    t = np.linspace(0, duration, int(duration * sample_rate), endpoint=False)
    signal = np.sin(freq * 2 * np.pi * t)  # 生成[-1, 1]的浮点信号
    # 转换为int16：乘以32767（int16的最大正值）并取整
    signal_int16 = (signal * 32767).astype(np.int16)
    return signal_int16

def save_wav(filename, sample_rate, signal):
    """保存WAV文件（带异常处理）"""
    try:
        write(filename, sample_rate, signal)
        print(f"文件已保存：{filename}")
    except Exception as e:
        warnings.warn(f"保存文件失败：{str(e)}")

if __name__ == "__main__":
    # 参数配置
    left_freq = 100       # 左声道频率（Hz）
    right_freq = 106      # 右声道频率（Hz）
    duration = 120        # 时长（秒）
    sample_rate = 44100   # 采样率（Hz，标准音频采样率）

    # 生成左右声道信号
    left_signal = generate_sine_wave(left_freq, duration, sample_rate)
    right_signal = generate_sine_wave(right_freq, duration, sample_rate)

    # 保存为单声道文件（原需求）
    save_wav('left.wav', sample_rate, left_signal)
    save_wav('right.wav', sample_rate, right_signal)

    # （可选）保存为立体声文件（左右声道合并）
    # stereo_signal = np.column_stack((left_signal, right_signal))
    # save_wav('stereo.wav', sample_rate, stereo_signal)
    