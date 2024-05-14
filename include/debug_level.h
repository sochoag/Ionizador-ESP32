// #ifndef DEBUG_LEVEL_H
// #define DEBUG_LEVEL_H

// #define rColor "\e[0m"
// #define gColor "\e[1;32m"
// #define eColor "\e[1;31m"
// #define wColor "\e[1;33m"
// #define iColor "\e[1;34m"
// #define dColor "\e[1;36m"

// #if DEBUG_L == 3
// #define DEBUG_LEVEL
// #elif DEBUG_L == 2
// #define INFO_LEVEL
// #elif DEBUG_L == 1
// #define WARNING_LEVEL
// #elif DEBUG_L == 0
// #define ERROR_LEVEL
// #endif

// #ifdef ERROR_LEVEL
// #define printMessage(x) Serial.print(gColor + String(x) + rColor)
// #define printMessageLn(x) Serial.println(gColor + String(x) + rColor)
// #define printError(x) Serial.print(eColor + String(x) + rColor)
// #define printErrorLn(x) Serial.println(eColor + String(x) + rColor)
// #define printWarning(x)
// #define printWarningLn(x)
// #define printInfo(x)
// #define printInfoLn(x)
// #define printDebug(x)
// #define printDebugLn(x)
// #elif defined(WARNING_LEVEL)
// #define printMessage(x) Serial.print(gColor + String(x) + rColor)
// #define printMessageLn(x) Serial.println(gColor + String(x) + rColor)
// #define printError(x) Serial.print(eColor + String(x) + rColor)
// #define printErrorLn(x) Serial.println(eColor + String(x) + rColor)
// #define printWarning(x) Serial.print(wColor + String(x) + rColor)
// #define printWarningLn(x) Serial.println(wColor + String(x) + rColor)
// #define printInfo(x)
// #define printInfoLn(x)
// #define printDebug(x)
// #define printDebugLn(x)
// #elif defined(INFO_LEVEL)
// #define printMessage(x) Serial.print(gColor + String(x) + rColor)
// #define printMessageLn(x) Serial.println(gColor + String(x) + rColor)
// #define printError(x) Serial.print(eColor + String(x) + rColor)
// #define printErrorLn(x) Serial.println(eColor + String(x) + rColor)
// #define printWarning(x) Serial.print(wColor + String(x) + rColor)
// #define printWarningLn(x) Serial.println(wColor + String(x) + rColor)
// #define printInfo(x) Serial.print(wColor + String(x) + rColor)
// #define printInfoLn(x) Serial.println(wColor + String(x) + rColor)
// #define printDebug(x)
// #define printDebugLn(x)
// #elif defined(DEBUG_LEVEL)
// #define printMessage(x) Serial.print(gColor + String(x) + rColor)
// #define printMessageLn(x) Serial.println(gColor + String(x) + rColor)
// #define printError(x) Serial.print(eColor + String(x) + rColor)
// #define printErrorLn(x) Serial.println(eColor + String(x) + rColor)
// #define printWarning(x) Serial.print(wColor + String(x) + rColor)
// #define printWarningLn(x) Serial.println(wColor + String(x) + rColor)
// #define printInfo(x) Serial.print(wColor + String(x) + rColor)
// #define printInfoLn(x) Serial.println(wColor + String(x) + rColor)
// #define printDebug(x) Serial.print(wColor + String(x) + rColor)
// #define printDebugLn(x) Serial.println(wColor + String(x) + rColor)
// #endif

// #endif

// #ifndef DEBUG_LEVEL_H
// #define DEBUG_LEVEL_H

// #define RESET_COLOR "\e[0m"
// #define GREEN_COLOR "\e[1;32m"
// #define RED_COLOR "\e[1;31m"
// #define YELLOW_COLOR "\e[1;33m"
// #define BLUE_COLOR "\e[1;34m"
// #define CYAN_COLOR "\e[1;36m"

// #define DEBUG_NONE 0
// #define DEBUG_ERROR 1
// #define DEBUG_WARNING 2
// #define DEBUG_INFO 3
// #define DEBUG_DEBUG 4

// #ifndef DEBUG_LEVEL
// #define DEBUG_LEVEL DEBUG_NONE
// #endif

