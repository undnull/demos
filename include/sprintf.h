#ifndef __SPRINTF_H__
#define __SPRINTF_H__ 1
#include <arch/types.h>
#include <demos/compiler.h>
#include <stdarg.h>

int sprintf(char *s, const char *fmt, ...) __printf(2, 3);
int vsprintf(char *s, const char *fmt, va_list ap);
int snprintf(char *s, size_t n, const char *fmt, ...) __printf(3, 4);
int vsnprintf(char *s, size_t n, const char *fmt, va_list ap);

#endif
