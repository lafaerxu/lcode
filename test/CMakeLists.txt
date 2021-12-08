file(GLOB LCODETEST "${PROJECT_SOURCE_DIR}/test/*test.cpp" "${PROJECT_SOURCE_DIR}/test/*/*test.cpp")
add_compile_options("-ggdb3")
add_custom_target(build-tests COMMAND ${CMAKE_CTEST_COMMAND} --show-only)
add_custom_target(check-tests COMMAND ${CMAKE_CTEST_COMMAND} --verbose)
foreach (lcode_test ${LCODETEST})
    get_filename_component(lcode_test_filename ${lcode_test} NAME)
    string(REPLACE ".cpp" "" lcode_test_name ${lcode_test_filename})

    add_executable(${lcode_test_name} EXCLUDE_FROM_ALL ${lcode_test})
    add_dependencies(build-tests ${lcode_test_name})
    add_dependencies(check-tests ${lcode_test_name})

    target_link_libraries(${lcode_test_name} lcode_shared lcode_ds gtest gmock_main)

    message("my_test=${lcode_test_name}")
    set_target_properties(${lcode_test_name}
            PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/test"
            COMMAND ${lcode_test_name}
            )
    add_test(${lcode_test_name}
            ${CMAKE_BINARY_DIR}/test/${lcode_test_name}
            --gtest_color=yes
            )
endforeach(lcode_test_source ${LCODETEST})