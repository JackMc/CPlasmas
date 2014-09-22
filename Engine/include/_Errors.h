#include "_ExportUtil.h"

void ENGAPI _smell(const char *message, int line, const char *file, const char *function);
void ENGAPI _assert(const char *message, int line, const char *file, const char *function);

#ifndef __func__
#define __func__ __FUNCTION__
#endif

// Cond is evaluated before msg - Yay!
#define smell(cond, msg) do {if (!( cond )) { _smell( msg , __LINE__, __FILE__, __func__); }} while (0)
#define assert(cond, msg) do {if (!( cond )) { _assert( msg , __LINE__, __FILE__, __func__); }} while (0)