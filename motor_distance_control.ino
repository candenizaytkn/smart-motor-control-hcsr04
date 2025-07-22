
// HC-SR04 pinleri
const int trigPin = 8;
const int echoPin = 7;

// DC motor kontrolü için TIP120 transistor pini (PWM)
const int motorPin = 9;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Mesafe ölçümü
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  // PWM aralığı: 1 (yakın) – 60 (uzak)
  int pwmValue = map(constrain(distance, 5, 50), 5, 50, 1, 60);

  analogWrite(motorPin, pwmValue);

  // Seri monitör ile izle
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm	 PWM: ");
  Serial.println(pwmValue);

  delay(100);
}
