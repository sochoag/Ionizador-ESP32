#ifndef DEBUG_LEVEL_H
#define DEBUG_LEVEL_H

#define RESET_COLOR "\e[0m"
#define ERROR_COLOR "\e[0;31m[E] "
#define WARNING_COLOR "\e[0;33m[W] "
#define MESSAGE_COLOR "\e[0;32m[M] "
#define INFO_COLOR "\e[0;34m[I] "
#define DEBUG_COLOR "\e[0;36m[D] "

// #define Yellow "\e[0;33m"

#define NONE 0
#define ERROR 1
#define WARNING 2
#define MESSAGE 3
#define INFO 4
#define DEBUG 5

#define debugMsg(severity, tag, message)                                                                \
  if (DEBUG_LEVEL >= severity)                                                                          \
  {                                                                                                     \
    switch (severity)                                                                                   \
    {                                                                                                   \
    case ERROR:                                                                                         \
      Serial.println(String(ERROR_COLOR) + "[" + String(tag) + "] " + RESET_COLOR + String(message));   \
      break;                                                                                            \
    case WARNING:                                                                                       \
      Serial.println(String(WARNING_COLOR) + "[" + String(tag) + "] " + RESET_COLOR + String(message)); \
      break;                                                                                            \
    case MESSAGE:                                                                                       \
      Serial.println(String(MESSAGE_COLOR) + "[" + String(tag) + "] " + RESET_COLOR + String(message)); \
      break;                                                                                            \
    case INFO:                                                                                          \
      Serial.println(String(INFO_COLOR) + "[" + String(tag) + "] " + RESET_COLOR + String(message));    \
      break;                                                                                            \
    case DEBUG:                                                                                         \
      Serial.println(String(DEBUG_COLOR) + "[" + String(tag) + "] " + RESET_COLOR + String(message));   \
      break;                                                                                            \
    default:                                                                                            \
      break;                                                                                            \
    }                                                                                                   \
  }
#endif