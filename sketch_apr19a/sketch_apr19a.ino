int ledPin = 13; // the LED on the LilyPad
int leftSignal = 9; // my left turn signal is attached to petal 9
int rightSignal = 2; // my right turn signal is attached to petal 11
int signalLow = 13; // the - sides of my signals are attached to petal 105
int buzzer=5;
void setup()
{
pinMode(ledPin, OUTPUT); // sets the ledPin to be an output
pinMode(leftSignal, OUTPUT); // sets the leftSignal petal to be an output
pinMode(rightSignal, OUTPUT); // sets the rightSignal petal to be an output
pinMode(signalLow, OUTPUT); // sets the signalLow petal to be an output
digitalWrite(signalLow, LOW);
pinMode(buzzer, OUTPUT);
}

void loop() // run over and over again
{
delay(10000); // wait for 1 second
digitalWrite(leftSignal, HIGH); // turn the left signal off
delay(10000); // wait for 1 second
digitalWrite(rightSignal, HIGH); // turn the right signal on
delay(10000); // wait for 1 second
//digitalWrite(rightSignal, LOW); // turn the right signal off
//delay(100); // wait for 1 second
tone(buzzer,100);
}
