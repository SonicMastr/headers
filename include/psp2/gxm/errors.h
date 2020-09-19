/**
 * \usergroup{SceGxm}
 * \usage{psp2/gxm.h,SceGxm_stub}
 */

#include <psp2/types.h>

#ifndef _DOLCESDK_PSP2_GXM_ERRORS_H_
#define _DOLCESDK_PSP2_GXM_ERRORS_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t SceGxmErrorCode;

#define SCE_GXM_ERROR_UNINITIALIZED                                  ((int)0x805B0000)
#define SCE_GXM_ERROR_ALREADY_INITIALIZED                            ((int)0x805B0001)
#define SCE_GXM_ERROR_OUT_OF_MEMORY                                  ((int)0x805B0002)
#define SCE_GXM_ERROR_INVALID_VALUE                                  ((int)0x805B0003)
#define SCE_GXM_ERROR_INVALID_POINTER                                ((int)0x805B0004)
#define SCE_GXM_ERROR_INVALID_ALIGNMENT                              ((int)0x805B0005)
#define SCE_GXM_ERROR_NOT_WITHIN_SCENE                               ((int)0x805B0006)
#define SCE_GXM_ERROR_WITHIN_SCENE                                   ((int)0x805B0007)
#define SCE_GXM_ERROR_NULL_PROGRAM                                   ((int)0x805B0008)
#define SCE_GXM_ERROR_UNSUPPORTED                                    ((int)0x805B0009)
#define SCE_GXM_ERROR_PATCHER_INTERNAL                               ((int)0x805B000A)
#define SCE_GXM_ERROR_RESERVE_FAILED                                 ((int)0x805B000B)
#define SCE_GXM_ERROR_PROGRAM_IN_USE                                 ((int)0x805B000C)
#define SCE_GXM_ERROR_INVALID_INDEX_COUNT                            ((int)0x805B000D)
#define SCE_GXM_ERROR_INVALID_POLYGON_MODE                           ((int)0x805B000E)
#define SCE_GXM_ERROR_INVALID_SAMPLER_RESULT_TYPE_PRECISION          ((int)0x805B000F)
#define SCE_GXM_ERROR_INVALID_SAMPLER_RESULT_TYPE_COMPONENT_COUNT    ((int)0x805B0010)
#define SCE_GXM_ERROR_UNIFORM_BUFFER_NOT_RESERVED                    ((int)0x805B0011)
#define SCE_GXM_ERROR_INVALID_PRECOMPUTED_DRAW                       ((int)0x805B0014)
#define SCE_GXM_ERROR_INVALID_PRECOMPUTED_VERTEX_STATE               ((int)0x805B0015)
#define SCE_GXM_ERROR_INVALID_PRECOMPUTED_FRAGMENT_STATE             ((int)0x805B0016)
#define SCE_GXM_ERROR_DRIVER                                         ((int)0x805B0017)
#define SCE_GXM_ERROR_INVALID_THREAD                                 ((int)0x805B0018)
#define SCE_GXM_ERROR_INVALID_TEXTURE_DATA_POINTER                   ((int)0x805B0019)
#define SCE_GXM_ERROR_INVALID_TEXTURE_PALETTE_POINTER                ((int)0x805B001A)
#define SCE_GXM_ERROR_INVALID_OUTPUT_REGISTER_SIZE                   ((int)0x805B001B)
#define SCE_GXM_ERROR_INVALID_FRAGMENT_MSAA_MODE                     ((int)0x805B001C)
#define SCE_GXM_ERROR_INVALID_VISIBILITY_BUFFER_POINTER              ((int)0x805B001D)
#define SCE_GXM_ERROR_INVALID_VISIBILITY_INDEX                       ((int)0x805B001E)
#define SCE_GXM_ERROR_INVALID_DEPTH_STENCIL_CONFIGURATION            ((int)0x805B001F)
#define SCE_GXM_ERROR_INVALID_TEXTURE                                ((int)0x805B0020)
#define SCE_GXM_ERROR_OUT_OF_HOST_MEMORY                             ((int)0x805B0021)
#define SCE_GXM_ERROR_OUT_OF_BUFFER_MEMORY                           ((int)0x805B0022)
#define SCE_GXM_ERROR_OUT_OF_VERTEX_USSE_MEMORY                      ((int)0x805B0023)
#define SCE_GXM_ERROR_OUT_OF_FRAGMENT_USSE_MEMORY                    ((int)0x805B0024)
#define SCE_GXM_ERROR_INVALID_PRIMITIVE_TYPE                         ((int)0x805B0025)
#define SCE_GXM_ERROR_INVALID_MAPPING                                ((int)0x805B0026)
#define SCE_GXM_ERROR_OUT_OF_RENDER_TARGETS                          ((int)0x805B0027)
#define SCE_GXM_ERROR_INVALID_VISIBILITY_OP                          ((int)0x805B0028)
#define SCE_GXM_ERROR_RAZOR                                          ((int)0x805B0029)
#define SCE_GXM_ERROR_INVALID_SAMPLER_FILTER_MODE                    ((int)0x805B002A)
#define SCE_GXM_ERROR_INVALID_REGION_CLIP_IN_COMMAND_LIST            ((int)0x805B002B)
#define SCE_GXM_ERROR_WITHIN_COMMAND_LIST                            ((int)0x805B002C)
#define SCE_GXM_ERROR_NOT_WITHIN_COMMAND_LIST                        ((int)0x805B002D)
#define SCE_GXM_ERROR_BUFFER_OVERRUN                                 ((int)0x805B002E)

#ifdef __cplusplus
}
#endif

#endif
