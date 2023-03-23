#include <Arduino.h>
#include <Wire.h>
#include "TPS65400.h"

#define ALL_PGOOD_PIN   PIN_PB4
#define PERIPH_EN_PIN   PIN_PB5
#define PWR_ERR_PIN     PIN_PC0
#define USB_CORE_EN_PIN PIN_PC1
#define DDR_EN_PIN      PIN_PC2
#define VDDA_EN_PIN     PIN_PC3
#define PMBUS_ALERT_PIN PIN_PA6
#define PWR_ON_PIN      PIN_PA5
#define PWR_ON_RST_PIN  PIN_PA4

void InitPins()
{
  pinMode(ALL_PGOOD_PIN, INPUT_PULLUP);
  pinMode(PERIPH_EN_PIN, OUTPUT);
  pinMode(PWR_ERR_PIN, OUTPUT);
  pinMode(USB_CORE_EN_PIN, OUTPUT);
  pinMode(DDR_EN_PIN, OUTPUT);
  pinMode(VDDA_EN_PIN, OUTPUT);
  pinMode(PMBUS_ALERT_PIN, INPUT_PULLUP);
  pinMode(PWR_ON_PIN, INPUT_PULLUP);
  pinMode(PWR_ON_RST_PIN, INPUT_PULLUP);

  digitalWrite(PERIPH_EN_PIN, LOW);
  digitalWrite(PWR_ERR_PIN, LOW);
  digitalWrite(USB_CORE_EN_PIN, LOW);
  digitalWrite(DDR_EN_PIN, LOW);
  digitalWrite(VDDA_EN_PIN, LOW);
}

void Blink_Test()
{
  digitalWrite(PWR_ERR_PIN, HIGH);
  delay(200);
  digitalWrite(PWR_ERR_PIN, LOW);
  delay(200);
}

void setup() {
  InitPins();
  Serial.begin(115200);

  Wire.begin();
}

void loop() {
  Blink_Test();
  delay(50);
}