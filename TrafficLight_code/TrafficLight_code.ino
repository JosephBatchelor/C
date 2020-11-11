
/** 
This first secton is me declaring the varibles that i will be using for the 
trafficlight task. As you can see i have three varibles for each colour light.
These have each be assigned an individual port value which will be used to 
allow me comunicate with them go give them specific and seperatefunctions.
**/
  int green = 13 ; // port 13.
  int amber = 12 ; //port 12.
  int red = 11; //port 11.
/**
The setup() function is designed to be ran once when the program starts.
within my setup() i am defining which port values ill be
using on the arduino board. because ive stored the values
of the ports as varibles i can use the varible name.
**/
  void setup(){ 
pinMode(green, OUTPUT);//Using a function known as pinmode()allows me to configure
pinMode(amber, OUTPUT);//a spesfic pin to behave either as an input or output.
pinMode(red, OUTPUT);//In this case it says green which is port value 13 will used for output. 
 }                //This has been done three times as its assigns each pin / varible to output.

/** 
The loop() function is designed to continuously run code with the body until a condition is met.
however, if a condition has not been set it will run indefinitely. Within the fucntion below 
i havent set a condition which means that what ever is within the body will be constantly run.
Within the body i have my traffic light function that gives instructions for the LED's. when called.
so my function is constantly called however has break intervals of 3 seconds before it can be called again.
**/
void loop(){
 TrafficLight(green , amber , red);//This calls TrafficLight()which executes the code within the body.
 delay(3000);// This delay function stops the initialization of code for a certain time, which i set to 3 seconds.
  }
/** 
This is my TrafficLight() function that i created to simulate the traffic light sequence with the arrays.
This contains code that will tell what the LED's have to do by using their port value /varible along with 
A certain function call DigitialWrite(). Function Trafficlight hold a Integer data type for the method.
This will return an integer which is what this function does.
**/
int TrafficLight (int green , int amber , int red){ 
  //PHASE ONE - Red light is the only light on for 8 seconds.
  digitalWrite(green, LOW); //digitalWrite function is used to tell the arduino to do somthing 
  digitalWrite(amber, LOW); // which is in this case is change the LED's to high or to low.
  digitalWrite(red, HIGH); // low meaning off and high meaning 5v / on.
  delay(8000);
  //PHASE TWO - Red and amber are both on for 3 seconds.
  digitalWrite(amber, HIGH);
  delay(3000);
  //PHASE THREE - Red and amber turn off and then green turns on for 3 seconds. and blinks when about to change.
  digitalWrite(green, HIGH);
  digitalWrite(amber, LOW);
  digitalWrite(red, LOW);
  delay(8000);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  delay(1000);
  //PHASE FOUR - Green light turns off and amber is turned on for 3 seconds.
  digitalWrite(green, LOW);
  digitalWrite(amber, HIGH);
  }
