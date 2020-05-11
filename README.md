PF_Endian
======

Endian swapping made easy. Don't want to mess around with bytes? Use macros instead.

## Headline features

* Endian swapping using optimized instrinsics.
* By default, swapped endian-ness is little endian.

## Instructions

Refer to `tests/` for a minimal example.

1. Link to the interface library PF_Endian with your binary.

```CMake
target_link_libraries(PF_Endian_UnitTests PF_Endian)
```

2. Include the correct header.

```cpp
#include <PF_Endian/Endian.hpp>
```

3. Optionally, define the macro `PFENDIAN_BYTE_ORDER_BIG_ENDIAN` to use big endian order.

4. Call the various endian swap functions to do the swap.

```cpp
uint16_t uval16_swapped = PFENDIAN_SWAP_16(uval16);
int16_t val16_swapped = PFENDIAN_SWAP_16(val16);
uint32_t uval32_swapped = PFENDIAN_SWAP_32(uval32);
int32_t val32_swapped = PFENDIAN_SWAP_32(val32);
uint64_t uval64_swapped = PFENDIAN_SWAP_64(uval64);
int64_t val64_swapped = PFENDIAN_SWAP_64(val64);
```
