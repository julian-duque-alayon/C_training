# Usar el nombre de la carpeta como nombre del ejecutable
get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

# Find Threads package
find_package(Threads REQUIRED)

add_executable(${PROJECT_NAME}
    src/main.c
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Link against the Threads::Threads target which handles both -lpthread and -pthread
target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads)


# Flags específicos para Debug
target_compile_options(${PROJECT_NAME} PRIVATE $<$<CONFIG:Debug>:-g -O0>)