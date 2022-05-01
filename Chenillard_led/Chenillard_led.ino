int led1= 8;
int led2 = 9;
int led3 = 10;
int pushbutton = 4;


void setup() 
{
    Serial.begin(9600);

  pinMode(pushbutton, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() 
{
  int buttonstate = digitalRead(pushbutton);
  
if (buttonstate ==0)
  {
  Serial.print("Chenillard en fonctionnement");
  Serial.println(buttonstate);

  digitalWrite(led1, LOW);
  delay(200);
  digitalWrite(led1, HIGH);
  
  digitalWrite(led2, LOW);
  delay(200);
  digitalWrite(led2, HIGH);
  
  digitalWrite(led3, LOW);
  delay(200);
  digitalWrite(led3, HIGH);
  }
 
else 
 {
  Serial.print("Chenillard à l'arrêt");
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
 }
}


  


