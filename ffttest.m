% 打开文件
fid = fopen('C:\Users\28670\Desktop\C_fft\ffttest.txt', 'r');

% 初始化实部和虚部的数组
real_part = [];
imaginary_part = [];

% 逐行读取文件
tline = fgetl(fid);
while ischar(tline)
    % 使用正则表达式提取实部和虚部
    matches = regexp(tline, 'y\.re:(?<real_part>[-+]?\d+\.\d+),y\.im:(?<imaginary_part>[-+]?\d+\.\d+)i', 'names');
    
    % 如果匹配成功，将实部和虚部添加到数组
    if ~isempty(matches)
        real_part = [real_part, str2double(matches.real_part)];
        imaginary_part = [imaginary_part, str2double(matches.imaginary_part)];
    end
    
    % 读取下一行
    tline = fgetl(fid);
end

% 关闭文件
fclose(fid);

% 将实部和虚部组合成复数
complex_data = complex(real_part, imaginary_part);

% 绘制曲线图
plot(abs(complex_data), '-o');
xlabel('X轴标签');
ylabel('Y轴标签');
title('复数曲线图');
grid on;
legend('数据');
