#include <PF_Test/UnitTest.hpp>

#define PFENDIAN_BYTE_ORDER_BIG_ENDIAN
#include <PF_Endian/Endian.hpp>

#include <stdint.h>

PFTEST_CREATE(BigEndian)
{
    uint16_t uval16 = 1;
    int16_t val16 = 1;
    uint32_t uval32 = 1;
    int32_t val32 = 1;
    uint64_t uval64 = 1;
    int64_t val64 = 1;

    uint16_t uval16_swapped = PFENDIAN_SWAP_16(uval16);
    int16_t val16_swapped = PFENDIAN_SWAP_16(val16);
    uint32_t uval32_swapped = PFENDIAN_SWAP_32(uval32);
    int32_t val32_swapped = PFENDIAN_SWAP_32(val32);
    uint64_t uval64_swapped = PFENDIAN_SWAP_64(uval64);
    int64_t val64_swapped = PFENDIAN_SWAP_64(val64);

    PFTEST_EXPECT(PFENDIAN_SWAP_16(uval16_swapped) == uval16);
    PFTEST_EXPECT(PFENDIAN_SWAP_16(val16_swapped) == val16);
    PFTEST_EXPECT(PFENDIAN_SWAP_32(uval32_swapped) == uval32);
    PFTEST_EXPECT(PFENDIAN_SWAP_32(val32_swapped) == val32);
    PFTEST_EXPECT(PFENDIAN_SWAP_64(uval64_swapped) == uval64);
    PFTEST_EXPECT(PFENDIAN_SWAP_64(val64_swapped) == val64);
}
