#pragma once

#include <Windows.h>
#include <vector>

#include "RGBController.h"

#define OPENRGB_API __declspec(dllexport)

RGBColor toRGBColorPort(int r, int g, int b);

//EXPORTED API METHODS
extern "C" OPENRGB_API void init();

extern "C" OPENRGB_API int getNumberOfControllers();

extern "C" OPENRGB_API BSTR getControllerName(int controller_idx);

extern "C" OPENRGB_API BSTR getControllerDescription(int controller_idx);

extern "C" OPENRGB_API int getControllerLeds(int controller_idx);

extern "C" OPENRGB_API void getControllerZones(int controller_idx, SAFEARRAY** zonesArray, SAFEARRAY** zonesLedsArray);

extern "C" OPENRGB_API void setMode(int controller_idx, int mode_idx);

extern "C" OPENRGB_API void setLedColor(int controller_idx, int led_idx, int r, int g, int b);

extern "C" OPENRGB_API void setZoneColor(int controller_idx, int zone_idx, int r, int g, int b);
