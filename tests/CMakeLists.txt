add_executable(PF_Endian_UnitTests
    main.cpp
    Test_BigEndian.cpp
    Test_LittleEndian.cpp)

target_link_libraries(PF_Endian_UnitTests PF_Endian PF_Test)

target_compile_options(PF_Endian_UnitTests PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
    $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -pedantic>)
