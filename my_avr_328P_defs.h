#define	BIT1(bit0,	shl0)													((bit0 << shl0))
#define	BIT2(bit1,	bit0,	shl1,	shl0)									((bit1 << shl1) | (bit0 << shl0))
#define	BIT3(bit2,	bit1,	bit0,	shl2,	shl1,	shl0)					((bit2 << shl2) | (bit1 << shl1) | (bit0 << shl0))
#define	BIT4(bit3,	bit2,	bit1,	bit0,	shl3,	shl2,	shl1,	shl0)	((bit3 << shl3) | (bit2 << shl2) | (bit1 << shl1) | (bit0 << shl0))

/*** EEPROM ***/
// Programming Mode EEPM[1:0]
#define	EEPROM_EEPM_ERASE_AND_WRITE_IN_ONE_OPERATION				BIT2(0, 0,	EEPM1, EEPM0)						// 3,4 ms programming time
#define	EEPROM_EEPM_ERASE_ONLY										BIT2(0, 1,	EEPM1, EEPM0)						// 1,8 ms programming time
#define	EEPROM_EEPM_WRITE_ONLY										BIT2(1,	0,	EEPM1, EEPM0)						// 1,8 ms programming time

/*** TIMERS/COUNTERS ***/
// T/C Synchronization Mode TSM
#define	TC_SYNCH_MODE_ON											BIT1(1,	TSM)
#define	TC_SYNCH_MODE_OFF											BIT1(0,	TSM)

/** T/C 0 **/
// Compare Output A Mode COM0A[1:0]
#define	TC0_NPWM_NORMAL_OPERATION									BIT2(0,	0,	COM0A1, COM0A0)
#define	TC0_NPWM_TOGGLE_OC0A_ON_COMPARE_MATCH						BIT2(0,	1,	COM0A1, COM0A0)
#define	TC0_NPWM_CLEAR_OC0A_ON_COMPARE_MATCH						BIT2(1,	0,	COM0A1, COM0A0)
#define	TC0_NPWM_SET_OC0A_ON_COMPARE_MATCH							BIT2(1,	1,	COM0A1, COM0A0)
#define	TC0_FPWM_NORMAL_OPERATION									BIT2(0,	0,	COM0A1, COM0A0)
#define	TC0_FPWM_WGM02_0_NORMAL_OPERATION							BIT2(0,	1,	COM0A1, COM0A0)
#define	TC0_FPWM_WGM02_1_TOGGLE_OC0A_ON_COMPARE_MATCH				BIT2(0,	1,	COM0A1, COM0A0)
#define	TC0_FPWM_CLEAR_OC0A_ON_COMPARE_MATCH_SET_AT_BOTTOM			BIT2(1,	0,	COM0A1, COM0A0)
#define	TC0_FPWM_SET_OC0A_ON_COMPARE_MATCH_CLEAR_AT_BOTTOM			BIT2(1,	1,	COM0A1, COM0A0)
#define	TC0_PCPWM_NORMAL_OPERATION									BIT2(0,	0,	COM0A1, COM0A0)
#define	TC0_PCPWM_WGM02_0_NORMAL_OPERATION							BIT2(0,	1,	COM0A1, COM0A0)
#define	TC0_PCPWM_WGM02_1_TOGGLE_OC0A_ON_MATCH						BIT2(0,	1,	COM0A1, COM0A0)
#define	TC0_PCPWM_CLEAR_OC0A_ON_MATCH_UP_SET_ON_MATCH_DOWN			BIT2(1,	0,	COM0A1, COM0A0)
#define	TC0_PCPWM_SET_OC0A_ON_MATCH_UP_CLEAR_ON_MATCH_DOWN			BIT2(1,	1,	COM0A1, COM0A0)
// Compare Output B Mode COM0B[1:0]
#define	TC0_NPWM_NORMAL_OPERATION									BIT2(0,	0,	COM0B1, COM0B0)
#define	TC0_NPWM_TOGGLE_OC0B_ON_COMPARE_MATCH						BIT2(0,	1,	COM0B1, COM0B0)
#define	TC0_NPWM_CLEAR_OC0B_ON_COMPARE_MATCH						BIT2(1,	0,	COM0B1, COM0B0)
#define	TC0_NPWM_SET_OC0B_ON_COMPARE_MATCH							BIT2(1,	1,	COM0B1, COM0B0)
#define	TC0_FPWM_NORMAL_OPERATION									BIT2(0,	0,	COM0B1, COM0B0)
#define	TC0_FPWM_CLEAR_OC0B_ON_COMPARE_MATCH_SET_AT_BOTTOM			BIT2(1,	0,	COM0B1, COM0B0)
#define	TC0_FPWM_SET_OC0B_ON_COMPARE_MATCH_CLEAR_AT_BOTTOM			BIT2(1,	1,	COM0B1, COM0B0)
#define	TC0_PCPWM_NORMAL_OPERATION									BIT2(0,	0,	COM0B1, COM0B0)
#define	TC0_PCPWM_CLEAR_OC0B_ON_MATCH_UP_SET_ON_MATCH_DOWN			BIT2(1,	0,	COM0B1, COM0B0)
#define	TC0_PCPWM_SET_OC0B_ON_MATCH_UP_CLEAR_ON_MATCH_DOWN			BIT2(1,	1,	COM0B1, COM0B0)
// Waveform Generation Mode WGM02
#define TC0_WGM02_MODE0_NORMAL										BIT1(0,	WGM02)
#define TC0_WGM02_MODE1_PHASE_CORRECT_PWM							BIT1(0,	WGM02)
#define TC0_WGM02_MODE2_CTC											BIT1(0,	WGM02)
#define TC0_WGM02_MODE3_FAST_PWM									BIT1(0,	WGM02)
#define TC0_WGM02_MODE5_PHASE_CORRECT_PWM							BIT1(1,	WGM02)
#define TC0_WGM02_MODE7_FAST_PWM									BIT1(1,	WGM02)
// Waveform Generation Mode WGM0[1:0]
#define	TC0_WGM01_00_MODE0_NORMAL									BIT2(0,	0,	WGM01,	WGM00)
#define	TC0_WGM01_00_MODE1_PHASE_CORRECT_PWM						BIT2(0,	1,	WGM01,	WGM00)
#define	TC0_WGM01_00_MODE2_CTC										BIT2(1,	0,	WGM01,	WGM00)
#define	TC0_WGM01_00_MODE3_FAST_PWM									BIT2(1,	1,	WGM01,	WGM00)
#define	TC0_WGM01_00_MODE5_PHASE_CORRECT_PWM						BIT2(0,	1,	WGM01,	WGM00)
#define	TC0_WGM01_00_MODE7_FAST_PWM									BIT2(1,	1,	WGM01,	WGM00)
// Clock Select CS0{2:0]
#define	TC0_NO_CLOCK												BIT3(0,	0,	0,	CS02,	CS01,	CS00)
#define	TC0_CLKIO													BIT3(0,	0,	1,	CS02,	CS01,	CS00)
#define	TC0_CLKIO_8													BIT3(0,	1,	0,	CS02,	CS01,	CS00)
#define	TC0_CLKIO_64												BIT3(0,	1,	1,	CS02,	CS01,	CS00)
#define	TC0_CLKIO_256												BIT3(1,	0,	0,	CS02,	CS01,	CS00)
#define	TC0_CLKIO_1024												BIT3(1,	0,	1,	CS02,	CS01,	CS00)
#define	TC0_T0_FALL													BIT3(1,	1,	0,	CS02,	CS01,	CS00)	
#define	TC0_T0_RISE													BIT3(1,	1,	1,	CS02,	CS01,	CS00)
// Overflow Interrupt Enable TOIE0
#define	TC0_OVERFLOW_INTERRUPT_ENABLED								BIT1(1,	TOIE0)
#define	TC0_OVERFLOW_INTERRUPT_DISABLED								BIT1(0,	TOIE0)
// Output Compare Match A Interrupt Enable OCIE0A
#define	TC0_COMPARE_MATCH_A_INTERRUPT_ENABLE						BIT1(1,	OCIE0A)
#define	TC0_COMPARE_MATCH_A_INTERRUPT_DISABLE						BIT1(0,	OCIE0A)
// Output Compare Match B Interrupt Enable OCIE0B
#define	TC0_COMPARE_MATCH_B_INTERRUPT_ENABLE						BIT1(1,	OCIE0B)
#define	TC0_COMPARE_MATCH_B_INTERRUPT_DISABLE						BIT1(0,	OCIE0B)

