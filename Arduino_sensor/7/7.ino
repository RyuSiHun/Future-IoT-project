// C++ code
//
int button=10;
int led=12;

void setup()
{
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop()
{
	int readValue=digitalRead(button);
  
  	if(readValue==1){
  	  digitalWrite(led, 1);	//1
	}
     else{
       digitalWrite(led, 0);	//0
    }
}