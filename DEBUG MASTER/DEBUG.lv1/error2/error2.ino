int piez0 = 10;                // Assign piezo is pin 10

void setup()
{
  pinMode(piezo, OUTPUT)     // Set piezo (pin 10) to output mode
}

void loop()
{
  tone(piezo,33);             // generate the tone 500Hz
  delay(5000);                 // wait for 5 second
  noTone();               // stop generating the tone
  delay(5000);                 // wait for 5 second
}
