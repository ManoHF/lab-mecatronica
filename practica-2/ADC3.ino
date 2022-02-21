int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V

double val = 0; // variable to store the value read
double aux = 0;
int ledPin = 13;

void setup() {
  Serial.begin(9600); // setup serial
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(analogPin); // read the input pin
  Serial.print ("Conversion analogico-digital (V): ");
  aux = val*5/1023;
  Serial.println(aux); // debug value

  if(aux >= 3)
  {
    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else{
    digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  }
  delay(500);
}
