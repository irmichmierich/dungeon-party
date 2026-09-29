# D1: rules engine. Must stay free of networking and rendering dependencies.
add_library(dmp_engine
  src/GameState.cpp
)
target_include_directories(dmp_engine PUBLIC include)

add_executable(dmp_engine_tests
  tests/GameStateTest.cpp
)
target_link_libraries(dmp_engine_tests PRIVATE dmp_engine GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(dmp_engine_tests)
