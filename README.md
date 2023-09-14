# ArduinoMapLink Library

## Overview
The `ArduinoMapLink` library is a simple and efficient Arduino library designed to generate map links from latitude and longitude coordinates. It supports various map services including Google Maps, Apple Maps, OpenStreetMap, Bing Maps, and Balad Maps.

## Features
- **Multiple Map Services**: Generate links for various map services including Google Maps, Apple Maps, OpenStreetMap, Bing Maps, and Balad Maps.
- **Debugging Support**: The library includes a debugging option that prints generated links to the Serial Monitor for troubleshooting.
- **Simple API**: The library provides a simple and intuitive API for generating map links.

## Functions
- `ArduinoMapLink(bool debug)`: Constructor that creates an `ArduinoMapLink` object. If `debug` is set to `true`, the library will print debugging information to the Serial Monitor.
- `String generateLink(String lat, String lon, String mapType)`: Generates a map link from the given latitude (`lat`) and longitude (`lon`) for the specified map service (`mapType`). The `mapType` can be `"google"`, `"apple"`, `"openstreet"`, `"bing"`, or `"balad"`.

## How to Use
First, include the `ArduinoMapLink` library in your Arduino sketch:

```cpp
#include "ArduinoMapLink.h"
```

Next, create an `ArduinoMapLink` object. You can enable debugging by passing `true` to the constructor:

```cpp
ArduinoMapLink mapLink(true);
```

Then, in your `setup()` function, start the Serial communication and generate map links using the `generateLink()` function:

```cpp
void setup() {
  Serial.begin(9600);

  Serial.println(mapLink.generateLink("48.858844", "2.294351", "google"));
  Serial.println(mapLink.generateLink("48.858844", "2.294351", "apple"));
  Serial.println(mapLink.generateLink("48.858844", "2.294351", "openstreet"));
  Serial.println(mapLink.generateLink("48.858844", "2.294351", "bing"));
  Serial.println(mapLink.generateLink("48.858844", "2.294351", "balad"));
}
```

This code will print the Google Maps, Apple Maps, OpenStreetMap, Bing Maps, and Balad Maps links to the Serial Monitor when run. You can replace `"48.858844"` and `"2.294351"` with your actual latitude and longitude values.

Please note that you need to have the Serial Monitor open in your Arduino IDE to see the printed links. You can open it by clicking on the magnifying glass icon at the top right corner of your Arduino IDE.

Remember to replace `"48.858844"` and `"2.294351"` with your actual latitude and longitude values. The links generated will open the respective map services centered at the given latitude and longitude when clicked.

Please note that the URL format for Balad Maps is assumed based on common practices as there's no official documentation available. You may need to adjust the URL format based on the actual requirements of Balad Maps.
