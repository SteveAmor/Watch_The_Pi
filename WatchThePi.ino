#define RELAY 3
#define LED 13

void setup(void)
{
  pinMode(RELAY, OUTPUT); 
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  attachInterrupt(0, software_Reset, FALLING);
}

void loop(void) 
{
  delay(300000);
  digitalWrite(RELAY, HIGH);
  delay(5000);
  digitalWrite(RELAY, LOW);
}

void software_Reset() // Restarts program from beginning but does not reset the peripherals and registers
{
  asm volatile ("  jmp 0");  
}

