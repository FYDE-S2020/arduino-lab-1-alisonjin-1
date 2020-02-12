#define LED_PIN 2
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void timedBlink(int interval){
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(interval);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(interval);                       // wait for a second
}

void loop() {
  // put your main code here, to run repeatedly:
  //timedBlink(250);
  //timedBlink(500);
  //timedBlink(1000);
  
}