/** T/C 1 **/
// Compare Output A Mode COM1A[1:0]
#define	TC1_NPWM_NORMAL_OPERATION									BIT2(0,	0,	COM1A1, COM1A0)
#define	TC1_NPWM_TOGGLE_OC1A_ON_COMPARE_MATCH						BIT2(0,	1,	COM1A1, COM1A0)
#define	TC1_NPWM_CLEAR_OC1A_ON_COMPARE_MATCH						BIT2(1,	0,	COM1A1, COM1A0)
#define	TC1_NPWM_SET_OC1A_ON_COMPARE_MATCH							BIT2(1,	1,	COM1A1, COM1A0)
#define	TC1_FPWM_NORMAL_OPERATION									BIT2(0,	0,	COM1A1, COM1A0)
#define	TC1_FPWM_WGM130_NORMAL_OPERATION							BIT2(0,	1,	COM1A1, COM1A0)
#define	TC1_FPWM_WGM130_14_15_TOGGLE_OC0A_ON_COMPARE_MATCH			BIT2(0,	1,	COM1A1, COM1A0)
#define	TC1_FPWM_CLEAR_OC1A_ON_COMPARE_MATCH_SET_AT_BOTTOM			BIT2(1,	0,	COM1A1, COM1A0)
#define	TC1_FPWM_SET_OC1A_ON_COMPARE_MATCH_CLEAR_AT_BOTTOM			BIT2(1,	1,	COM1A1, COM1A0)
#define	TC1_PCPFCPWM_NORMAL_OPERATION								BIT2(0,	0,	COM1A1, COM1A0)
#define	TC1_PCPFCPWM_WGM130_NORMAL_OPERATION						BIT2(0,	1,	COM1A1, COM1A0)
#define	TC1_PCPFCPWM_WGM130_9_11_TOGGLE_OC1A_ON_MATCH				BIT2(0,	1,	COM1A1, COM1A0)
#define	TC1_PCPFCPWM_CLEAR_OC1A_ON_MATCH_UP_SET_ON_MATCH_DOWN		BIT2(1,	0,	COM1A1, COM1A0)
#define	TC1_PCPFCPWM_SET_OC1A_ON_MATCH_UP_CLEAR_ON_MATCH_DOWN		BIT2(1,	1,	COM1A1, COM1A0)
// Compare Output B Mode COM1B[1:0]
#define	TC1_NPWM_NORMAL_OPERATION									BIT2(0,	0,	COM1B1, COM1B0)
#define	TC1_NPWM_TOGGLE_OC1B_ON_COMPARE_MATCH						BIT2(0,	1,	COM1B1, COM1B0)
#define	TC1_NPWM_CLEAR_OC1B_ON_COMPARE_MATCH						BIT2(1,	0,	COM1B1, COM1B0)
#define	TC1_NPWM_SET_OC1B_ON_COMPARE_MATCH							BIT2(1,	1,	COM1B1, COM1B0)
#define	TC1_FPWM_NORMAL_OPERATION									BIT2(0,	0,	COM1B1, COM1B0)
#define	TC1_FPWM_WGM130_0_13_NORMAL_OPERATION						BIT2(0,	1,	COM1B1, COM1B0)
#define	TC1_FPWM_WGM130_14_15_TOGGLE_OC1A_ON_COMPARE_MATCH			BIT2(0,	1,	COM1B1, COM1B0)
#define	TC1_FPWM_CLEAR_OC1B_ON_COMPARE_MATCH_SET_AT_BOTTOM			BIT2(1,	0,	COM1B1, COM1B0)
#define	TC1_FPWM_SET_OC1B_ON_COMPARE_MATCH_CLEAR_AT_BOTTOM			BIT2(1,	1,	COM1B1, COM1B0)
#define	TC1_PCPFCPWM_NORMAL_OPERATION								BIT2(0,	0,	COM1B1, COM1B0)
#define	TC1_PCPFCPWM_WGM130_NORMAL_OPERATION						BIT2(0,	1,	COM1B1, COM1B0)
#define	TC1_PCPFCPWM_WGM130_9_11_TOGGLE_OC1B_ON_MATCH				BIT2(0,	1,	COM1B1, COM1B0)
#define	TC1_PCPFCPWM_CLEAR_OC1B_ON_MATCH_UP_SET_ON_MATCH_DOWN		BIT2(1,	0,	COM1B1, COM1B0)
#define	TC1_PCPFCPWM_SET_OC1B_ON_MATCH_UP_CLEAR_ON_MATCH_DOWN		BIT2(1,	1,	COM1B1, COM1B0)
// Waveform Generation Mode WGM1[3:2]
#define	TC1_WGM03_02_MODE0_NORMAL									BIT2(0,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE1_PWM_PC_8_BIT								BIT2(0,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE2_PWM_PC_9_BIT								BIT2(0,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE3_PWM_PC_10_BIT							BIT2(0,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE4_CTC										BIT2(0,	1,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE5_FPWM_8_BIT								BIT2(0,	1,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE6_FPWM_9_BIT								BIT2(0,	1,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE7_FPWM_10_BIT								BIT2(0,	1,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE8_PWM_PFC									BIT2(1,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE9_PWM_PFC									BIT2(1,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE10_PWM_PC									BIT2(1,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE11_PWM_PC									BIT2(1,	0,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE12_CTC										BIT2(1,	1,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE14_FPWM									BIT2(1,	1,	WGM03,	WGM02)
#define	TC1_WGM03_02_MODE15_FPWM									BIT2(1,	1,	WGM03,	WGM02)
// Waveform Generation Mode WGM1[1:0]
#define	TC1_WGM01_00_MODE0_NORMAL									BIT2(0,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE1_PWM_PC_8_BIT								BIT2(0,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE2_PWM_PC_9_BIT								BIT2(0,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE3_PWM_PC_10_BIT							BIT2(0,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE4_CTC										BIT2(0,	1,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE5_FPWM_8_BIT								BIT2(0,	1,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE6_FPWM_9_BIT								BIT2(0,	1,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE7_FPWM_10_BIT								BIT2(0,	1,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE8_PWM_PFC									BIT2(1,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE9_PWM_PFC									BIT2(1,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE10_PWM_PC									BIT2(1,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE11_PWM_PC									BIT2(1,	0,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE12_CTC										BIT2(1,	1,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE14_FPWM									BIT2(1,	1,	WGM01,	WGM00)
#define	TC1_WGM01_00_MODE15_FPWM									BIT2(1,	1,	WGM01,	WGM00)
// Input Capture Noise Canceller ICNC1
#define	TC1_NOISE_CANCELLER_ACTIVATED								BIT1(1,	ICNC1)
#define	TC1_NOISE_CANCELLER_DEACTIVATED								BIT1(0,	ICNC1)
// Input Capture Edge Select ICES1
#define	TC1_CAPTURE_FALL_TRIGGER									BIT1(0,	ICES1)
#define	TC1_CAPTURE_RISE_TRIGGER									BIT1(1,	ICES1)
// Clock Select CS1{2:0]
#define	TC1_NO_CLOCK												BIT3(0,	0,	0,	CS12,	CS11,	CS10)
#define	TC1_CLKIO													BIT3(0,	0,	1,	CS12,	CS11,	CS10)
#define	TC1_CLKIO_8													BIT3(0,	1,	0,	CS12,	CS11,	CS10)
#define	TC1_CLKIO_64												BIT3(0,	1,	1,	CS12,	CS11,	CS10)
#define	TC1_CLKIO_256												BIT3(1,	0,	0,	CS12,	CS11,	CS10)
#define	TC1_CLKIO_1024												BIT3(1,	0,	1,	CS12,	CS11,	CS10)
#define	TC1_T1_FALL													BIT3(1,	1,	0,	CS12,	CS11,	CS10)	
#define	TC1_T1_RISE													BIT3(1,	1,	1,	CS12,	CS11,	CS10)

