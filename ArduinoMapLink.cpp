#include "Arduino.h"
#include "ArduinoMapLink.h"

ArduinoMapLink::ArduinoMapLink(bool debug) : _debug(debug) {}

String ArduinoMapLink::generateLink(String lat, String lon, String mapType) {
  String baseURL;
  
  if (mapType == "google") {
    baseURL = "https://www.google.com/maps/?q=";
  } else if (mapType == "apple") {
    baseURL = "http://maps.apple.com/?ll=";
  } else if (mapType == "openstreet") {
    baseURL = "https://www.openstreetmap.org/?mlat=" + lat + "&mlon=";
  } else if (mapType == "bing") {
    baseURL = "https://www.bing.com/maps/?v=2&cp=" + lat + "~";
  } else if (mapType == "balad") {
    baseURL = "https://balad.ir/?lat=" + lat + "&lon=";
  }

  String link = baseURL + lat + "," + lon;

  if (_debug) Serial.println("Generated link: " + link);

  return link;
}
