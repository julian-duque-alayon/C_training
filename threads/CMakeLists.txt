cmake_minimum_required(VERSION 3.10)

# 1. Nombre del proyecto dinámico según la carpeta
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJECT_NAME} VERSION 1.0 LANGUAGES C)

# 2. Configuración de C
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# 3. Flags de compilación robustos
if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# 4. Definir el ejecutable con el nombre del proyecto
add_executable(${PROJECT_NAME}
    src/main.c
)

# 5. Gestión de Includes
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 6. Flags específicos para Debug
target_compile_options(${PROJECT_NAME} PRIVATE $<$<CONFIG:Debug>:-g -O0>)