/** T/C 2 **/
// Compare Output A Mode COM2A[1:0]
#define	TC2_NPWM_NORMAL_OPERATION									BIT2(0,	0,	COM2A1, COM2A0)
#define	TC2_NPWM_TOGGLE_OC2A_ON_COMPARE_MATCH						BIT2(0,	1,	COM2A1, COM2A0)
#define	TC2_NPWM_CLEAR_OC2A_ON_COMPARE_MATCH						BIT2(1,	0,	COM2A1, COM2A0)
#define	TC2_NPWM_SET_OC2A_ON_COMPARE_MATCH							BIT2(1,	1,	COM2A1, COM2A0)
#define	TC2_FPWM_NORMAL_OPERATION									BIT2(0,	0,	COM2A1, COM2A0)
#define	TC2_FPWM_WGM02_0_NORMAL_OPERATION							BIT2(0,	1,	COM2A1, COM2A0)
#define	TC2_FPWM_WGM02_1_TOGGLE_OC2A_ON_COMPARE_MATCH				BIT2(0,	1,	COM2A1, COM2A0)
#define	TC2_FPWM_CLEAR_OC2A_ON_COMPARE_MATCH_SET_AT_BOTTOM			BIT2(1,	0,	COM2A1, COM2A0)
#define	TC2_FPWM_SET_OC2A_ON_COMPARE_MATCH_CLEAR_AT_BOTTOM			BIT2(1,	1,	COM2A1, COM2A0)
#define	TC2_PCPWM_NORMAL_OPERATION									BIT2(0,	0,	COM2A1, COM2A0)
#define	TC2_PCPWM_WGM02_0_NORMAL_OPERATION							BIT2(0,	1,	COM2A1, COM2A0)
#define	TC2_PCPWM_WGM02_1_TOGGLE_OC2A_ON_MATCH						BIT2(0,	1,	COM2A1, COM2A0)
#define	TC2_PCPWM_CLEAR_OC2A_ON_MATCH_UP_SET_ON_MATCH_DOWN			BIT2(1,	0,	COM2A1, COM2A0)
#define	TC2_PCPWM_SET_OC2A_ON_MATCH_UP_CLEAR_ON_MATCH_DOWN			BIT2(1,	1,	COM2A1, COM2A0)
// Compare Output B Mode COM2B[1:0]
#define	TC2_NPWM_NORMAL_OPERATION									BIT2(0,	0,	COM2B1, COM2B0)
#define	TC2_NPWM_TOGGLE_OC2B_ON_COMPARE_MATCH						BIT2(0,	1,	COM2B1, COM2B0)
#define	TC2_NPWM_CLEAR_OC2B_ON_COMPARE_MATCH						BIT2(1,	0,	COM2B1, COM2B0)
#define	TC2_NPWM_SET_OC2B_ON_COMPARE_MATCH							BIT2(1,	1,	COM2B1, COM2B0)
#define	TC2_FPWM_NORMAL_OPERATION									BIT2(0,	0,	COM2B1, COM2B0)
#define	TC2_FPWM_CLEAR_OC2B_ON_COMPARE_MATCH_SET_AT_BOTTOM			BIT2(1,	0,	COM2B1, COM2B0)
#define	TC2_FPWM_SET_OC2B_ON_COMPARE_MATCH_CLEAR_AT_BOTTOM			BIT2(1,	1,	COM2B1, COM2B0)
#define	TC2_PCPWM_NORMAL_OPERATION									BIT2(0,	0,	COM2B1, COM2B0)
#define	TC2_PCPWM_CLEAR_OC2B_ON_MATCH_UP_SET_ON_MATCH_DOWN			BIT2(1,	0,	COM2B1, COM2B0)
#define	TC2_PCPWM_SET_OC2B_ON_MATCH_UP_CLEAR_ON_MATCH_DOWN			BIT2(1,	1,	COM2B1, COM2B0)
// Waveform Generation Mode WGM22
#define TC0_WGM22_MODE0_NORMAL										BIT1(0,	WGM22)
#define TC0_WGM22_MODE1_PHASE_CORRECT_PWM							BIT1(0,	WGM22)
#define TC0_WGM22_MODE2_CTC											BIT1(0,	WGM22)
#define TC0_WGM22_MODE3_FAST_PWM									BIT1(0,	WGM22)
#define TC0_WGM22_MODE5_PHASE_CORRECT_PWM							BIT1(1,	WGM22)
#define TC0_WGM22_MODE7_FAST_PWM									BIT1(1,	WGM22)
// Waveform Generation Mode WGM2[1:0]
#define	TC0_WGM21_00_MODE0_NORMAL									BIT2(0,	0,	WGM21,	WGM20)
#define	TC0_WGM21_00_MODE1_PHASE_CORRECT_PWM						BIT2(0,	1,	WGM21,	WGM20)
#define	TC0_WGM21_00_MODE2_CTC										BIT2(1,	0,	WGM21,	WGM20)
#define	TC0_WGM21_00_MODE3_FAST_PWM									BIT2(1,	1,	WGM21,	WGM20)
#define	TC0_WGM21_00_MODE5_PHASE_CORRECT_PWM						BIT2(0,	1,	WGM21,	WGM20)
#define	TC0_WGM21_00_MODE7_FAST_PWM									BIT2(1,	1,	WGM21,	WGM20)
// Clock Select CS2{2:0]
#define	TC2_NO_CLOCK												BIT3(0,	0,	0,	CS22,	CS21,	CS20)
#define	TC2_CLKT2S													BIT3(0,	0,	1,	CS22,	CS21,	CS20)
#define	TC2_CLKT2S_8												BIT3(0,	1,	0,	CS22,	CS21,	CS20)
#define	TC2_CLKT2S_32												BIT3(0,	1,	1,	CS22,	CS21,	CS20)
#define	TC2_CLKT2S_64												BIT3(1,	0,	0,	CS22,	CS21,	CS20)
#define	TC2_CLKT2S_128												BIT3(1,	0,	1,	CS22,	CS21,	CS20)
#define	TC2_CLKT2S_256												BIT3(1,	1,	0,	CS22,	CS21,	CS20)	
#define	TC2_CLKT2S_1024												BIT3(1,	1,	1,	CS22,	CS21,	CS20)
// Enable External Clock Input EXCLK
#define	TC2_EXT_CLOCK_INPUT_TOSC1									BIT1(1,	EXCLK)
#define	TC2_EXT_CLOCK_INPUT_32KHZ_CRYSTAL							BIT1(0,	EXCLK)
// Asynchronous Timer/Counter 2 AS2
#define	TC2_ASY_CLOCK_CLKIO											BIT1(0,	AS2)
#define	TC2_ASY_CLOCK_TOSC1											BIT1(1,	AS2)


