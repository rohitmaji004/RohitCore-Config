#include "RohitCore-Config.h"

RohitCoreConfig::RohitCoreConfig() {}

void RohitCoreConfig::begin(int size) {
  EEPROM.begin(size);
}

void RohitCoreConfig::setInt(int address, int value) {
  EEPROM.put(address, value);
  EEPROM.commit();
}

int RohitCoreConfig::getInt(int address) {
  int value;
  EEPROM.get(address, value);
  return value;
}

void RohitCoreConfig::setFloat(int address, float value) {
  EEPROM.put(address, value);
  EEPROM.commit();
}

float RohitCoreConfig::getFloat(int address) {
  float value;
  EEPROM.get(address, value);
  return value;
}
