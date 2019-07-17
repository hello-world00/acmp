cmake_minimum_required(VERSION 3.14)
project(acmp)

set(CMAKE_CXX_STANDARD 17)

foreach(i RANGE 11)
    add_executable(task_${i} task_${i}/main.cxx task_11/main.cxx)
endforeach(i)