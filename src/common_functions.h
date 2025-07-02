#ifndef COMMON_FUNCTIONS_H_
#define COMMON_FUNCTIONS_H_

#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif
enum alignmentType {LEFT, RIGHT, CENTER};
// Conversion & math utils
float mm_to_inches(float value_mm);
float hPa_to_inHg(float value_hPa);
int JulianDate(int d, int m, int y);
float SumOfPrecip(float DataArray[], int readings);
String TitleCase(String text);
double NormalizedMoonPhase(int d, int m, int y);

// Core functions (used in main.cpp)
uint8_t StartWiFi();
void StopWiFi();
boolean SetupTime();
boolean UpdateLocalTime();
void InitialiseDisplay();
void DisplayWeather();
void BeginSleep();

// Drawing functions
void drawString(int x, int y, String text, alignmentType alignment);
void drawStringMaxWidth(int x, int y, unsigned int text_width, String text, alignmentType alignment);
String WindDegToDirection(float winddirection);
void DisplayWXicon(int x, int y, String IconName, bool IconSize);

#ifdef __cplusplus
}
#endif

#endif /* COMMON_FUNCTIONS_H_ */
