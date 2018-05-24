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

  //  Declare the servo pins as outputs:
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

  val_thumb = analogRead(sensor_thumb);
  val_index = analogRead(sensor_index);
  val_fuck = analogRead(sensor_fuck);
  val_ring = analogRead(sensor_ring);
  val_pinky = analogRead(sensor_pinky); 
/*
  Serial.println("Thumb:");
  Serial.println(val_thumb);
  Serial.println("index:");
  Serial.println(val_index);
  Serial.println("fuck:");
  Serial.println(val_fuck);
  Serial.println("ring:");
  Serial.println(val_ring);
  Serial.println("pinky:");
  Serial.println(val_pinky);
  delay(5000);
  */
  int thumb_map = map(val_thumb, 470, 550, 255, 0 );
  int index_map = map(val_index, 460, 570, 255, 0);
  int fuck_map = map(val_fuck, 460, 570, 255, 0 );
  int ring_map = map(val_ring, 470, 580, 255, 0 );
  int pinky_map = map(val_pinky, 480, 600, 255, 0 );

  if(thumb_map>255)
    thumb_map=255;
  if(thumb_map<0)
    thumb_map=0;
    
  if(index_map>255)
    index_map=255;
  if(index_map<0)
    index_map=0;
    
  if(fuck_map>255)
    fuck_map=255;
  if(fuck_map<0)
    fuck_map=0;
    
  if(ring_map>255)
    ring_map=255;
  if(ring_map<0)
    ring_map=0;
    
  if(pinky_map>255)
    pinky_map=255;
  if(pinky_map<0)
    pinky_map=0;
  
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
  //delay(5000);
  
  analogWrite(servo_thumb, thumb_map);
  analogWrite(servo_index, index_map);
  analogWrite(servo_fuck, fuck_map);
  analogWrite(servo_ring, ring_map);
  analogWrite(servo_pinky, pinky_map);
}
