cmake_minimum_required(VERSION 3.28)

add_executable(UserModule)

target_sources(
    UserModule
    PUBLIC
    FILE_SET CXX_MODULES FILES
    "user_module_interface.ixx"
)

set_target_properties(
	UserModule
	PROPERTIES
	CXX_STANDARD 23
	CXX_STANDARD_REQUIRED ON
)

target_link_libraries(
	UserModule
	PUBLIC
	BaseModule
)
