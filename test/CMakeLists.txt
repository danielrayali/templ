add_executable (templ-test test_main.cc)
target_link_libraries (templ-test LINK_PUBLIC templ-lib pthread)

