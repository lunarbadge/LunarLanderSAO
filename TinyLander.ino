

int A = 1;	// X1
int B = 3;	// X2
int C = 4;	// X3

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT); 
  pinMode(C, OUTPUT);  
}


/*
* Turn on the given LED
*
* @paramledNum LED to turn on (1..6)
*
*/
void setLED(int ledNum)
{
	if(ledNum == 1)
	{
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, OUTPUT); 
  
                digitalWrite(A, HIGH);             
                digitalWrite(C, LOW);
	}

	if(ledNum == 2)
	{
                pinMode(A, OUTPUT);
                pinMode(B, INPUT); 
                pinMode(C, OUTPUT);
                
                digitalWrite(A, LOW);             
                digitalWrite(C, HIGH);
	}

	if(ledNum == 3)	// turns on two lights LED 1 & 2.
	{ 
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
             
                 digitalWrite(A, HIGH);
                 digitalWrite(B, LOW);        
	}

	if(ledNum == 4)  // turns on no lights
	{
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                
                digitalWrite(A, LOW);
                digitalWrite(B,HIGH);
	}

	if(ledNum == 5)
	{

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);               

                digitalWrite(B, HIGH);
                digitalWrite(C, LOW);
	}

	if(ledNum == 6)
	{

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);  

                digitalWrite(B, LOW);
                digitalWrite(C, HIGH);
	}
}

void loop()
{
    int patterns[3][6] = {
        {1,3,5,4,2,6}, // circle
        {1,6,2,4,5,3}, //reverse circle
        {2,6,4,1,3,5},
    };

    int delays[4] = {500, 200, 100, 300};

    for (int d = 0; d < 4; d++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int repeat = 0; repeat < 3; repeat++)
            {
                for (int k = 0; k < 6; k++)
                {
                    setLED(patterns[j][k]);
                    delay(delays[d]);
                }
            }
        }
    }
}
