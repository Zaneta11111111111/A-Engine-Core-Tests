
cmake_minimum_required(VERSION 3.7.2)

project(A-Engine-tests)
enable_testing()


include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)





# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
set(BUILD_GTEST ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(test main.cc)
# message('CatchDirectory ${CMAKE_CURRENT_SOURCE_DIR}/lib/catch/')
# target_include_directories(test PUBLIC googletest)

target_include_directories(test PUBLIC core)
# Now simply link against gtest or gtest_main as needed. Eg
target_link_libraries(test gtest_main)
add_test(NAME test COMMAND exampleTest)

