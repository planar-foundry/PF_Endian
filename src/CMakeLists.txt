add_library(PF_Endian INTERFACE)
target_include_directories(PF_Endian INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

INCLUDE(TestBigEndian)
TEST_BIG_ENDIAN(BIG_ENDIAN)

if (${BIG_ENDIAN})
    target_compile_definitions(PF_Endian PUBLIC "PFENDIAN_BIG_ENDIAN")
endif()
