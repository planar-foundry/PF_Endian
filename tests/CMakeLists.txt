add_executable(PF_Endian_UnitTests
    main.cpp
    Test_BigEndian.cpp
    Test_LittleEndian.cpp)

target_link_libraries(PF_Endian_UnitTests PF_Endian PF_Test)
