#include <RohitCore-Config.h>

RohitCoreConfig config;

void setup() {
  Serial.begin(115200);

  config.begin();

  config.setInt(0, 1000);
  Serial.print("Sample Rate: ");
  Serial.println(config.getInt(0));

  config.setFloat(10, 3.14);
  Serial.print("Calibration: ");
  Serial.println(config.getFloat(10));
}

void loop() {}
