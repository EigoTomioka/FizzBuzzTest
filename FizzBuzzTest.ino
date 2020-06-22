#define WAIT_TIME           (200) // [ms]


// int g_display_mode;
// int g_count = 1;

int g_count= 1;

void setup() 
{
	Serial.begin(115200);
}

void loop() 
{
  if(g_count>100){
    g_count=1;
  }

	if (g_count%5==0 && g_count%3!=0){
    printf("%d: Fizz\n",g_count);
  }
  else if(g_count%3==0 && g_count%5!=0){
    printf("%d: Buzz\n",g_count); // output string (and 
  }
  else if(g_count%15==0){
    printf("%d: FizzBuzz\n",g_count); // output string (and 
  }
  else {
    printf("%d\n",g_count); // output string (and 
  }
  
  g_count++;
  delay(WAIT_TIME);
}
