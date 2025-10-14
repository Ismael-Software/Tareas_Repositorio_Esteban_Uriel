cmake_minimum_required(VERSION 4.0)
project(Fundamentos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Fundamentos
        .idea/.gitignore
        .idea/editor.xml
        .idea/vcs.xml
        .idea/workspace.xml
        "Matriz pregunta autorelleno.cpp"
        "Matriz pregunta.cpp"
        prueba.c
)
