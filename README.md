# RohitCore-Config

Configuration management library for Arduino.

Provides persistent storage for system settings using EEPROM.

Compatible with:
- Arduino UNO
- Arduino Nano
- ESP32

---

## 🚀 Features

- Store integer values
- Store float values
- Persistent configuration storage
- Lightweight API

---

## 🧪 Example

```cpp
#include <RohitCore-Config.h>

RohitCoreConfig config;

void setup() {
  Serial.begin(115200);
  config.begin();

  config.setInt(0, 1000);
  Serial.println(config.getInt(0));

  config.setFloat(10, 3.14);
  Serial.println(config.getFloat(10));
}

void loop() {}
