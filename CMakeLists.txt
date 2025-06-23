cmake_minimum_required(VERSION 3.28)
project(T602Konvertilo C)

# Standard C99
set(CMAKE_C_STANDARD 99)

# Output folder for binary
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# Recursively collect all .c files from src/
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "src/*.c")

# Create executable target
add_executable(t602k ${SOURCES})

# Include folders (.h)
target_include_directories(t602k PRIVATE src)
