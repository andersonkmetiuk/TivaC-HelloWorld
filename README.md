# Tiva C - Hello World
Initial development for `EK-TM4C1294NCPDT` board. 

![Tiva C img](/assets/images/tiva_img.jpg)
![Tiva C img2](/assets/images/tiva_img2.jpg)
![Tiva C img3](/assets/images/tiva_img3.jpg)

## Pin Reference from pins_energia.h

```
/*
 ************************************************************************
 *	pins_energia.h
 *
 *	Energia core files for LM4F
 *		Copyright (c) 2012 Robert Wessels. All right reserved.
 *
 *     Contribution: Rei VILO
 *
 ***********************************************************************
 */


#ifndef Pins_Arduino_h
#define Pins_Arduino_h


#include <part.h>

#ifndef BV
#define BV(x) (1 << (x))
#endif 
#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "driverlib/adc.h"


// energia pin definition begin, needed by tool digital_pin_to_template.py
// Pin names based on the 
// board's silkscreen
//
// BOOSTER PACK 1
// X8 and X9

//                   3.3v = 1;  // X8_01
static const uint8_t PE_4 = 2;  // X8_03
static const uint8_t PC_4 = 3;  // X8_05
static const uint8_t PC_5 = 4;  // X8_07
static const uint8_t PC_6 = 5;  // X8_09
static const uint8_t PE_5 = 6;  // X8_11
static const uint8_t PD_3 = 7;  // X8_13
static const uint8_t PC_7 = 8;  // X8_15
static const uint8_t PB_2 = 9;  // X8_17
static const uint8_t PB_3 = 10; // X8_19
static const uint8_t PP_2 = 11; // X9_20
static const uint8_t PN_3 = 12; // X9_18
static const uint8_t PN_2 = 13; // X9_16
static const uint8_t PD_0 = 14; // X9_14
static const uint8_t PD_1 = 15; // X9_12
//                    RST = 16  // X9_10
static const uint8_t PH_3 = 17; // X9_08
static const uint8_t PH_2 = 18; // X9_06
static const uint8_t PM_3 = 19; // X9_04
//                    GND = 20  // X9_02

// X8 and X9
//                     5v = 21  // X8_02
//                    GND = 22  // X8_04
static const uint8_t PE_0 = 23; // X8_06
static const uint8_t PE_1 = 24; // X8_08
static const uint8_t PE_2 = 25; // X8_10
static const uint8_t PE_3 = 26; // X8_12
static const uint8_t PD_7 = 27; // X8_14
static const uint8_t PA_6 = 28; // X8_16
static const uint8_t PM_4 = 29; // X8_18
static const uint8_t PM_5 = 30; // X8_20
static const uint8_t PL_3 = 31; // X9_19
static const uint8_t PL_2 = 32; // X9_17
static const uint8_t PL_1 = 33; // X9_15
static const uint8_t PL_0 = 34; // X9_13
static const uint8_t PL_5 = 35; // X9_11
static const uint8_t PL_4 = 36; // X9_09
static const uint8_t PG_0 = 37; // X9_07
static const uint8_t PF_3 = 38; // X9_05
static const uint8_t PF_2 = 39; // X9_03
static const uint8_t PF_1 = 40; // X9_01
// BOOSTER PACK 1 end

// BOOSTER PACK 2
// X6 and X7
//                   3.3v = 41; // X6_01
static const uint8_t PD_2 = 42; // X6_03
static const uint8_t PP_0 = 43; // X6_05
static const uint8_t PP_1 = 44; // X6_07
static const uint8_t PD_4 = 45; // X6_09 jumper JP4 uart
static const uint8_t PD_5 = 46; // X6_11 jumper JP5 uart
static const uint8_t PQ_0 = 47; // X6_13
static const uint8_t PP_4 = 48; // X6_15 
static const uint8_t PN_5 = 49; // X6_17
static const uint8_t PN_4 = 50; // X6_19
static const uint8_t PM_6 = 51; // X7_20
static const uint8_t PQ_1 = 52; // X7_18
static const uint8_t PP_3 = 53; // X7_16
static const uint8_t PQ_3 = 54; // X7_14
static const uint8_t PQ_2 = 55; // X7_12
//                  RESET = 56; // X7_10
static const uint8_t PA_7 = 57; // X7_08
static const uint8_t PP_5 = 58; // X7_06
static const uint8_t PM_7 = 59; // X7_04
//                    GND = 60; // X7_02
// X6 and X7
//                     5v = 61  // X6_02
//                    GND = 62  // X6_04
static const uint8_t PB_4 = 63; // X6_06
static const uint8_t PB_5 = 64; // X6_08
static const uint8_t PK_0 = 65; // X6_10
static const uint8_t PK_1 = 66; // X6_12
static const uint8_t PK_2 = 67; // X6_14
static const uint8_t PK_3 = 68; // X6_16
static const uint8_t PA_4 = 69; // X6_18
static const uint8_t PA_5 = 70; // X6_20
static const uint8_t PK_7 = 71; // X7_19
static const uint8_t PK_6 = 72; // X7_17
static const uint8_t PH_1 = 73; // X7_15
static const uint8_t PH_0 = 74; // X7_13
static const uint8_t PM_2 = 75; // X7_11
static const uint8_t PM_1 = 76; // X7_09
static const uint8_t PM_0 = 77; // X7_07
static const uint8_t PK_5 = 78; // X7_05
static const uint8_t PK_4 = 79; // X7_03
static const uint8_t PG_1 = 80; // X7_01
// BOOSTER PACK 2 end


// LEDs
static const uint8_t PN_1 = 81; // LED1
static const uint8_t PN_0 = 82; // LED2
static const uint8_t PF_4 = 83; // LED3
static const uint8_t PF_0 = 84; // LED4


// pushbuttons
static const uint8_t PJ_0 = 85; // USR_SW1
static const uint8_t PJ_1 = 86; // USR_SW2

// other
static const uint8_t PD_6 = 87; // AIN5
static const uint8_t PA_0 = 88; // JP4
static const uint8_t PA_1 = 89; // JP5
static const uint8_t PA_2 = 90; // X11_06
static const uint8_t PA_3 = 91; // X11_08
static const uint8_t PL_6 = 92; // unrouted
static const uint8_t PL_7 = 93; // unrouted
static const uint8_t PB_0 = 94; // X11_58
static const uint8_t PB_1 = 95; // unrouted

// energia pin definition end

#define D1_LED         PN_1
#define RED_LED        PN_1
#define D2_LED         PN_0
#define GREEN_LED      PN_0
#define D3_LED         PF_4
#define D4_LED         PF_0

#define ACTIVITY_LED      GPIO_PF4_EN0LED1
#define ACTIVITY_LED_BASE GPIO_PORTF_BASE
#define ACTIVITY_LED_PIN  GPIO_PIN_4
#define LINK_LED          GPIO_PF0_EN0LED0
#define LINK_LED_BASE     GPIO_PORTF_BASE
#define LINK_LED_PIN      GPIO_PIN_0

// LEDs end

// pushbuttons
#define PUSH1      PJ_0
#define PUSH2      PJ_1
#define TEMPSENSOR 0

#define USR_SW1    PJ_0
#define USR_SW2    PJ_1
// pushbuttons end

#define A0  PE_3   /* X8_12 */
#define A1  PE_2   /* X8_10 */
#define A2  PE_1   /* X8_08 */
#define A3  PE_0   /* X8_06 */
#define A4  PD_7   /* X8_14 */
#define A5  PD_6   /* AIN5 */
#define A6  PD_5   /* X6_11 */
#define A7  PD_4   /* X6_09 */
#define A8  PE_5   /* X8_11 */
#define A9  PE_4   /* X8_03 */
#define A10 PB_4   /* X6_06 */
#define A11 PB_5   /* X6_08 */
#define A12 PD_3   /* X8_13 */
#define A13 PD_2   /* X6_03 */
#define A14 PD_1   /* X9_12 */
#define A15 PD_0   /* X9_14 */
#define A16 PK_0   /* X6_10 */
#define A17 PK_1   /* X6_12 */
#define A18 PK_2   /* X6_14 */
#define A19 PK_3   /* X6_16 */

/* pins defines by connector
   Using defines instead of 'static const uint8_t' re-uses correct 
   energia pin declares. Also checks that all Px_x are declared.
*/

//      X6_01 3.3v
//      X6_02 5v
#define X6_03 PD_2
//      X6_04 GND
#define X6_05 PP_0
#define X6_5  PP_0
#define X6_06 PB_4
#define X6_6  PB_4
#define X6_07 PP_1
#define X6_7  PP_1
#define X6_08 PB_5
#define X6_8  PB_5
#define X6_09 PA_0
#define X6_9  PA_0
#define X6_10 PK_0
#define X6_11 PA_1
#define X6_12 PK_1
#define X6_13 PQ_0
#define X6_14 PK_2
#define X6_15 PP_4
#define X6_16 PK_3
#define X6_17 PN_5
#define X6_18 PA_4
#define X6_19 PN_4
#define X6_20 PA_5

#define X7_01 PG_1
//      X7_02 GND
#define X7_03 PK_4
#define X7_3  PK_4
#define X7_04 PM_7
#define X7_4  PM_7
#define X7_05 PK_5
#define X7_5  PK_5
#define X7_06 PP_5
#define X7_6  PP_5
#define X7_07 PM_0
#define X7_7  PM_0
#define X7_08 PA_7
#define X7_8  PA_7
#define X7_09 PM_1
#define X7_9  PM_1
//      X7_10 RESET
#define X7_11 PM_2
#define X7_12 PQ_2
#define X7_13 PH_0
#define X7_14 PQ_3
#define X7_15 PH_1
#define X7_16 PP_3
#define X7_17 PK_6
#define X7_18 PQ_1
#define X7_19 PK_7
#define X7_20 PM_6

//      X8_01 3.3v
//      X8_02 5v
#define X8_03 PE_4
//      X8_04 GND
#define X8_05 PC_4
#define X8_5  PC_4
#define X8_06 PE_0
#define X8_6  PE_0
#define X8_7  PC_5
#define X8_7  PC_5
#define X8_08 PE_1
#define X8_8  PE_1
#define X8_09 PC_6
#define X8_9  PC_6
#define X8_10 PE_2
#define X8_11 PE_5
#define X8_12 PE_3
#define X8_13 PD_3
#define X8_14 PD_7
#define X8_15 PC_7
#define X8_16 PA_6
#define X8_17 PB_2
#define X8_18 PM_4
#define X8_19 PB_3
#define X8_20 PM_5

#define X9_01 PF_1
//      X9_02 GND
#define X9_03 PF_2
#define X9_3  PF_2
#define X9_04 PM_3
#define X9_4  PM_3
#define X9_05 PF_3
#define X9_5  PF_3
#define X9_06 PH_2
#define X9_6  PH_2
#define X9_07 PG_0
#define X9_7  PG_0
#define X9_08 PH_3
#define X9_8  PH_3
#define X9_09 PL_4
#define X9_9  PL_4
//      X9_10 RST
#define X9_11 PL_5
#define X9_12 PD_1
#define X9_13 PL_0
#define X9_14 PD_0
#define X9_15 PL_1
#define X9_16 PN_2
#define X9_17 PL_2
#define X9_18 PN_3
#define X9_19 PL_3
#define X9_20 PP_2


//      X11_01 3.3V
//      X11_02 5.0V
//      X11_03 GND
//      X11_04 GND
#define X11_05 PB_4
#define X11_5  PB_4
#define X11_06 PA_2
#define X11_6  PA_2
#define X11_07 PB_5
#define X11_7  PB_5
#define X11_08 PA_3
#define X11_8  PA_3
#define X11_09 PH_0
#define X11_9  PH_0
#define X11_10 PA_4
#define X11_11 PH_1
#define X11_12 PA_5
#define X11_13 PH_2
#define X11_14 PE_0
#define X11_15 PH_3
#define X11_16 PE_1
#define X11_17 PC_7
#define X11_18 PE_2
#define X11_19 PC_6
#define X11_20 PE_3
#define X11_21 PC_5
#define X11_22 PE_4
#define X11_23 PC_4
#define X11_24 PE_5
#define X11_25 PA_6
#define X11_26 PK_0
#define X11_27 PA_7
#define X11_28 PK_1
#define X11_29 PG_1
#define X11_30 PK_2
#define X11_31 PG_0
#define X11_32 PK_3
#define X11_33 PM_3
//      X11_34 VREF
//      X11_35 GND
//      X11_36 GND
#define X11_37 PM_2
#define X11_38 PD_5
#define X11_39 PM_1
#define X11_40 PD_4
#define X11_41 PM_0
#define X11_42 PD_7
#define X11_43 PL_0
#define X11_44 PD_6
#define X11_45 PL_1
#define X11_46 PD_3
#define X11_47 PL_2
#define X11_48 PD_1
#define X11_49 PL_3
#define X11_50 PD_0
#define X11_51 PQ_0
#define X11_52 PD_2
#define X11_53 PQ_1
#define X11_54 PP_0
#define X11_55 PQ_2
#define X11_56 PP_1
#define X11_57 PQ_3
#define X11_58 PB_0
#define X11_59 PK_7
//      TARGET_VBUS
#define X11_61 GND
#define X11_62 GND
#define X11_63 PK_6
#define X11_64 PF_4
#define X11_65 PL_4
#define X11_66 PF_0
#define X11_67 PB_2
#define X11_68 PF_1
#define X11_69 PB_3
#define X11_70 PF_2
#define X11_71 PP_2
#define X11_72 PF_3
#define X11_73 PP_3
#define X11_74 PA_0
#define X11_75 PK_5
#define X11_76 PA_1
#define X11_77 PK_4
#define X11_78 PP_4
#define X11_79 PL_5
#define X11_80 PP_5
#define X11_81 PN_4
#define X11_82 PJ_0
#define X11_83 PN_5
#define X11_84 PJ_1
#define X11_85 PN_0
#define X11_86 PM_7
#define X11_87 PN_1
#define X11_88 PM_6
#define X11_89 PN_2
#define X11_90 PM_5
#define X11_91 PN_3
#define X11_92 PM_4
#define X11_93 PQ_4
#define X11_99 PQ_40
//      X11_94 TARGET_RESET
//      X11_95 WAKE
//      X11_96 GND
//      X11_97 5.0V
//      X11_98 3.3V


// end connector pin defines

#ifdef ARDUINO_MAIN
```

## Blink

```
#include <Arduino.h>

#define TIME 250

void setup()
{
  pinMode(D1_LED, OUTPUT);
  pinMode(D2_LED, OUTPUT);
  pinMode(D3_LED, OUTPUT);
  pinMode(D4_LED, OUTPUT);
}

void loop()
{
  digitalWrite(D1_LED, HIGH);
  delay(TIME);

  digitalWrite(D1_LED, LOW);
  digitalWrite(D2_LED, HIGH);
  delay(TIME);

  digitalWrite(D2_LED, LOW);
  digitalWrite(D3_LED, HIGH);
  delay(TIME);

  digitalWrite(D3_LED, LOW);
  digitalWrite(D4_LED, HIGH);
  delay(TIME);
  digitalWrite(D4_LED, LOW);
}
```