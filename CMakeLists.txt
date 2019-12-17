cmake_minimum_required(VERSION 3.15)
project(LeetCode)

set(CMAKE_LEGACY_CYGWIN_WIN32 0)


set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}
        mainTest.cpp

        RemoveDuplicatesFromSortedArray/RemoveDuplicatesFromSortedArray.cpp
        RemoveDuplicatesFromSortedArray/unittests.cpp

        RemoveLinkedListElements/RemoveLinkedListElements.cpp
        RemoveLinkedListElements/unittests.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/catch2)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/Common)