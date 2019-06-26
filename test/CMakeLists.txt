cmake_minimum_required(VERSION 3.7)
project(RichkwareTEST)

if (UNIX)
    set(CMAKE_CXX_COMPILER "x86_64-w64-mingw32-g++")
endif (UNIX)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

#target_link_libraries(tests Catch2::Catch2)

set(CMAKE_STATIC_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
#link_libraries(kernel32 user32 gdi32 winspool shell32 ole32 oleaut32 uuid comdlg32 advapi32 wsock32 ws2_32 rpcrt4 wininet)
link_libraries(ws2_32)

file(GLOB SOURCE_FILES *.cpp *.h main.cpp)

add_executable(Richkware ${SOURCE_FILES})