/*** SPI ***/
// Clock Rate Select SPR[1:0]
#define	SPI_SPI2X_0_FOSC_4											BIT2(0,	0,	SPR1,	SPR0)	
#define	SPI_SPI2X_0_FOSC_16											BIT2(0,	1,	SPR1,	SPR0)
#define	SPI_SPI2X_0_FOSC_64											BIT2(1,	0,	SPR1,	SPR0)
#define	SPI_SPI2X_0_FOSC_128										BIT2(1,	1,	SPR1,	SPR0)
#define	SPI_SPI2X_1_FOSC_2											BIT2(0,	0,	SPR1,	SPR0)
#define	SPI_SPI2X_1_FOSC_8											BIT2(0,	1,	SPR1,	SPR0)	
#define	SPI_SPI2X_1_FOSC_32											BIT2(1,	0,	SPR1,	SPR0)
#define	SPI_SPI2X_1_FOSC_64											BIT2(1,	1,	SPR1,	SPR0)
// Clock phase CPHA
#define	SPI_LEAD_SAMPLE_TRAIL_SETUP									BIT1(0,	CPHA)
#define	SPI_LEAD_SETUP_TRAIL_SAMPLE									BIT1(1,	CPHA)
// Clock polarity CPOL
#define	SPI_LEAD_RISE_TRAIL_FALL									BIT1(0,	CPOL)
#define	SPI_LEAD_FALL_TRAIL_RISE									BIT1(1,	CPOL)
// Master/Slave Select MSTR
#define	SPI_MASTER_MODE												BIT1(1,	MSTR)
#define	SPI_SLAVE_MODE												BIT1(0,	MSTR)
// Data Order DORD
#define	SPI_LSB_FIRST												BIT1(1,	DORD)
#define	SPI_MSB_FIRST												BIT1(0,	DORD)
// Enable SPE
#define	SPI_ENABLED													BIT1(1, SPE)
#define	SPI_DISABLED												BIT1(0, SPE)
// Interrupt Enable SPIE
#define	SPI_INTERRUPT_ENABLED										BIT1(1,	SPIE)
#define	SPI_INTERRUPT_DISABLED										BIT1(0,	SPIE)
// Double Speed Bit SPI2X
#define	SPI_DOUBLE_SPEED											BIT1(1,	SPI2X)
#define	SPI_STANDARD_SPEED											BIT1(0,	SPI2X)

