#include <LiquidCrystal.h> //LCD library
#include<Servo.h> //Servo motor library

#define echo   2
#define trig   3
#define Buzzer 7
#define LED 4

const int scan_Distance = 50;//the range of distance

float  period; // time taken by the pulse to return back
float distance;  // distance travelled by the pulse in oneway
Servo myservo ;

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);//lcd(RS,EN,D4,D5,D6,D7) 

void setup() {
  myservo.attach(6); // Servo motor is connected to Digital pin 6

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(LED,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);

}

void loop() {
  for (int i = 0; i <= 180; i++) //servo motor rotates 0-180 degree
  {  
    myservo.write(i);
    time_Measurement();
    distance = period * (0.0343) / 2; //Distance calculation
    if (distance <= scan_Distance)     //checking the range
    {      
      person_detected();       
    }
    else {
      lcd.clear();
      lcd.print("Detecting...... ");
    }
    delay(100);
  }
  for (int i = 180; i >= 0; i--)   //servo motor rotates 180-0 degree
  {
    myservo.write(i);
    time_Measurement();
    distance = (float)period * (0.0343) / 2;
    if (distance <= scan_Distance) {
      person_detected();  
    }
    else {
      lcd.clear();
      lcd.print("Detecting...... ");
    }
    delay(100);
  }    
}

void time_Measurement()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  period = pulseIn(echo, HIGH);
}
