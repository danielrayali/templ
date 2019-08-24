add_library (templ-lib SHARED hello_sayer.cc)
set_target_properties (templ-lib PROPERTIES OUTPUT_NAME templ)
target_include_directories (templ-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
install(TARGETS templ-lib
    COMPONENT libtempl
    LIBRARY DESTINATION "/usr/local/lib/"
    DESTINATION "/usr/local/lib/"
)