/*** Analog Comparator ***/
// Disable ACD
#define	AC_SWITCHED_OFF												BIT1(1,	ACD)
#define	AC_SWITCHED_ON												BIT1(0,	ACD)
// Bandgap Select ACBG
#define	AC_FIXED_BANDGAP_REFERENCE									BIT1(1,	ACBG)
#define	AC_POSITIVE_INPUT_REFERENCE									BIT1(0,	ACBG)
// Interrupt Enable ACIE
#define	AC_INTERRUPT_ENABLED										BIT1(1,	ACIE)
#define	AC_INTERRUPT_DISABLED										BIT1(0,	ACIE)
// Input Capture Enable ACIC
#define	AC_CAPTURE_ENABLED											BIT1(1,	ACIC)
#define	AC_CAPTURE_DISABLED											BIT1(0,	ACIC)
// Interrupt Mode Select ACIS[1:0]
#define	AC_INTERRUPT_ON_OUTPUT_TOGGLE								BIT2(0,	0,	ACIS1,	ACIS0)
#define	AC_INTERRUPT_ON_FALLING_OUTPUT_EDGE							BIT2(1,	0,	ACIS1,	ACIS0)
#define	AC_INTERRUPT_ON_RISING_OUTPUT_EDGE							BIT2(1,	1,	ACIS1,	ACIS0)
// Multiplexer Enable ACME
#define	AC_MUX_ENABLED												BIT1(1,	ACME)
#define	AC_MUX_DISABLED												BIT1(0,	ACME)

