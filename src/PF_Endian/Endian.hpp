#pragma once

#if defined(WIN32)
    #include <intrin.h>
#else
    #include <byteswap.h>
#endif

namespace pf::endian
{

#if defined(PFENDIAN_BYTE_ORDER_BIG_ENDIAN)
    #if defined(PFENDIAN_BIG_ENDIAN)
        #define PFENDIAN_NEED_SWAP 0
    #else
        #define PFENDIAN_NEED_SWAP 1
    #endif
#else
    #if defined(PFENDIAN_BIG_ENDIAN)
        #define PFENDIAN_NEED_SWAP 1
    #else
        #define PFENDIAN_NEED_SWAP 0
    #endif
#endif

// The underscore variants can be used if you need to endian swap for reasons of your own.
#if defined (WIN32)
    #define _PFENDIAN_SWAP_16(x) _byteswap_ushort(x)
    #define _PFENDIAN_SWAP_32(x) _byteswap_ulong(x)
    #define _PFENDIAN_SWAP_64(x) _byteswap_uint64(x)
#else
    #define _PFENDIAN_SWAP_16(x) __bswap_16(x)
    #define _PFENDIAN_SWAP_32(x) __bswap_32(x)
    #define _PFENDIAN_SWAP_64(x) __bswap_64(x)
#endif

// The regular variants should be used when endian swapping per the defined byte order.
#if PFENDIAN_NEED_SWAP
    #define PFENDIAN_SWAP_16(x) _PFENDIAN_SWAP_16(x)
    #define PFENDIAN_SWAP_32(x) _PFENDIAN_SWAP_32(x)
    #define PFENDIAN_SWAP_64(x) _PFENDIAN_SWAP_64(x)
#else
    #define PFENDIAN_SWAP_16(x) x
    #define PFENDIAN_SWAP_32(x) x
    #define PFENDIAN_SWAP_64(x) x
#endif

}
