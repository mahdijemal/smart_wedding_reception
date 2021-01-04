

int led_pin = 13;

int analog_pin = A0;
char data;
int mouvState = 0;
int state = 0;
int incomingByte = 0;
void setup() {

  Serial.begin(9600);

  pinMode(led_pin, OUTPUT);

}

void loop() {
  int temp;
  int a = 1;
  int data;
  temp = analogRead(analog_pin);
 
  mouvState = digitalRead(analog_pin);
  if (Serial.available() > 0) {
    data = Serial.read();
    if (data == 49) {
      digitalWrite(led_pin, HIGH);
    }
    if (data == 48) {
      digitalWrite(led_pin, LOW);
    }
  }
  if ((state != mouvState) && (state == 0)) {
    Serial.print("1");
  }
  if ((state != mouvState) && (state == 1)) {
    Serial.print("0");
  }

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (mouvState == HIGH) {
    state = 1;
  } else {
    state = 0;
  }

  delay(500);
}