/*** Analog-to-Digital Converter ***/
// Enable ADEN
#define	ADC_ENABLED													BIT1(1,	ADEN)
#define	ADC_DISABLED												BIT1(0,	ADEN)
// Auto-Trigger Enable ADATE
#define	ADC_AUTO_TRIGGER_ENABLED									BIT1(1,	ADATE)
#define	ADC_AUTO_TRIGGER_DISABLED									BIT1(0,	ADATE)
// Interrupt Enable ADIE
#define	ADC_INTERRUPT_ENABLED										BIT1(1,	ADIE)
#define	ADC_INTERRUPT_DISABLED										BIT1(0,	ADIE)
// Prescaler Selection ADPS[2:0]
#define	ADC_PRESCALER_DIV_FACTOR_2									BIT3(0,	0,	0,	ADPS2,	ADPS1,	ADPS0)
#define	ADC_PRESCALER_DIV_FACTOR_2									BIT3(0,	0,	1,	ADPS2,	ADPS1,	ADPS0)
#define	ADC_PRESCALER_DIV_FACTOR_4									BIT3(0,	1,	0,	ADPS2,	ADPS1,	ADPS0)
#define	ADC_PRESCALER_DIV_FACTOR_8									BIT3(0,	1,	1,	ADPS2,	ADPS1,	ADPS0)
#define	ADC_PRESCALER_DIV_FACTOR_16									BIT3(1,	0,	0,	ADPS2,	ADPS1,	ADPS0)
#define	ADC_PRESCALER_DIV_FACTOR_32									BIT3(1,	0,	1,	ADPS2,	ADPS1,	ADPS0)
#define	ADC_PRESCALER_DIV_FACTOR_64									BIT3(1,	1,	0,	ADPS2,	ADPS1,	ADPS0)
#define	ADC_PRESCALER_DIV_FACTOR_128								BIT3(1,	1,	1,	ADPS2,	ADPS1,	ADPS0)
// Auto Trigger Source ADTS[2:0]
#define	ADC_AUTO_TRIGGER_SRC_FREE_RUN								BIT3(0,	0,	0,	ADTS2,	ADTS1,	ADTS0)
#define	ADC_AUTO_TRIGGER_SRC_AC										BIT3(0,	0,	1,	ADTS2,	ADTS1,	ADTS0)
#define	ADC_AUTO_TRIGGER_SRC_EXT_INT_0								BIT3(0,	1,	0,	ADTS2,	ADTS1,	ADTS0)
#define	ADC_AUTO_TRIGGER_SRC_TC0_COMPARE_A							BIT3(0,	1,	1,	ADTS2,	ADTS1,	ADTS0)
#define	ADC_AUTO_TRIGGER_SRC_TC0_OVERFLOW							BIT3(1,	0,	0,	ADTS2,	ADTS1,	ADTS0)
#define	ADC_AUTO_TRIGGER_SRC_TC1_COMPARE_B							BIT3(1,	0,	1,	ADTS2,	ADTS1,	ADTS0)
#define	ADC_AUTO_TRIGGER_SRC_TC1_OVERFLOW							BIT3(1,	1,	0,	ADTS2,	ADTS1,	ADTS0)
#define	ADC_AUTO_TRIGGER_SRC_TC1_CAPTURE							BIT3(1,	1,	1,	ADTS2,	ADTS1,	ADTS0)
// Reference Selection REFS[1:0]
#define	ADC_REF_AREF												BIT2(0,	0,	REFS1,	REFS0)
#define	ADC_REF_AVCC												BIT2(0,	1,	REFS1,	REFS0)
#define	ADC_REF_INTERNAL11V											BIT2(1,	1,	REFS1,	REFS0)
// Left Adjust Result ADLAR
#define	ADC_RESULT_LEFT_ADJUSTED									BIT1(1,	ADLAR)
#define	ADC_RESULT_RIGHT_ADJUSTED									BIT1(0,	ADLAR)
// Analog Channel Selection MUX[3:0]
#define	ADC_INPUT_CHANNEL_ADC0										BIT4(0,	0,	0,	0,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC1										BIT4(0,	0,	0,	1,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC2										BIT4(0,	0,	1,	0,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC3										BIT4(0,	0,	1,	1,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC4										BIT4(0,	1,	0,	0,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC5										BIT4(0,	1,	0,	1,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC6										BIT4(0,	1,	1,	0,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC7										BIT4(0,	1,	1,	1,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_ADC8										BIT4(1,	0,	0,	0,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_11V										BIT4(1,	1,	1,	0,	MUX3,	MUX2,	MUX1,	MUX0)
#define	ADC_INPUT_CHANNEL_0V										BIT4(1,	1,	1,	1,	MUX3,	MUX2,	MUX1,	MUX0)

/*** Power Management ***/
// Sleep Enable SE
#define	PM_SLEEP_ENABLED											BIT1(1,	SE)
#define	PM_SLEEP_DISABLED											BIT1(0,	SE)
// Sleep Mode Select SM[2:0]
#define	PM_IDLE														BIT3(0,	0,	0,	SM2,	SM1,	SM0)
#define	PM_ADC_NOISE_REDUCTION										BIT3(0,	0,	1,	SM2,	SM1,	SM0)
#define	PM_POWER_DOWN												BIT3(0,	1,	0,	SM2,	SM1,	SM0)
#define	PM_POWER_SAVE												BIT3(0,	0,	1,	SM2,	SM1,	SM0)
#define	PM_STANDBY													BIT3(1,	1,	0,	SM2,	SM1,	SM0)
#define	PM_EXTERNAL_STANDBY											BIT3(1,	1,	1,	SM2,	SM1,	SM0)
// Power Reduction TWI PRTWI
#define	PM_TWI_STOPPED												BIT1(1,	PRTWI)
#define	PM_TWI_WORKING												BIT1(0,	PRTWI)
// Power Reduction Timer/Counter 2 PRTIM2
#define	PM_TC2_STOPPED												BIT1(1,	PRTIM2)
#define	PM_TC2_WORKING												BIT1(0,	PRTIM2)
// Power Reduction Timer/Counter 0 PRTIM0
#define PM_TC0_STOPPED												BIT1(1,	PRTIM0)
#define	PM_TC0_WORKING												BIT1(0,	PRTIM0)
// Power Reduction Timer/Counter 1 PRTIM1
#define	PM_TC1_STOPPED												BIT1(1,	PRTIM1)
#define	PM_TC1_WORKING												BIT1(0,	PRTIM1)
// Power Reduction SPI PRSPI
#define	PM_SPI_STOPPED												BIT1(1,	PRSPI)
#define	PM_SPI_WORKING												BIT1(0,	PRSPI)
// Power Reduction SPI PRUSART0
#define	PM_USART0_STOPPED											BIT1(1,	PRUSART0)
#define	PM_USART0_WORKING											BIT1(0,	PRUSART0)
// Power Reduction ADC PRADC
#define	PM_ADC_STOPPED												BIT1(1,	PRADC)
#define	PM_ADC_WORKING												BIT1(0,	PRADC)

