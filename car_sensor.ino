const int trig = 11;
const int echo = 12;

const int buzzer = 13;

const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;
const int LED5 = 4;
const int LED6 = 3;
const int LED7 = 2;

int duration1 = 0;
int duration2 = 0;

int distance = 0;

void setup()
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);

  pinMode(buzzer , OUTPUT);
 
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
 
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration1 = pulseIn(echo , HIGH);

  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration2 = pulseIn(echo , HIGH);
  
  distance = (duration1+duration2/2) / 28.5 ;
  Serial.println(distance);

  
 

  if ( distance <= 5 )
  {
    digitalWrite(LED1, HIGH);
   digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(LED1, LOW);
  }
  if ( distance <= 7 )
  {
    
    digitalWrite(LED2, HIGH);
     digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
  }
  else
  {
    digitalWrite(buzzer, LOW);
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 10 )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 15 )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 17 )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5, LOW);
  }
  if ( distance <= 20 )
  {
    digitalWrite(LED6, HIGH);
    
  }
  else
  {
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 25 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
 
    digitalWrite(LED7, LOW);
  }
}
