cmake_minimum_required(VERSION 3.28)

add_library(BaseModule)

target_sources(
    BaseModule
    PUBLIC
    FILE_SET CXX_MODULES FILES
    "base_module_interface.ixx"
)

set_target_properties(
	BaseModule
	PROPERTIES
	CXX_STANDARD 23
	CXX_STANDARD_REQUIRED ON
)
