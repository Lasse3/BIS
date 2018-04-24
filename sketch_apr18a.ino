  int sensor_thumb = 0;
  int sensor_index = 1;
  int sensor_fuck = 2;
  int sensor_ring = 3;
  int sensor_pinky = 4;
  
  int servo_thumb = 3;
  int servo_index = 5;
  int servo_fuck = 6;
  int servo_ring = 9;
  int servo_pinky = 10;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(servo_thumb, OUTPUT);
  pinMode(servo_index, OUTPUT);
  pinMode(servo_fuck, OUTPUT);
  pinMode(servo_ring, OUTPUT);
  pinMode(servo_pinky, OUTPUT);
}

void loop() {
  int val_thumb = 0;
  int val_index = 0;
  int val_fuck = 0;
  int val_ring = 0;
  int val_pinky = 0;

  // put your main code here, to run repeatedly:
  val_thumb = analogRead(sensor_thumb);
  val_index = analogRead(sensor_index);
  val_fuck = analogRead(sensor_fuck);
  val_ring = analogRead(sensor_ring);
  val_pinky = analogRead(sensor_pinky);
  
  analogWrite(servo_thumb, val_thumb/4);
  analogWrite(servo_index, val_index/4);
  analogWrite(servo_fuck, val_fuck/4);
  analogWrite(servo_ring, val_ring/4);
  analogWrite(servo_pinky, val_pinky/4);
}
