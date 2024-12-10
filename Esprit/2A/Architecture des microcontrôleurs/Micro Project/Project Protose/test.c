sbit LCD_RS at RC4_bit;
sbit LCD_EN at RC5_bit;
sbit LCD_D4 at RC0_bit;
sbit LCD_D5 at RC1_bit;
sbit LCD_D6 at RC2_bit;
sbit LCD_D7 at RC3_bit;

sbit LCD_RS_Direction at TRISC4_bit;
sbit LCD_EN_Direction at TRISC5_bit;
sbit LCD_D4_Direction at TRISC0_bit;
sbit LCD_D5_Direction at TRISC1_bit;
sbit LCD_D6_Direction at TRISC2_bit;
sbit LCD_D7_Direction at TRISC3_bit;

sbit SIG_PIN at RB6_bit;
sbit SIG_PIN_Direction at TRISB6_bit;

char txt1[] = "Temperature :";
char txt2[] = "Bienvenue";

char i;
int NB;
int x;
int bpm;
int y;
float fre, bpmf;
unsigned long pulse_time = 0;
float distance;

void interrupt() {
  if (intcon.INTF == 1) {
    NB++;
    PORTD = 0b00000100;
    x = 1;
    intcon.INTF = 0;
  }

  if (intcon.RBIF == 1) {
    if (PORTB == 0b00100000) {
      PORTD = 0b00000010;
      Delay_ms(2000);
      y = 1;
    }

    if (PORTB == 0b01000000) {
    }

    // Reset
    intcon.RBIF = 0;
  }

  if (INTCON.T0if == 1) {
    NB--;
    if (NB == 0) {  // //3000=65*46
      // inverser la led après 3s
      PORTD = 0b0000011;
      NB = 77;
      TMR0 = 0;
    }
    INTCON.T0IF = 0;
  }
}

void __init__() {
  // Init Pre-defined values
  intcon.TMR0 = 1;
  intcon.GIE = 1;
  intcon.INTE = 1;
  intcon.RBIE = 1;
  option_reg.INTEDG = 1;

  // Init Timer function
  Option_reg.T0CS = 0;  // Enable Timer mode
  OPTION_REG.PSA = 0;
  OPTION_REG.PS1 = 1;
  OPTION_REG.PS2 = 1;
  OPTION_REG.PS0 = 1;  // PR256
  TMR0 = 0;            // init timer register

  // Lcd init
  ADC_Init();
  Lcd_Init();

  // Set values
  TRISB = 0xFF;
  TRISD = 0b01111000;
  TRISA = 0b111111;
}

void main() {
  float temperature;
  char temperature_str[16];
  __init__();
  while (1) {
    int adc_value = ADC_Get_Sample(0);
    float voltage = (adc_value * 5.0) / 1023.0 * 1000;
    temperature = voltage / 10.0;
    FloatToStr(temperature, temperature_str);
    Lcd_Out(1, 1, txt1);
    Lcd_Out(2, 1, temperature_str);
    Lcd_Cmd(_LCD_CURSOR_OFF);
    if (temperature > 28) {
      portD = 0b10000100;
    } else {
      portD = 0b00000001;
    }
    Delay_ms(500);
    if (x == 1) {
      Lcd_Cmd(_LCD_CLEAR);
      Lcd_Out(1, 1, txt2);
      Delay_ms(3000);
      x = 0;
    }
    if (y == 1) {
      bpm = ADC_Get_Sample(1);
      fre = (bpmf * 5.0) / 1023.0 * 1000;
      bpmf = f / 10.0;
      if (bpm > 100) {
        PORTD = 0b0000011;
        Delay_ms(1000);
        PORTD = 0b0000010;
        Delay_ms(1000);
        PORTD = 0b0000011;
        Delay_ms(1000);
        PORTD = 0b0000010;
        Delay_ms(1000);
        PORTD = 0b0000010;
        Delay_ms(1000);
        y = 0;
      }
    }
  }
}