// #define PRINT_DEBUG(level, color, message)                 \
//   do                                                       \
//   {                                                        \
//     if (DEBUG_LEVEL >= level)                              \
//       Serial.print(color + String(message) + RESET_COLOR); \
//   } while (0)
// #define PRINT_DEBUG_LN(level, color, message)                \
//   do                                                         \
//   {                                                          \
//     if (DEBUG_LEVEL >= level)                                \
//       Serial.println(color + String(message) + RESET_COLOR); \
//   } while (0)

// #define printDebug(x) PRINT_DEBUG(DEBUG_DEBUG, BLUE_COLOR, x)
// #define printDebugLn(x) PRINT_DEBUG_LN(DEBUG_DEBUG, BLUE_COLOR, x)
// #define printInfo(x) PRINT_DEBUG(DEBUG_INFO, CYAN_COLOR, x)
// #define printInfoLn(x) PRINT_DEBUG_LN(DEBUG_INFO, CYAN_COLOR, x)
// #define printWarning(x) PRINT_DEBUG(DEBUG_WARNING, YELLOW_COLOR, x)
// #define printWarningLn(x) PRINT_DEBUG_LN(DEBUG_WARNING, YELLOW_COLOR, x)
// #define printError(x) PRINT_DEBUG(DEBUG_ERROR, RED_COLOR, x)
// #define printErrorLn(x) PRINT_DEBUG_LN(DEBUG_ERROR, RED_COLOR, x)
// #define printMessage(x) Serial.print(GREEN_COLOR + String(x) + RESET_COLOR)
// #define printMessageLn(x) Serial.println(GREEN_COLOR + String(x) + RESET_COLOR)

// #endif

// #ifndef DEBUG_LEVEL_H
// #define DEBUG_LEVEL_H

// #define COLORS(severity) "\e[1;" #severity "m"
// #define RESET_COLOR "\e[0m"

// #ifdef DEBUG_L
// #define LOG_LEVEL(level) COLORS(level)
// #else
// #define LOG_LEVEL(level) ""
// #endif

// #define PRINT(severity, message) Serial.print(LOG_LEVEL(severity) + String(message) + RESET_COLOR)
// #define PRINTLN(severity, message) Serial.println(LOG_LEVEL(severity) + String(message) + RESET_COLOR)

// #define printMessage(x) PRINT(32, x)
// #define printMessageLn(x) PRINTLN(32, x)
// #define printError(x) PRINT(31, x)
// #define printErrorLn(x) PRINTLN(31, x)
// #define printWarning(x) PRINT(33, x)
// #define printWarningLn(x) PRINTLN(33, x)
// #define printInfo(x) PRINT(34, x)      // Blue color
// #define printInfoLn(x) PRINTLN(34, x)  // Blue color
// #define printDebug(x) PRINT(36, x)     // Cyan color
// #define printDebugLn(x) PRINTLN(36, x) // Cyan color

// #endif

#ifndef DEBUG_LEVEL_H
#define DEBUG_LEVEL_H

#define RESET_COLOR "\e[0m"
#define GREEN_COLOR "\e[1;32m"
#define RED_COLOR "\e[1;31m"
#define YELLOW_COLOR "\e[1;33m"
#define BLUE_COLOR "\e[1;34m"
#define CYAN_COLOR "\e[1;36m"

#define DEBUG_NONE 0
#define DEBUG_ERROR 1
#define DEBUG_WARNING 2
#define DEBUG_INFO 3
#define DEBUG_DEBUG 4

#ifdef DEBUG_L
#define LOG_LEVEL(level) "\e[1;" #level "m"
#else
#define LOG_LEVEL(level) ""
#endif

#define PRINT(severity, message) Serial.print(LOG_LEVEL(severity) + String(message) + RESET_COLOR)
#define PRINTLN(severity, message) Serial.println(LOG_LEVEL(severity) + String(message) + RESET_COLOR)

#define printMessage(x) PRINT(32, x)
#define printMessageLn(x) PRINTLN(32, x)
#define printError(x) PRINT(31, x)
#define printErrorLn(x) PRINTLN(31, x)
#define printWarning(x) PRINT(33, x)
#define printWarningLn(x) PRINTLN(33, x)
#define printInfo(x) PRINT(34, x)      // Blue color
#define printInfoLn(x) PRINTLN(34, x)  // Blue color
#define printDebug(x) PRINT(36, x)     // Cyan color
#define printDebugLn(x) PRINTLN(36, x) // Cyan color

#endif
