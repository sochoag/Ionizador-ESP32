#ifndef COLORS_H
#define COLORS_H

// Regular 0
// Bold 1
// Muted 3
// Italic 3
// Underlined 4
// Background 7
// Strikethrough 9
// Doubleunderlined 21
// Select Background 40-47
// Overlined 53
// High Intensity Background 100 - 107

byte styles[] = {0, 1, 2, 3, 4, 5, 6, 7, 9, 21, 40, 41, 42, 43, 44, 46, 46, 47, 53, 100, 101, 102, 103, 104, 105, 106, 107};

void colorTable()
{
  Serial.printf("\e[0m\n\e[1;32mTabla resumen ANSI\e[0m");
  for (byte j = 0; j < sizeof(styles); j++)
  {
    Serial.printf("\n%d ->", styles[j]);

    for (int i = 30; i < 38; i++)
    {
      Serial.printf("\e[%d;%dm %d \e[0m", styles[j], i, i);
    }
  }
}

// RESET

#define fontReset "\e[0m"

// COLORS - REGULAR
#define Black "\e[0;30m"
#define Red "\e[0;31m"
#define Green "\e[0;32m"
#define Yellow "\e[0;33m"
#define Blue "\e[0;34m"
#define Purple "\e[0;35m"
#define Cyan "\e[0;36m"
#define White "\e[0;37m"

// COLORS - BOLD
#define boldBlack "\e[1;30m"
#define boldRed "\e[1;31m"
#define boldGreen "\e[1;32m"
#define boldYellow "\e[1;33m"
#define boldBlue "\e[1;34m"
#define boldPurple "\e[1;35m"
#define boldCyan "\e[1;36m"
#define boldWhite "\e[1;37m"

// COLORS - UNDERLINED
#define underlineBlack "\e[4;30m"
#define underlineRed "\e[4;31m"
#define underlineGreen "\e[4;32m"
#define underlineYellow "\e[4;33m"
#define underlineBlue "\e[4;34m"
#define underlinePurple "\e[4;35m"
#define underlineCyan "\e[4;36m"
#define underlineWhite "\e[4;37m"

// BACKGROUND -
#define backgroundBlack "\e[40;30m"
#define backgroundRed "\e[41;31m"
#define backgroundGreen "\e[42;32m"
#define backgroundYellow "\e[43;33m"
#define backgroundBlue "\e[44;34m"
#define backgroundPurple "\e[45;35m"
#define backgroundCyan "\e[46;36m"
#define backgroundWhite "\e[47;37m"

#endif