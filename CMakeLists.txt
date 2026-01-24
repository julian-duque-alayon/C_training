cmake_minimum_required(VERSION 3.10)
project(C_Training_Workspace LANGUAGES C)

# Configuración global de C (evita repetir esto en cada subdirectorio)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Flags de compilación comunes
if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# Agregar subdirectorios como proyectos
add_subdirectory(Formatted_Input_Output)
add_subdirectory(bitwise_operators)
add_subdirectory(Dynamic_Storage_Allocation)
add_subdirectory(Pointers)
add_subdirectory(threads)

