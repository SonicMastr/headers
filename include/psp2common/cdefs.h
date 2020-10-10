#ifndef _DOLCESDK_PSP2COMMON_CDEFS_H_
#define _DOLCESDK_PSP2COMMON_CDEFS_H_

/**
 * @def SCE_CDECL_BEGIN
 * C++からCヘッダを参照するための開始マクロ
 */
/**
 * @def SCE_CDECL_END
 * C++からCヘッダを参照するための終端マクロ
 */
#if defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
#if !defined(_LANGUAGE_ASSEMBLY)
#define SCE_CDECL_BEGIN	extern "C" {
#define SCE_CDECL_END	}
#else	/* !defined(_LANGUAGE_ASSEMBLY) */
#define SCE_CDECL_BEGIN
#define SCE_CDECL_END
#endif	/* !defined(_LANGUAGE_ASSEMBLY) */
#else	/* defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus) */
#define SCE_CDECL_BEGIN
#define SCE_CDECL_END
#endif	/* defined(_LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus) */

#endif	/* _DOLCESDK_PSP2COMMON_CDEFS_H_ */
