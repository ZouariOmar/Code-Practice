
_interrupt:
	MOVWF      R15+0
	SWAPF      STATUS+0, 0
	CLRF       STATUS+0
	MOVWF      ___saveSTATUS+0
	MOVF       PCLATH+0, 0
	MOVWF      ___savePCLATH+0
	CLRF       PCLATH+0

;MyProject.c,33 :: 		void interrupt() {
;MyProject.c,34 :: 		if (intcon.INTF == 1) {
	BTFSS      INTCON+0, 1
	GOTO       L_interrupt0
;MyProject.c,35 :: 		NB++;
	INCF       _NB+0, 1
	BTFSC      STATUS+0, 2
	INCF       _NB+1, 1
;MyProject.c,36 :: 		PORTD = 0b00000100;
	MOVLW      4
	MOVWF      PORTD+0
;MyProject.c,37 :: 		x = 1;
	MOVLW      1
	MOVWF      _x+0
	MOVLW      0
	MOVWF      _x+1
;MyProject.c,38 :: 		intcon.INTF = 0;
	BCF        INTCON+0, 1
;MyProject.c,39 :: 		}
L_interrupt0:
;MyProject.c,40 :: 		if (intcon.RBIF == 1) {
	BTFSS      INTCON+0, 0
	GOTO       L_interrupt1
;MyProject.c,41 :: 		if(PORTB==0b00100000){
	MOVF       PORTB+0, 0
	XORLW      32
	BTFSS      STATUS+0, 2
	GOTO       L_interrupt2
;MyProject.c,42 :: 		PORTD = 0b00000010;
	MOVLW      2
	MOVWF      PORTD+0
;MyProject.c,43 :: 		Delay_ms(2000);
	MOVLW      21
	MOVWF      R11+0
	MOVLW      75
	MOVWF      R12+0
	MOVLW      190
	MOVWF      R13+0
L_interrupt3:
	DECFSZ     R13+0, 1
	GOTO       L_interrupt3
	DECFSZ     R12+0, 1
	GOTO       L_interrupt3
	DECFSZ     R11+0, 1
	GOTO       L_interrupt3
	NOP
;MyProject.c,44 :: 		y=1;
	MOVLW      1
	MOVWF      _y+0
	MOVLW      0
	MOVWF      _y+1
;MyProject.c,45 :: 		}
L_interrupt2:
;MyProject.c,46 :: 		if(PORTB==0b01000000){
	MOVF       PORTB+0, 0
	XORLW      64
	BTFSS      STATUS+0, 2
	GOTO       L_interrupt4
;MyProject.c,48 :: 		}
L_interrupt4:
;MyProject.c,49 :: 		intcon.RBIF=0;
	BCF        INTCON+0, 0
;MyProject.c,52 :: 		}
L_interrupt1:
;MyProject.c,53 :: 		}
L_end_interrupt:
L__interrupt20:
	MOVF       ___savePCLATH+0, 0
	MOVWF      PCLATH+0
	SWAPF      ___saveSTATUS+0, 0
	MOVWF      STATUS+0
	SWAPF      R15+0, 1
	SWAPF      R15+0, 0
	RETFIE
; end of _interrupt

_main:

