# Create the maths_test and link
add_executable(maths_test maths_test.c)
target_link_libraries(maths_test m maths criterion)

add_test(
	NAME maths_test
	COMMAND maths_test
)