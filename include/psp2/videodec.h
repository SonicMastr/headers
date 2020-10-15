#ifndef _DOLCESDK_PSP2_VIDEODEC_H_
#define _DOLCESDK_PSP2_VIDEODEC_H_

#include <psp2/types.h>

#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern "C" {
#endif /* defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus) */


#define SCE_VIDEODEC_ERROR_INVALID_TYPE					(-2141059071) /* 0x80620801 */
#define SCE_VIDEODEC_ERROR_INVALID_PARAM				(-2141059070) /* 0x80620802 */
#define SCE_VIDEODEC_ERROR_OUT_OF_MEMORY				(-2141059069) /* 0x80620803 */
#define SCE_VIDEODEC_ERROR_INVALID_STATE				(-2141059068) /* 0x80620804 */
#define SCE_VIDEODEC_ERROR_UNSUPPORT_IMAGE_SIZE			(-2141059067) /* 0x80620805 */
#define SCE_VIDEODEC_ERROR_INVALID_COLOR_FORMAT			(-2141059066) /* 0x80620806 */
#define SCE_VIDEODEC_ERROR_NOT_PHY_CONTINUOUS_MEMORY	(-2141059065) /* 0x80620807 */
#define SCE_VIDEODEC_ERROR_ALREADY_USED					(-2141059064) /* 0x80620808 */
#define SCE_VIDEODEC_ERROR_INVALID_POINTER				(-2141059063) /* 0x80620809 */
#define SCE_VIDEODEC_ERROR_ES_BUFFER_FULL				(-2141059062) /* 0x8062080A */
#define SCE_VIDEODEC_ERROR_INITIALIZE					(-2141059061) /* 0x8062080B */
#define SCE_VIDEODEC_ERROR_NOT_INITIALIZE				(-2141059060) /* 0x8062080C */
#define SCE_VIDEODEC_ERROR_INVALID_STREAM				(-2141059059) /* 0x8062080D */
#define SCE_VIDEODEC_ERROR_INVALID_ARGUMENT_SIZE		(-2141059058) /* 0x8062080E */


/* decoder init type */
#define SCE_VIDEODEC_TYPE_HW_AVCDEC	(0x1001U)
#define SCE_VIDEODEC_TYPE_HW_MPEG4	(0x1002U)

typedef struct  SceVideodecQueryInitInfoHwAvcdec {
	SceSize		size;
	SceUInt32	horizontal;
	SceUInt32	vertical;
	SceUInt32	numOfRefFrames;
	SceUInt32	numOfStreams;
} SceVideodecQueryInitInfoHwAvcdec;



typedef union SceVideodecQueryInitInfo  {
	SceUInt8                    reserved[32];
	SceVideodecQueryInitInfoHwAvcdec		hwAvc;
} SceVideodecQueryInitInfo;


typedef struct SceVideodecMemInfo {
	SceUInt32	memSize;

} SceVideodecMemInfo;


typedef struct SceVideodecBuf {
	void		*pBuf;
	SceUInt32	size;
} SceVideodecBuf;

typedef	struct SceVideodecCtrl {
	SceVideodecBuf	memBuf;
	SceUID			memBufUid;

	SceUIntVAddr	vaContext;
	SceUInt32		contextSize;
} SceVideodecCtrl;

extern SceInt32 sceVideodecSetConfig(SceUInt32 codecType, SceInt32 config);

extern SceInt32 sceVideodecInitLibrary(SceUInt32 codecType, const SceVideodecQueryInitInfo *pInitInfo);
extern SceInt32 sceVideodecQueryMemSize(SceUInt32 codecType, const SceVideodecQueryInitInfo *pInitInfo, SceVideodecMemInfo *pMemInfo);
extern SceInt32 sceVideodecInitLibraryWithUnmapMem(SceUInt32 codecType, SceVideodecCtrl *pCtrl, const SceVideodecQueryInitInfo *pInitInfo);
extern SceInt32 sceVideodecTermLibrary(SceUInt32 codecType);

/* Internal */

extern SceInt32 sceVideodecSetConfigInternal(SceUInt32 codecType, SceInt32 config);

extern SceInt32 sceVideodecQueryMemSizeInternal(SceUInt32 codecType, const SceVideodecQueryInitInfo *pInitInfo, SceVideodecMemInfo *pMemInfo);
extern SceInt32 sceVideodecInitLibraryInternal(SceUInt32 codecType, const SceVideodecQueryInitInfoHwAvcdec *pInitInfo);
extern SceInt32 sceVideodecInitLibraryWithUnmapMemInternal(SceUInt32 codecType, SceVideodecCtrl *pCtrl, const SceVideodecQueryInitInfo *pInitInfo);

/* Nongame */

extern SceInt32 sceVideodecQueryMemSizeNongameapp(SceUInt32 codecType, const SceVideodecQueryInitInfo *pInitInfo, SceVideodecMemInfo *pMemInfo);
extern SceInt32 sceVideodecInitLibraryNongameapp(SceUInt32 codecType, const SceVideodecQueryInitInfoHwAvcdec *pInitInfo);
extern SceInt32 sceVideodecInitLibraryWithUnmapMemNongameapp(SceUInt32 codecType, SceVideodecCtrl *pCtrl, const SceVideodecQueryInitInfo *pInitInfo);

#define SCE_VIDEODEC_VOID_TIMESTAMP (0xffffffff)
#define SCE_VIDEODEC_PARAM_UNKNOWN  (0xffffffff)

typedef struct SceVideodecTimeStamp {
	SceUInt32	upper;
	SceUInt32	lower;
} SceVideodecTimeStamp;


#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif /* defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus) */

#include <psp2/avcdec.h>

#endif /* _DOLCESDK_PSP2_VIDEODEC_H_ */

