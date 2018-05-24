#include <Servo.h>

  int sensor_thumb = 0;
  int sensor_index = 1;
  int sensor_fuck = 2;
  int sensor_ring = 3;
  int sensor_pinky = 4;

  Servo servo_thumb;
  Servo servo_index;
  Servo servo_fuck;
  Servo servo_ring;
  Servo servo_pinky;
  
  int servopin_thumb = 3;
  int servopin_index = 5;
  int servopin_fuck = 6;
  int servopin_ring = 9;
  int servopin_pinky = 10;
  
void setup() {

  //  Declare the servo pins as outputs:
  Serial.begin(9600);
  servo_thumb.attach(servopin_thumb);
  servo_index.attach(servopin_index);
  servo_fuck.attach(servopin_fuck);
  servo_ring.attach(servopin_ring);
  servo_pinky.attach(servopin_pinky);
 
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

    int thumb_map = map(val_thumb, 470, 550, 45, 135 );
    int index_map = map(val_index, 460, 570, 45, 135 );
    int fuck_map = map(val_fuck, 460, 570, 45, 135 );
    int ring_map = map(val_ring, 470, 580, 45, 135 );
    int pinky_map = map(val_pinky, 480, 600, 45, 135 );

    if(thumb_map>135)
      thumb_map=135;
    if(thumb_map<45)
      thumb_map=45;
    
    if(index_map>135)
      index_map=135;
    if(index_map<45)
      index_map=45;
    
    if(fuck_map>135)
      fuck_map=135;
    if(fuck_map<45)
      fuck_map=45;
    
    if(ring_map>135)
      ring_map=135;
    if(ring_map<45)
      ring_map=45;
    
    if(pinky_map>135)
      pinky_map=135;
    if(pinky_map<45)
      pinky_map=45;
  
    servo_thumb.write(thumb_map);
    servo_index.write(index_map);
    servo_fuck.write(fuck_map);
    servo_ring.write(ring_map);
    servo_pinky.write(pinky_map);

}
