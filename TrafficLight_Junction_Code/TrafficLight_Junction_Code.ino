
//set1
  int green1 = 13 ; // port 13.
  int amber1 = 12 ; //port 12.
  int red1 = 11; //port 11.
//set2
  int green2 = 10 ; // port 13.
  int amber2 = 9 ; //port 12.
  int red2 = 8 ; //port 11.

  void setup(){ 
pinMode(green1, OUTPUT); 
pinMode(amber1, OUTPUT);
pinMode(red1, OUTPUT);

pinMode(green2, OUTPUT); 
pinMode(amber2, OUTPUT);
pinMode(red2, OUTPUT);
  Serial.begin(9600);  

 }              

void loop(){
 TrafficLightSet1(green1 , amber1 , red1 , red2);
  TrafficLightSet2(green2 , amber2 , red2);
  }

int TrafficLightSet1 (int green1 , int amber1 , int red1, int red2){ 
 
  //PHASE TWO - Red and amber are both on for 3 seconds.
   digitalWrite(red2, HIGH); 
  digitalWrite(amber1, HIGH);
  delay(3000);
  
  //PHASE THREE - Red and amber turn off and then green turns on for 3 seconds. and blinks when about to change.
  digitalWrite(green1, HIGH);
  digitalWrite(amber1, LOW);
  digitalWrite(red1, LOW);
  delay(8000);
  digitalWrite(green1, LOW);
  delay(1000);
  digitalWrite(green1, HIGH);
  delay(1000);
  digitalWrite(green1, LOW);
  delay(1000);
  digitalWrite(green1, HIGH);
  delay(1000);
  
  //PHASE FOUR - Green light turns off and amber is turned on for 3 seconds.
  digitalWrite(green1, LOW);
  digitalWrite(amber1, HIGH);
    delay(2000);
    
  //PHASE ONE - Red light is the only light on for 8 seconds.
  digitalWrite(green1, LOW); //digitalWrite function is used to tell the arduino to do somthing 
  digitalWrite(amber1, LOW); // which is in this case is change the LED's to high or to low.
  digitalWrite(red1, HIGH); // low meaning off and high meaning 5v / on.
  
  }

  int TrafficLightSet2 (int green2 , int amber2 , int red2){ 
 
  //PHASE TWO - Red and amber are both on for 3 seconds.
   digitalWrite(red2, LOW); 
  digitalWrite(amber2, HIGH);
  delay(3000);
  
  //PHASE THREE - Red and amber turn off and then green turns on for 3 seconds. and blinks when about to change.
  digitalWrite(green2, HIGH);
  digitalWrite(amber2, LOW);
  digitalWrite(red2, LOW);
  delay(8000);
  digitalWrite(green2, LOW);
  delay(1000);
  digitalWrite(green2, HIGH);
  delay(1000);
  digitalWrite(green2, LOW);
  delay(1000);
  digitalWrite(green2, HIGH);
  delay(1000);
  
  //PHASE FOUR - Green light turns off and amber is turned on for 3 seconds.
  digitalWrite(green2, LOW);
  digitalWrite(amber2, HIGH);
  delay(2000);
  
  //PHASE ONE - Red light is the only light on for 8 seconds.
  digitalWrite(green2, LOW); 
  digitalWrite(amber2, LOW);
  digitalWrite(red2, HIGH); 
  
  }