/*** Microcontroller Unit ***/
// BOD Sleep Enable BODSE
#define	MCU_BOD_SLEEP_ENABLED										BIT1(1,	BODSE)
#define	MCU_BOD_SLEEP_DISABLED										BIT1(0,	BODSE)
// Pull-up Disable PUD
#define	MCU_PULL_UP_DISABLED										BIT1(1,	PUD)
#define	MCU_PULL_UP_ENABLED											BIT1(0,	PUD)
// Interrupt Vector Select IVSEL
#define	MCU_IV_FLASH_START											BIT1(0,	IVSEL)
#define	MCU_IV_BOOTLOADER_START										BIT1(1,	IVSEL)
// Interrupt Vector Change Enable IVCE
#define	MCU_IV_CHANGE_ENABLED										BIT1(1,	IVCE)
#define	MCU_IV_CHANGE_DISABLED										BIT1(0,	IVCE)

/*** Boot Loader ***/
// SPM Interrupt Enable SPMEN
#define	BL_SPM_INTERRUPT_ENABLED									BIT1(1,	SPMEN)
#define	BL_SPM_INTERRUPT_DISABLED									BIT1(0,	SPMEN)

/*** Watchdog ***/
// Watchdog Interrupt Enable WDIE
#define	WD_INTERRUPT_ENABLED										BIT1(1,	WDIE)
#define	WD_INTERRUPT_DISABLED										BIT1(0,	WDIE)
// Watchdog System Reset Enable WDE
#define	WD_SYSTEM_RESET_ENABLED										BIT1(1,	WDE)
#define	WD_SYSTEM_RESET_DISABLED									BIT1(0,	WDE)
// Watchdog Timer Prescale Select WDP[3:0]
#deifne	WD_TIMER_PRESCALER_2048_CYCLES								BIT4(0,	0,	0,	0,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_4096_CYCLES								BIT4(0,	0,	0,	1,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_8192_CYCLES								BIT4(0,	0,	1,	0,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_16384_CYCLES								BIT4(0,	0,	1,	1,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_32768_CYCLES								BIT4(0,	1,	0,	0,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_65536_CYCLES								BIT4(0,	1,	0,	1,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_131072_CYCLES							BIT4(0,	1,	1,	0,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_262144_CYCLES							BIT4(0,	1,	1,	1,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_524288_CYCLES							BIT4(1,	0,	0,	0,	WDP3,	WDP2,	WDP1, 	WDP0)
#deifne	WD_TIMER_PRESCALER_1048576_CYCLES							BIT4(1,	0,	0,	1,	WDP3,	WDP2,	WDP1, 	WDP0)

/*** System Clock ***/
// Clock Prescaler Select CLKPS[3:0]
#define	CLK_DIV_FACTOR_1											BIT4(0,	0,	0,	0,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_2											BIT4(0,	0,	0,	1,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_4											BIT4(0,	0,	1,	0,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_8											BIT4(0,	0,	1,	1,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_16											BIT4(0,	1,	0,	0,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_32											BIT4(0,	1,	0,	1,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_64											BIT4(0,	1,	1,	0,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_128											BIT4(0,	1,	1,	1,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)
#define	CLK_DIV_FACTOR_256											BIT4(1,	0,	0,	0,	CLKPS3,	CLKPS2,	CLKPS1,	CLKPS0)

/*** External Interrupt ***/
// Pin Change Interrupt 0 Enable PCIE0
#define	EI_PIN_CHANGE_0_ENABLED										BIT1(1,	PCIE0)
#define	EI_PIN_CHANGE_0_DISABLED									BIT1(0,	PCIE0)
// Pin Change Interrupt 1 Enable PCIE1
#define	EI_PIN_CHANGE_1_ENABLED										BIT1(1,	PCIE1)
#define	EI_PIN_CHANGE_1_DISABLED									BIT1(0,	PCIE1)
// Pin Change Interrupt 2 Enable PCIE2
#define	EI_PIN_CHANGE_2_ENABLED										BIT1(1,	PCIE2)
#define	EI_PIN_CHANGE_2_DISABLED									BIT1(0,	PCIE2)
// Interrupt Sense Control 0 ISC0[1:0]
#define	EI_INT0_LOW_LEVEL_REQUEST									BIT2(0,	0,	ISC01,	ISC00)
#define	EI_INT0_ANY_CHANGE_REQUEST									BIT2(0,	1,	ISC01,	ISC00)
#define	EI_INT0_FALL_EDGE_REQUEST									BIT2(1,	0,	ISC01,	ISC00)
#define	EI_INT0_RISE_EDGE_REQUEST									BIT2(1,	1,	ISC01,	ISC00)
// Interrupt Sense Control 1 ISC1[1:0]
#define	EI_INT1_LOW_LEVEL_REQUEST									BIT2(0,	0,	ISC11,	ISC10)
#define	EI_INT1_ANY_CHANGE_REQUEST									BIT2(0,	1,	ISC11,	ISC10)
#define	EI_INT1_FALL_EDGE_REQUEST									BIT2(1,	0,	ISC11,	ISC10)
#define	EI_INT1_RISE_EDGE_REQUEST									BIT2(1,	1,	ISC11,	ISC10)

