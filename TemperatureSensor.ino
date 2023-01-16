//Code for humidity sensor
#define ADC_VREF_mV  5000.0
#define ADC_RESOLUTION 1024.0
#define PIN_LM35 A0
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)

}

void loop() {
  // put your main code here, to run repeatedly:
  int adcVal = analogRead(PIN_LM35);
  float milliVolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);
  float tempC = milliVolt / 10;
  float tempF = tempC * 9 / 5 + 32;
  Serial.print("Temperature: ");
  Serial.print(tempC);   // print the temperature in Celsius
  Serial.print("°C");
  Serial.print("  ~  "); // separator between Celsius and Fahrenheit
  Serial.print(tempF);   // print the temperature in Fahrenheit
  Serial.println("°F");

  delay(1000);

}
