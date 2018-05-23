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
  Serial.begin(9600);
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

  Serial.println("Thumb");
  Serial.println(val_thumb);
  Serial.println("index");
  Serial.println(val_index);
  Serial.println("fuck");
  Serial.println(val_fuck);
  Serial.println("ring");
  Serial.println(val_ring);
  Serial.println("pinky");
  Serial.println(val_pinky);
  delay(5000);
  

  int thumb_map = (val_thumb, 490, 530, 255, 0 );
  int index_map = (val_index, 480, 550, 255, 0);
  int fuck_map = (val_fuck, 480, 550, 255, 0 );
  int ring_map = (val_ring, 490, 560, 255, 0 );
  int pinky_map = (val_pinky, 500, 580, 255, 0 );
  
  Serial.println("Thumb mapped");
  Serial.println(thumb_map);
  Serial.println("index mapped");
  Serial.println(index_map);
  Serial.println("fuck mapped");
  Serial.println(fuck_map);
  Serial.println("ring mapped");
  Serial.println(ring_map);
  Serial.println("pinky mapped");
  Serial.println(pinky_map);
  delay(5000);
  
  analogWrite(servo_thumb, val_thumb);
  analogWrite(servo_index, val_index);
  analogWrite(servo_fuck, val_fuck);
  analogWrite(servo_ring, val_ring);
  analogWrite(servo_pinky, val_pinky);
}