/*** Two Wire Interface ***/
// Status TWS[7:3]
// Master Transmitter Mode Status Codes
#define	TWI_MTM_STAT_CODE_START_COND_TRANS										0x008
#define	TWI_MTM_STAT_CODE_REP_START_COND_TRANS									0x010
#define	TWI_MTM_STAT_CODE_SLA_W_TRANS_ACK_REC									0x018
#define	TWI_MTM_STAT_CODE_SLA_W_TRANS_NACK_REC									0x020
#define	TWI_MTM_STAT_CODE_DATABYTE_TRANS_ACK_REC								0x028
#define	TWI_MTM_STAT_CODE_DATABYTE_TRANS_NACK_REC								0x030
#define	TWI_MTM_STAT_CODE_SLA_W_DATABYTE_ARB_LOST								0x038
// Master Reciever Mode Status Codes
#define	TWI_MRM_STAT_CODE_START_COND_TRANS										0x008
#define	TWI_MRM_STAT_CODE_REP_START_COND_TRANS									0x010
#define	TWI_MRM_STAT_CODE_SLA_R_NACK_ARB_LOST									0x038
#define	TWI_MRM_STAT_CODE_SLA_R_TRANS_ACK_REC									0x040
#define	TWI_MRM_STAT_CODE_SLA_R_TRANS_NACK_REC									0x048
#define	TWI_MRM_STAT_CODE_DATABYTE_REC_ACK_RETURN								0x050
#define	TWI_MRM_STAT_CODE_DATABYTE_REC_NACK_RETURN								0x058
// Slave Reciever Mode Status Codes
#define	TWI_SRM_STAT_CODE_OWN_SLA_W_REC_ACK_RETURN								0x060
#define	TWI_SRM_STAT_CODE_SLA_RW_MASTER_ARB_LOST_OWN_SLA_W_REC_ACK_RETURN		0x068
#define	TWI_SRM_STAT_CODE_GEN_CALL_ADDR_REC_ACK_RETURN							0x070
#define	TWI_SRM_STAT_CODE_SLA_RW_MASTER_ARB_LOST_GEN_CALL_ADDR_REC_ACK_RETURN	0x078
#define	TWI_SRM_STAT_CODE_PREV_ADDR_OWN_SLA_W_DATA_REC_ACK_RETURN				0x080
#define	TWI_SRM_STAT_CODE_PREV_ADDR_OWN_SLA_W_DATA_REC_NACK_RETURN				0x088
#define	TWI_SRM_STAT_CODE_PREV_ADDR_GEN_CALL_DATA_REC_ACK_RETURN				0x090
#define	TWI_SRM_STAT_CODE_PREV_ADDR_GEN_CALL_DATA_REC_NACK_RETURN				0x098
#define	TWI_SRM_STAT_CODE_STOP_COND_REP_START_REC								0x0A0
// Slave Reciever Mode Status Codes
#define	TWI_STM_STAT_CODE_OWN_SLA_R_REC_ACK_RETURN								0x0A8
#define	TWI_STM_STAT_CODE_SLA_RW_MASTER_ARB_LOST_OWN_SLA_R_REC_ACK_RETURN		0x0B0
#define	TWI_STM_STAT_CODE_DATABYTE_TWDR_TRANS_ACK_REC							0x0B8
#define	TWI_STM_STAT_CODE_DATABYTE_TWDR_TRANS_NACK_REC							0x0C0
#define	TWI_STM_STAT_CODE_TWDR_LAST_DATABYTE_TRANS_ACK_REC						0x0C8
// Prescaler TWPS[1:0]
#define	TWI_PRESCALER_1												BIT2(0,	0, TWPS1,	TWPS0)
#define	TWI_PRESCALER_4												BIT2(0,	1, TWPS1,	TWPS0)
#define	TWI_PRESCALER_16											BIT2(1,	0, TWPS1,	TWPS0)
#define	TWI_PRESCALER_64											BIT2(1,	1, TWPS1,	TWPS0)
// General Call Recognition Enable Bit TWGCE
#define	TWI_GEN_CALL_RECOGN_ENABLED									BIT1(1,	TWGCE)
#define	TWI_GEN_CALL_RECOGN_DISABLED								BIT1(0,	TWGCE)
// Interrupt Enable TWIE
#define	TWI_INTERRUPT_ENABLED										BIT1(1,	TWIE)
#define	TWI_INTERRUPT_DISABLED										BIT1(0,	TWIE)
// Enable TWEN
#define	TWI_ENABLED													BIT1(1,	TWEN)
#define	TWI_DISABLED												BIT1(0,	TWEN)
// Acknowledge Enable TWEA
#define	TWI_ACK_ENABLED												BIT1(1,	TWEA)
#define	TWI_ACK_DISABLED											BIT1(0,	TWEA)

/*** USART 0 ***/
// Double Transmission Speed U2X0
#define	USART0_DOUBLE_SPEED_ENABLED									BIT1(1,	U2X0)
#define	USART0_DOUBLE_SPEED_DISABLED								BIT1(0,	U2X0)
// Multi-processor Communication Mode MPCM0
#define USART0_MPCM_ENABLED											BIT1(1,	MPCM0)
#define USART0_MPCM_DISABLED										BIT1(0,	MPCM0)
// RX 0 Complete Interrupt Enable RXCIE0
#define	USART0_RX_COMPLETE_INTERRUPT_ENABLED						BIT1(1,	RXCIE0)
#define	USART0_RX_COMPLETE_INTERRUPT_DISABLED						BIT1(0,	RXCIE0)
// TX 0 Complete Interrupt Enable TXCIE0
#define	USART0_TX_COMPLETE_INTERRUPT_ENABLED						BIT1(1,	TXCIE0)
#define	USART0_TX_COMPLETE_INTERRUPT_DISABLED						BIT1(0,	TXCIE0)
// Data Register 0 Empty Interrupt Enable UDRIE0
#define	USART0_DATA_REGISTER_EMPTY_INTERRUPT_ENABLED				BIT1(1,	UDRIE0)
#define	USART0_DATA_REGISTER_EMPTY_INTERRUPT_DISABLED				BIT1(0,	UDRIE0)
// Reciever 0 Enable RXEN0
#define	USART0_RECIEVER_ENABLED										BIT1(1,	RXEN0)
#define	USART0_RECIEVER_DISABLED									BIT1(0,	RXEN0)
// Transmitter 0 Enable TXEN0
#define	USART0_TRANSMITTER_ENABLED									BIT1(1,	TXEN0)
#define	USART0_TRANSMITTER_DISABLED									BIT1(0,	TXEN0)









/* end-of-file */