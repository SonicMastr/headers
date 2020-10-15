/**
 * \usergroup{SceVideoDec}
 * \usage{psp2/videodec.h,SceVideodec_stub,SCE_SYSMODULE_AVCDEC}
 */


#ifndef _PSP2_VIDEODEC_H_
#define _PSP2_VIDEODEC_H_

#include <psp2/types.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum SceVideodecErrorCode {
	SCE_VIDEODEC_ERROR_INVALID_TYPE                 = (int)0x80620801,
	SCE_VIDEODEC_ERROR_INVALID_PARAM                = (int)0x80620802,
	SCE_VIDEODEC_ERROR_OUT_OF_MEMORY                = (int)0x80620803,
	SCE_VIDEODEC_ERROR_INVALID_STATE                = (int)0x80620804,
	SCE_VIDEODEC_ERROR_UNSUPPORT_IMAGE_SIZE         = (int)0x80620805,
	SCE_VIDEODEC_ERROR_INVALID_COLOR_FORMAT         = (int)0x80620806,
	SCE_VIDEODEC_ERROR_NOT_PHY_CONTINUOUS_MEMORY    = (int)0x80620807,
	SCE_VIDEODEC_ERROR_ALREADY_USED                 = (int)0x80620808,
	SCE_VIDEODEC_ERROR_INVALID_POINTER              = (int)0x80620809,
	SCE_VIDEODEC_ERROR_ES_BUFFER_FULL               = (int)0x8062080A,
	SCE_VIDEODEC_ERROR_INITIALIZE                   = (int)0x8062080B,
	SCE_VIDEODEC_ERROR_NOT_INITIALIZE               = (int)0x8062080C,
	SCE_VIDEODEC_ERROR_INVALID_STREAM               = (int)0x8062080D,
	SCE_VIDEODEC_ERROR_INVALID_ARGUMENT_SIZE        = (int)0x8062080E
} SceVideodecErrorCode;

typedef enum SceVideodecType {
	SCE_VIDEODEC_TYPE_HW_AVCDEC = 0x1001
} SceVideodecType;

typedef struct SceVideodecQueryInitInfoHwAvcdec {
	uint32_t size;				//!< sizeof(SceVideodecQueryInitInfoHwAvcdec)
	uint32_t horizontal;
	uint32_t vertical;
	uint32_t numOfRefFrames;    //!< Number of reference frames to use
	uint32_t numOfStreams;      //!< Must be set to 1
} SceVideodecQueryInitInfoHwAvcdec;

typedef union SceVideodecQueryInitInfo {
	uint8_t                           reserved[32];
	SceVideodecQueryInitInfoHwAvcdec  hwAvc;
} SceVideodecQueryInitInfo;

typedef struct SceVideodecTimeStamp {
	uint32_t upper;
	uint32_t lower;
} SceVideodecTimeStamp;

/**
 * @param[in] codec - See ::SceVideodecType
 * @param[in] initInfo - See ::SceVideodecQueryInitInfoHwAvcdec
 *
 * @return 0 on success, < 0 on error.
 */
int sceVideodecInitLibrary(SceVideodecType codec, const SceVideodecQueryInitInfoHwAvcdec *initInfo);

/**
 * @param[in] codec - See ::SceVideodecType
 *
 * @return 0 on success, < 0 on error.
 */
int sceVideodecTermLibrary(SceVideodecType codec);

#ifdef __cplusplus
}
#endif

#endif /* _PSP2_VIDEODEC_H_ */
