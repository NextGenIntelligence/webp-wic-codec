#ifndef WEBPWICCODEC_MAIN_H
#define WEBPWICCODEC_MAIN_H

#ifdef _DEBUG
// debug functions
void MAIN_debug_printf(const char* prefix, const char* func, const char* fmt, ...);
#define TRACE(fmt) MAIN_debug_printf("trace", __FUNCTION__, fmt)
#define TRACE1(fmt, a) MAIN_debug_printf("trace", __FUNCTION__, fmt, a)
#define TRACE2(fmt, a, b) MAIN_debug_printf("trace", __FUNCTION__, fmt, a, b)
#define TRACE3(fmt, a, b, c) MAIN_debug_printf("trace", __FUNCTION__, fmt, a, b, c)
#define TRACE4(fmt, a, b, c, d) MAIN_debug_printf("trace", __FUNCTION__, fmt, a, b, c, d)

char *debugstr_guid(REFGUID guid);

#else
#define TRACE(fmt)
#define TRACE1(fmt, a)
#define TRACE2(fmt, a, b)
#define TRACE3(fmt, a, b, c)
#define TRACE4(fmt, a, b, c, d)
#endif

// Number of COM objects created.
extern LONG volatile MAIN_nObjects;

#endif  // WEBPWICCODEC_MAIN_H