;MyProject.c,55 :: 		void main() {
;MyProject.c,58 :: 		intcon.GIE=1;
	BSF        INTCON+0, 7
;MyProject.c,59 :: 		intcon.INTE=1;
	BSF        INTCON+0, 4
;MyProject.c,60 :: 		intcon.RBIE=1;
	BSF        INTCON+0, 3
;MyProject.c,61 :: 		option_reg.INTEDG=1;
	BSF        OPTION_REG+0, 6
;MyProject.c,62 :: 		ADC_Init();
	CALL       _ADC_Init+0
;MyProject.c,63 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;MyProject.c,64 :: 		TRISB=0xFF;
	MOVLW      255
	MOVWF      TRISB+0
;MyProject.c,65 :: 		TRISD = 0b01111000;
	MOVLW      120
	MOVWF      TRISD+0
;MyProject.c,66 :: 		TRISA = 0b111111;
	MOVLW      63
	MOVWF      TRISA+0
;MyProject.c,67 :: 		while(1) {
L_main5:
;MyProject.c,68 :: 		int adc_value = ADC_Get_Sample(0);
	CLRF       FARG_ADC_Get_Sample_channel+0
	CALL       _ADC_Get_Sample+0
;MyProject.c,69 :: 		float voltage = (adc_value * 5.0) / 1023.0 * 1000;
	CALL       _int2double+0
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      32
	MOVWF      R4+2
	MOVLW      129
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
	MOVLW      0
	MOVWF      R4+0
	MOVLW      192
	MOVWF      R4+1
	MOVLW      127
	MOVWF      R4+2
	MOVLW      136
	MOVWF      R4+3
	CALL       _Div_32x32_FP+0
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      122
	MOVWF      R4+2
	MOVLW      136
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
;MyProject.c,70 :: 		temperature = voltage / 10.0;
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      32
	MOVWF      R4+2
	MOVLW      130
	MOVWF      R4+3
	CALL       _Div_32x32_FP+0
	MOVF       R0+0, 0
	MOVWF      main_temperature_L0+0
	MOVF       R0+1, 0
	MOVWF      main_temperature_L0+1
	MOVF       R0+2, 0
	MOVWF      main_temperature_L0+2
	MOVF       R0+3, 0
	MOVWF      main_temperature_L0+3
;MyProject.c,71 :: 		FloatToStr(temperature, temperature_str);
	MOVF       R0+0, 0
	MOVWF      FARG_FloatToStr_fnum+0
	MOVF       R0+1, 0
	MOVWF      FARG_FloatToStr_fnum+1
	MOVF       R0+2, 0
	MOVWF      FARG_FloatToStr_fnum+2
	MOVF       R0+3, 0
	MOVWF      FARG_FloatToStr_fnum+3
	MOVLW      main_temperature_str_L0+0
	MOVWF      FARG_FloatToStr_str+0
	CALL       _FloatToStr+0
;MyProject.c,72 :: 		Lcd_Out(1, 1, txt1);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _txt1+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;MyProject.c,73 :: 		Lcd_Out(2, 1, temperature_str);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_temperature_str_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;MyProject.c,74 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;MyProject.c,75 :: 		if (temperature > 28) {
	MOVF       main_temperature_L0+0, 0
	MOVWF      R4+0
	MOVF       main_temperature_L0+1, 0
	MOVWF      R4+1
	MOVF       main_temperature_L0+2, 0
	MOVWF      R4+2
	MOVF       main_temperature_L0+3, 0
	MOVWF      R4+3
	MOVLW      0
	MOVWF      R0+0
	MOVLW      0
	MOVWF      R0+1
	MOVLW      96
	MOVWF      R0+2
	MOVLW      131
	MOVWF      R0+3
	CALL       _Compare_Double+0
	MOVLW      1
	BTFSC      STATUS+0, 0
	MOVLW      0
	MOVWF      R0+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main7
;MyProject.c,76 :: 		portD = 0b10000100;
	MOVLW      132
	MOVWF      PORTD+0
;MyProject.c,77 :: 		} else {
	GOTO       L_main8
L_main7:
;MyProject.c,78 :: 		portD = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;MyProject.c,79 :: 		}
L_main8:
;MyProject.c,80 :: 		Delay_ms(500);
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main9:
	DECFSZ     R13+0, 1
	GOTO       L_main9
	DECFSZ     R12+0, 1
	GOTO       L_main9
	DECFSZ     R11+0, 1
	GOTO       L_main9
	NOP
	NOP
;MyProject.c,81 :: 		if(x==1){
	MOVLW      0
	XORWF      _x+1, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main22
	MOVLW      1
	XORWF      _x+0, 0
L__main22:
	BTFSS      STATUS+0, 2
	GOTO       L_main10
;MyProject.c,82 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;MyProject.c,83 :: 		Lcd_Out(1,1,txt2);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _txt2+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;MyProject.c,84 :: 		Delay_ms(3000);
	MOVLW      31
	MOVWF      R11+0
	MOVLW      113
	MOVWF      R12+0
	MOVLW      30
	MOVWF      R13+0
L_main11:
	DECFSZ     R13+0, 1
	GOTO       L_main11
	DECFSZ     R12+0, 1
	GOTO       L_main11
	DECFSZ     R11+0, 1
	GOTO       L_main11
	NOP
;MyProject.c,85 :: 		x=0;
	CLRF       _x+0
	CLRF       _x+1
;MyProject.c,86 :: 		}
L_main10:
;MyProject.c,87 :: 		if(y == 1) {
	MOVLW      0
	XORWF      _y+1, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main23
	MOVLW      1
	XORWF      _y+0, 0
L__main23:
	BTFSS      STATUS+0, 2
	GOTO       L_main12
;MyProject.c,88 :: 		bpm = ADC_Get_Sample(1);
	MOVLW      1
	MOVWF      FARG_ADC_Get_Sample_channel+0
	CALL       _ADC_Get_Sample+0
	MOVF       R0+0, 0
	MOVWF      FLOC__main+0
	MOVF       R0+1, 0
	MOVWF      FLOC__main+1
	MOVF       FLOC__main+0, 0
	MOVWF      _bpm+0
	MOVF       FLOC__main+1, 0
	MOVWF      _bpm+1
;MyProject.c,89 :: 		fre = (bpmf * 5.0) / 1023.0 * 1000 ;
	MOVF       _bpmf+0, 0
	MOVWF      R0+0
	MOVF       _bpmf+1, 0
	MOVWF      R0+1
	MOVF       _bpmf+2, 0
	MOVWF      R0+2
	MOVF       _bpmf+3, 0
	MOVWF      R0+3
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      32
	MOVWF      R4+2
	MOVLW      129
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
	MOVLW      0
	MOVWF      R4+0
	MOVLW      192
	MOVWF      R4+1
	MOVLW      127
	MOVWF      R4+2
	MOVLW      136
	MOVWF      R4+3
	CALL       _Div_32x32_FP+0
	MOVLW      0
	MOVWF      R4+0
	MOVLW      0
	MOVWF      R4+1
	MOVLW      122
	MOVWF      R4+2
	MOVLW      136
	MOVWF      R4+3
	CALL       _Mul_32x32_FP+0
	MOVF       R0+0, 0
	MOVWF      _fre+0
	MOVF       R0+1, 0
	MOVWF      _fre+1
	MOVF       R0+2, 0
	MOVWF      _fre+2
	MOVF       R0+3, 0
	MOVWF      _fre+3
;MyProject.c,90 :: 		bpmf = f / 10.0;
	MOVLW      205
	MOVWF      _bpmf+0
	MOVLW      204
	MOVWF      _bpmf+1
	MOVLW      76
	MOVWF      _bpmf+2
	MOVLW      123
	MOVWF      _bpmf+3
;MyProject.c,91 :: 		if(bpm>100){
	MOVLW      128
	MOVWF      R0+0
	MOVLW      128
	XORWF      FLOC__main+1, 0
	SUBWF      R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main24
	MOVF       FLOC__main+0, 0
	SUBLW      100
L__main24:
	BTFSC      STATUS+0, 0
	GOTO       L_main13
;MyProject.c,92 :: 		PORTD=0b0000011;
	MOVLW      3
	MOVWF      PORTD+0
;MyProject.c,93 :: 		Delay_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main14:
	DECFSZ     R13+0, 1
	GOTO       L_main14
	DECFSZ     R12+0, 1
	GOTO       L_main14
	DECFSZ     R11+0, 1
	GOTO       L_main14
	NOP
	NOP
;MyProject.c,94 :: 		PORTD=0b0000010;
	MOVLW      2
	MOVWF      PORTD+0
;MyProject.c,95 :: 		Delay_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main15:
	DECFSZ     R13+0, 1
	GOTO       L_main15
	DECFSZ     R12+0, 1
	GOTO       L_main15
	DECFSZ     R11+0, 1
	GOTO       L_main15
	NOP
	NOP
;MyProject.c,96 :: 		PORTD=0b0000011;
	MOVLW      3
	MOVWF      PORTD+0
;MyProject.c,97 :: 		Delay_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main16:
	DECFSZ     R13+0, 1
	GOTO       L_main16
	DECFSZ     R12+0, 1
	GOTO       L_main16
	DECFSZ     R11+0, 1
	GOTO       L_main16
	NOP
	NOP
;MyProject.c,98 :: 		PORTD=0b0000010;
	MOVLW      2
	MOVWF      PORTD+0
;MyProject.c,99 :: 		Delay_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main17:
	DECFSZ     R13+0, 1
	GOTO       L_main17
	DECFSZ     R12+0, 1
	GOTO       L_main17
	DECFSZ     R11+0, 1
	GOTO       L_main17
	NOP
	NOP
;MyProject.c,100 :: 		PORTD=0b0000010;
	MOVLW      2
	MOVWF      PORTD+0
;MyProject.c,101 :: 		Delay_ms(1000);
	MOVLW      11
	MOVWF      R11+0
	MOVLW      38
	MOVWF      R12+0
	MOVLW      93
	MOVWF      R13+0
L_main18:
	DECFSZ     R13+0, 1
	GOTO       L_main18
	DECFSZ     R12+0, 1
	GOTO       L_main18
	DECFSZ     R11+0, 1
	GOTO       L_main18
	NOP
	NOP
;MyProject.c,102 :: 		y=0;
	CLRF       _y+0
	CLRF       _y+1
;MyProject.c,103 :: 		}
L_main13:
;MyProject.c,104 :: 		}
L_main12:
;MyProject.c,105 :: 		}
	GOTO       L_main5
;MyProject.c,106 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
