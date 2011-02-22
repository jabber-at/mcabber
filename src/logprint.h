#ifndef __LOGPRINT_H__
#define __LOGPRINT_H__ 1

// Flags for scr_LogPrint()
#define LPRINT_NORMAL   1   // Display in log window
#define LPRINT_LOG      2   // Log to file (if enabled)
#define LPRINT_DEBUG    4   // Debug message (log if enabled)
#define LPRINT_NOTUTF8  8   // Do not convert from UTF-8 to locale

// For convenience...
#define LPRINT_LOGNORM  (LPRINT_NORMAL|LPRINT_LOG)

void scr_LogPrint(unsigned int flag, const char *fmt, ...);

#endif /* __LOGPRINT_H__ */

/* vim: set expandtab cindent cinoptions=>2\:2(0:  For Vim users... */
