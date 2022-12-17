cmake_minimum_required(VERSION 3.23)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 14)

project(Learn_CPP)

# 屏蔽 warning 报错信息，只保留 error
add_definitions(-w)

# ===========================================================================
# =========== CCACHE 加速编译  - sudo apt install ccache -====================
# ===========================================================================
find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif(CCACHE_FOUND)

# ===========================================================================
# =========================== 添加子目录  ====================================
# ===========================================================================
add_subdirectory(TEST_ENV)
add_subdirectory(01_C_Programming)
add_subdirectory(03_CPP)
add_subdirectory(04_Data_Structure)
