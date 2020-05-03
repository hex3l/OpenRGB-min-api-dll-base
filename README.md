# OpenRGB-min-api-dll-base
OpenRGB's [`RGBController API`](https://gitlab.com/CalcProgrammer1/OpenRGB/-/wikis/The-RGBController-API) dll entry points for porting  purposes.

The idea is to use this dll exports as a base and use a gitpatch to add device detection and implementation's related code.

### Examples
Check out projects that are using this repo as base:
* [OpenRGB-to-RGB.NET-msiusb](https://github.com/Hex3l/OpenRGB-to-RGB.NET-msiusb)
* [OpenRGB-to-RGB.NET-Aura-SMBus](https://github.com/Hex3l/OpenRGB-to-RGB.NET-Aura-SMBus)
