#define input1  5
#define input2  4
#define input3  3
#define input4  2
#define speed1 9 
#define speed2 10
#define sensor1 6
#define sensor2 7
#define eco A0
#define trig A1
void setup() {
  
pinMode(input1,OUTPUT);
pinMode(input2,OUTPUT);
pinMode(input3,OUTPUT);
pinMode(input4,OUTPUT);
pinMode(speed1,OUTPUT);
pinMode(speed2,OUTPUT);
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
pinMode(eco,INPUT);
pinMode(trig,OUTPUT);
Serial.begin(9600);
}

void loop() {
int sensor1_val=digitalRead(sensor1);
int sensor2_val=digitalRead(sensor2);
if(sensor1_val==0&&sensor2_val==1)
{
 Up(); 
}
else if(sensor1_val==0&&sensor2_val==0)
{
 Right(); 
}
if(sensor1_val==1&&sensor2_val==1)
{
 Left(); 
}
if(sensor1_val==1&&sensor2_val==0)
{
 Up(); 
}

 


}
void Up()
{
  digitalWrite(input1,HIGH);
  digitalWrite(input2,LOW);
  analogWrite(speed1,55);
  digitalWrite(input3,HIGH);
  digitalWrite(input4,LOW);
  analogWrite(speed2,55); 
} 
void Back()
{
  digitalWrite(input1,LOW);
  digitalWrite(input2,HIGH);
  analogWrite(speed1,55);
  digitalWrite(input3,LOW);
  digitalWrite(input4,HIGH);
  analogWrite(speed2,55) ;
} 
void Left()
{
  digitalWrite(input1,HIGH);
  digitalWrite(input2,LOW);
  analogWrite(speed1,55);
  digitalWrite(input3,LOW);
  digitalWrite(input4,LOW);
  analogWrite(speed2,55) ;
} 
void Right()
{
  digitalWrite(input1,LOW);
  digitalWrite(input2,LOW);
  analogWrite(speed1,55);
  digitalWrite(input3,HIGH);
  digitalWrite(input4,LOW);
  analogWrite(speed2,55) ;
} 
void Stop()
{
  digitalWrite(input1,LOW);
  digitalWrite(input2,LOW);
  analogWrite(speed1,45);
  digitalWrite(input3,LOW);
  digitalWrite(input4,LOW);
  analogWrite(speed2,45) ;
}
