add_executable (templ-bin templ.cc)
set_target_properties (templ-bin PROPERTIES OUTPUT_NAME templ)
target_link_libraries (templ-bin LINK_PUBLIC templ-lib pthread)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/local/lib")
install(TARGETS templ-bin
    COMPONENT templ
    RUNTIME DESTINATION "/usr/local/bin/"
    DESTINATION "/usr/local/bin/"
)
