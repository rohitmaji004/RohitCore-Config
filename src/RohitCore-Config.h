#ifndef RohitCore_Config_h
#define RohitCore_Config_h

#include <Arduino.h>
#include <EEPROM.h>

class RohitCoreConfig {
  public:
    RohitCoreConfig();

    // Initialize EEPROM
    void begin(int size = 512);

    // Integer configuration
    void setInt(int address, int value);
    int getInt(int address);

    // Float configuration
    void setFloat(int address, float value);
    float getFloat(int address);

};

#endif
