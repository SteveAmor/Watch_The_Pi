#define RELAY 3

void setup(void)
{
  pinMode(RELAY, OUTPUT); 
  attachInterrupt(0, software_Reset, FALLING);
}

void loop(void) 
{
  delay(300000);
  digitalWrite(RELAY, HIGH);
  delay(5000);
  digitalWrite(RELAY, LOW);
}

void software_Reset() // Restarts program from beginning
{
  asm volatile ("  jmp 0");  
}

