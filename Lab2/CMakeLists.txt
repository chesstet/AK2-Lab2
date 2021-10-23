project(PascalTriangle)

set(SOURCE_EXE main.cpp)

set(SOURCE_LIB pascalTri.cpp)

add_library(pascalTri STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main pascalTri)