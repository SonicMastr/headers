/**
 * \usergroup{SceNgs}
 * \usage{psp2/ngs.h,SceNgs_stub,SCE_SYSMODULE_NGS}
 */

#ifndef _DOLCESDK_PSP2_NGS_ERROR_H_
#define _DOLCESDK_PSP2_NGS_ERROR_H_

#include <psp2/error.h>

#define SCE_NGS_OK                        SCE_OK
#define SCE_NGS_ERROR                     ((int)0x804A0001)
#define SCE_NGS_ERROR_INVALID_PARAM       ((int)0x804A0002)
#define SCE_NGS_ERROR_INVALID_ALIGNMENT   ((int)0x804A0003)
#define SCE_NGS_ERROR_NOT_IMPL            ((int)0x804A0004)
#define SCE_NGS_ERROR_DEPENDENCY          ((int)0x804A0005)
#define SCE_NGS_ERROR_OUT_OF_ASSETS       ((int)0x804A0006)
#define SCE_NGS_ERROR_MODULE_NOT_AVAIL    ((int)0x804A0007)
#define SCE_NGS_ERROR_RESOURCE_LOCKED     ((int)0x804A0008)
#define SCE_NGS_ERROR_PARAM_OUT_OF_RANGE  ((int)0x804A0009)
#define SCE_NGS_ERROR_INVALID_VOICE_TYPE  ((int)0x804A000A)
#define SCE_NGS_ERROR_SYSTEM_MISMATCH     ((int)0x804A000B)
#define SCE_NGS_ERROR_INVALID_HANDLE      ((int)0x804A000C)
#define SCE_NGS_ERROR_SIZE_MISMATCH       ((int)0x804A000D)
#define SCE_NGS_ERROR_PATCH_NOT_AVAIL     ((int)0x804A000E)
#define SCE_NGS_ERROR_PARAM_TYPE_MISMATCH ((int)0x804A000F)
#define SCE_NGS_ERROR_INVALID_STATE       ((int)0x804A0010)
#define SCE_NGS_ERROR_INTERNAL_ALLOC      ((int)0x804A0011)
#define SCE_NGS_ERROR_INTERNAL_PROCESSING ((int)0x804A0012)
#define SCE_NGS_ERROR_INVALID_BUFFER      ((int)0x804A0013)

#endif
