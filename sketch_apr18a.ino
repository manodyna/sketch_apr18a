int ledPin = 13; // the LED on the LilyPad
int leftSignal = 9; // my left turn signal is attached to petal 9
int rightSignal = 11; // my right turn signal is attached to petal 11
int signalLow = 10; // the - sides of my signals are attached to petal 10
int buzzer = 3;
int proximity = 4;
void setup()
{
pinMode(ledPin, OUTPUT); // sets the ledPin to be an output
pinMode(leftSignal, OUTPUT); // sets the leftSignal petal to be an
output
pinMode(rightSignal, OUTPUT); // sets the rightSignal petal to be an
output
pinMode(signalLow, OUTPUT); // sets the signalLow petal to be an
output
pinMode(proximity, INPUT);
input
pinMode(buzzer, OUTPUT);
output
pinMode
digitalWrite(signalLow, LOW); // sets the signalLOW petal to LOW (-)
}
void loop() // run over and over again
{
delay(1000); // wait for 1 second
digitalWrite(leftSignal, LOW); // turn the left signal off
delay(1000); // wait for 1 second
digitalWrite(rightSignal, HIGH); // turn the right signal on
delay(1000); // wait for 1 second
digitalWrite(rightSignal, LOW); // turn the right signal off
delay(1000); // wait for 1 second
buzzer();
}
void buzzer()//code for buzzer
{
  val = analogRead(sensorpin);
if(val<104){
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
}
delay(400);
}
