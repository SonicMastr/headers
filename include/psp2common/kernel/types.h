/**
 * \usergroup{SceTypes}
 * \usage{psp2common/kernel/types.h}
 */

#ifndef _DOLCESDK_PSP2COMMON_KERNEL_TYPES_H_
#define _DOLCESDK_PSP2COMMON_KERNEL_TYPES_H_

#include <psp2common/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(_LANGUAGE_ASSEMBLY)

typedef SceUInt32 SceKernelMemBlockType;

typedef int SceIoMode;
typedef int SceMode;

#ifndef _SCE_KERNEL_IORES_T
#define _SCE_KERNEL_IORES_T
typedef SceInt64 SceIores;
#endif

typedef SceUInt64 SceKernelSysClock;

#define SCE_UID_NAMELEN 31

#endif // !defined(_LANGUAGE_ASSEMBLY)

#ifdef __cplusplus
}
#endif

#endif // _DOLCESDK_PSP2COMMON_KERNEL_TYPES_H_
