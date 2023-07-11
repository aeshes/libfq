find_package(GTest REQUIRED)

add_executable(tests test_misc.cpp)

target_include_directories(tests
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/../src/include
)

target_link_libraries(tests GTest::GTest GTest::Main)

add_test(tests tests)
