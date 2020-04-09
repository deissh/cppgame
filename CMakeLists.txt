cmake_minimum_required(VERSION 3.15)
project(cppgame)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake-build-debug/")

find_package(SDL2 REQUIRED)
find_package(SDL_TTF REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})


add_executable(cppgame Main.cpp src/Core.cpp src/Core.h src/SceneManager.cpp src/SceneManager.h src/Global.cpp src/Global.h src/Scenes/Menu.cpp src/Scenes/Menu.h src/helpers/DrawText.h src/helpers/DrawRect.h src/Scenes/Gameplay.cpp src/Scenes/Gameplay.h)
target_link_libraries(cppgame ${SDL2_LIBRARIES})

# copy dlls into build folder
# support both 32 and 64 bit builds
if (${CMAKE_SIZEOF_VOID_P} MATCHES 8)
    file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/lib/x64/
            DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
else ()
    file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/lib/x86/
            DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)
endif ()

# copy assets
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/assets/fonts/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)