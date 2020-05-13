if (NOT TARGET PF_Test AND ${PFENDIAN_BUILD_TESTS})
    add_subdirectory(PF_Test)
endif()
