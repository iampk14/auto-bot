int forwardRight = 12;   //right motor, forward action
int forwardLeft = 9;    //left motor, forward action
int backwardRight = 10;   //right motor, backward action
int backwardLeft = 8;    //left motor, backward action

const int IrSensorR=7;   //Ir sensor for rightturn
const int IrSensorL=6;   //Ir sensor for leftturn
const int IrSensorM=5;   //Ir sensor for move forward 
const int IrSensorRW=4;  //Ir sensor for right45 turn
const int IrSensorLW=3;  //Ir sensor for left45 turn

int IrReadingR, IrReadingL, IrReadingM, IrReadingRW, IrReadingLW , Path1[50][50]; 

void setup()
{
  pinMode(IrSensorR,INPUT);
  pinMode(IrSensorRW,INPUT);
  pinMode(IrSensorLW,INPUT);
  pinMode(IrSensorL,INPUT);
  pinMode(IrSensorM,INPUT);
  pinMode(forwardRight, OUTPUT);
  pinMode(forwardLeft, OUTPUT);
  pinMode(backwardRight, OUTPUT);
  pinMode(backwardLeft, OUTPUT);
  Serial.begin(9600);   //for establishing communication between arduino and others at 9600 bauds(standard value)
}

void Forward()   //function for forward action of the right motor
{
  digitalWrite(forwardRight, HIGH);
  digitalWrite(forwardLeft, HIGH);
}


void right()   //function for right action of the robot
{
  digitalWrite(forwardLeft, HIGH);
  digitalWrite(backwardRight, LOW);
}

void left()    //function for left action of the robot
{
  digitalWrite(forwardRight, HIGH);
  digitalWrite(backwardLeft, LOW);
}

void allstop()    //function for stopping the robot
{
  digitalWrite(forwardRight, LOW);
  digitalWrite(backwardRight, LOW);
  digitalWrite(backwardLeft, LOW);
  digitalWrite(forwardLeft, LOW);
}

void path1S()
{ 
  if(IrReadingLW==1 && IrReadingL==1 && IrReadingM==0 && IrReadingR==1 && IrReadingRW==1)
  Path1[0][1]=1;
  else if(IrReadingLW==1 && IrReadingL==0 && IrReadingM==0 && IrReadingR==0 && IrReadingRW==1)
  Path1[0][1]=1;
  else if(IrReadingLW==0 && IrReadingL==1 && IrReadingM==0 && IrReadingR==1 && IrReadingRW==0)
  Path1[0][1]=1;
  else if(IrReadingLW==0 && IrReadingL==1 && IrReadingM==0 && IrReadingR==1 && IrReadingRW==0)

  else if(IrReadingLW==0 && IrReadingL==1 && IrReadingM==0 && IrReadingR==1 && IrReadingRW==0)

  else if(IrReadingLW==0 && IrReadingL==1 && IrReadingM==0 && IrReadingR==1 && IrReadingRW==0)
}
void loop()
{
 IrReadingR=digitalRead(IrSensorR);         //Taking values
 IrReadingL=digitalRead(IrSensorL);
 IrReadingM=digitalRead(IrSensorM);
 IrReadingLW=digitalRead(IrSensorLW);
 IrReadingRW=digitalRead(IrSensorRW);
} 
