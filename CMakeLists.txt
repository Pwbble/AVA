cmake_minimum_required(VERSION 3.24)
project(AVA)

set(CMAKE_CXX_STANDARD 17)

add_executable(AVA source/Main.cpp source/program/SubProgram.h source/program/SubProgram.cpp source/program/programs/strongholdtriangulator/StrongholdTriangulator.cpp source/program/programs/strongholdtriangulator/StrongholdTriangulator.h source/program/programs/strongholdtriangulator/Location.cpp source/program/programs/strongholdtriangulator/Location.h source/io/command/CommandExecutor.cpp source/io/command/CommandExecutor.h source/utilities/StringUtils.cpp source/utilities/StringUtils.h)
