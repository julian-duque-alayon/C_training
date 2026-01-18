# Usar el nombre de la carpeta como nombre del ejecutable
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

add_executable(${PROJECT_NAME}
    src/main.c
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Flags específicos para Debug
target_compile_options(${PROJECT_NAME} PRIVATE $<$<CONFIG:Debug>:-g -O0>)