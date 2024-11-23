cmake_minimum_required(VERSION 3.13)
project(FFT)


include_directories(.)
aux_source_directory(. SRC)
add_executable(fft   ${SRC}) 

