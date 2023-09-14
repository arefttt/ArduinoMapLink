#ifndef ArduinoMapLink_h
#define ArduinoMapLink_h

#include "Arduino.h"

class ArduinoMapLink {
  public:
    ArduinoMapLink(bool debug);
    String generateLink(String lat, String lon, String mapType);
  private:
    bool _debug;
};

#endif
