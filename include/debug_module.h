#ifndef DEBUG_MODULE
#define DEBUG_MODULE

#define RESET_COLOR "\e[0m"
#define ERROR_COLOR "\e[0;31m[E]"
#define WARNING_COLOR "\e[0;33m[W]"
#define INFO_COLOR "\e[0;34m[I]"
#define DEBUG_COLOR "\e[0;34m[D]"
#define TRACE_COLOR "\e[0;35m[T]"
#define TAG_COLOR(tag) "\e[2m[" tag "]: \e[0m" // Tag

#define NONE 0
#define ERROR 1
#define WARNING 2
#define INFO 3
#define DEBUG 4
#define TRACE 5

#define debugMsg(severity, tag, message)                           \
  if (DEBUG_LEVEL >= severity)                                     \
  {                                                                \
    switch (severity)                                              \
    {                                                              \
    case ERROR:                                                    \
      Serial.printf(ERROR_COLOR TAG_COLOR(tag) "%s\n", message);   \
      break;                                                       \
    case WARNING:                                                  \
      Serial.printf(WARNING_COLOR TAG_COLOR(tag) "%s\n", message); \
      break;                                                       \
    case INFO:                                                     \
      Serial.printf(INFO_COLOR TAG_COLOR(tag) "%s\n", message);    \
      break;                                                       \
    case DEBUG:                                                    \
      Serial.printf(DEBUG_COLOR TAG_COLOR(tag) "%s\n", message);   \
      break;                                                       \
    case TRACE:                                                    \
      Serial.printf(TRACE_COLOR TAG_COLOR(tag) "%s\n", message);   \
      break;                                                       \
    default:                                                       \
      break;                                                       \
    }                                                              \
  }

#define debugClear() Serial.printf("\e[0m\e[2J\e[H");

#endif