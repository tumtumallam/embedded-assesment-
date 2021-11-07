int x;

void main() {
  ANSELA= 0xFF;
  ANSELB= 0;
  ANSELC= 0;
  ANSELD= 0;
  TRISA= 0xFF;
  TRISB= 0x00;
  TRISC= 0x00;
  TRISD= 0x00;

  UART1_Init(9600);
  Delay_ms(1000);
  while (1) {
  x = ADC_Read(1);
  if (x<1500) {
  UART_Write("OFF");
  PORTD= 0xFF;
  PORTB= 0xFF;
  PORTC= 0xFF;
  Delay_ms(100);
  }
  else {
  UART_Write("ON");
  PORTD= 0x00;
  PORTC= 0x00;
  PORTB= 0x00;
  Delay_ms(100);
}
}
}