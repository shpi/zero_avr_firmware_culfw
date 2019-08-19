#ifndef _BOARD_H
#define _BOARD_H

// Feature definitions
#define BOARD_ID_STR            "CUL868"
#define BOARD_ID_USTR           L"CUL868"

#undef MULTI_FREQ_DEVICE	// available in multiple versions: 433MHz,868MHz
#define BOARD_ID_STR433         "CUL433"
#define BOARD_ID_USTR433        L"CUL433"

#define HAS_USB                  1
#define USB_BUFSIZE             64      // Must be a supported USB endpoint size
#define USB_MAX_POWER	       100


#define HAS_FASTRF                      // PROGMEM:  468b  RAM:  1b
#undef RFR_DEBUG                       // PROGMEM:  354b  RAM: 14b
#undef FHTBUF_SIZE        //  174      //                 RAM: 174b
#define FULL_CC1100_PA                // PROGMEM:  108b##
#define HAS_ASKSIN                    // PROGMEM: 1314
#define HAS_ASKSIN_FUP                // PROGMEM:   78
#undef HAS_BELFOX                    // PROGMEM:  214
#undef HAS_CC1101_PLL_LOCK_CHECK_MSG		// PROGMEM:  22b
#undef HAS_CC1101_PLL_LOCK_CHECK_MSG_SW	// PROGMEM:  22b
#undef HAS_CC1101_RX_PLL_LOCK_CHECK_TASK_WAIT	// PROGMEM: 118b
#undef HAS_ESA                       // PROGMEM:  286
#undef HAS_EVOHOME
#undef HAS_FHT_80b                     // PROGMEM: 1374b, RAM: 90b
#undef HAS_FHT_8v                    // PROGMEM:  586b  RAM: 23b
#undef HAS_FHT_TF
#undef HAS_HOERMANN
#define HAS_HOERMANN_SEND               // PROGMEM:  220
#define HAS_INTERTECHNO               // PROGMEM: 1352
#undef HAS_KOPP_FC                   // PROGMEM: 3370
#undef HAS_MBUS                      // PROGMEM: 2536
#undef HAS_MEMFN                     // PROGMEM:  168
#undef HAS_MORITZ                    // PROGMEM: 1696
#define HAS_RAWSEND                   //
#undef HAS_RF_ROUTER                   // PROGMEM: 1248b  RAM: 44b
#undef HAS_RFNATIVE                  // PROGMEM:  580
#define HAS_SOMFY_RTS                 // PROGMEM: 1716
#undef HAS_TCM97001                  // PROGMEM:  264
#undef HAS_TX3                       // PROGMEM:  168
#undef HAS_UNIROLL                   // PROGMEM:   92
#define HAS_ZWAVE                     // PROGMEM:  882
#undef LACROSSE_HMS_EMU              // PROGMEM: 2206
#undef MBUS_NO_TX                    // PROGMEM:  962
#define RCV_BUCKETS           4      // RAM: 25b * bucket
#undef RFR_FILTER                      // PROGMEM:   90b  RAM:  4b
#define TTY_BUFSIZE          128      // RAM: TTY_BUFSIZE*4




#include <avr/io.h>
#include <avr/power.h>


#  define PB1 PORTB1
#  define PB2 PORTB2
#  define PB3 PORTB3
#  define PD6 PORTD6
#  define PE6 PORTE6
#  define PF7 PORTF7



#define SPI_PORT		PORTB
#define SPI_DDR			DDRB
#define SS_DDR			DDRD
#define SPI_SS			PD6
#define SPI_MISO		PB3
#define SPI_MOSI		PB2
#define SPI_SCLK		PB1


#  define CC1100_CS_DDR		SS_DDR
#  define CC1100_CS_PORT  PORTD
#  define CC1100_CS_PIN		SPI_SS


#  define CC1100_OUT_DDR        DDRF
#  define CC1100_OUT_PORT       PORTF
#  define CC1100_OUT_PIN        PF7
#  define CC1100_OUT_IN         PINF
#  define CCTEMP_MUX            CC1100_OUT_PIN



  #define CC1100_IN_DDR           DDRE
  #define CC1100_IN_PORT          PINE
  #define CC1100_IN_PIN           PE6
  #define CC1100_INT              INT6
  #define CC1100_INTVECT          INT6_vect
  #define CC1100_ISC              ISC60
  #define CC1100_EICR             EICRB





#  undef LED_DDR       //        DDRE
#  undef LED_PORT      //        PORTE
#  undef LED_PIN       //        6




#  define CUL_HW_REVISION "CUL_V3"


#undef MARK433_PORT     //       PORTB
#undef MARK433_PIN      //       PINB
#undef MARK433_BIT      //       6
#undef MARK915_PORT     //       PORTB
#undef MARK915_PIN      //       PINB
#undef MARK915_BIT      //       5

#ifndef SET_BIT
#define SET_BIT(PORT, BITNUM) ((PORT) |= (1<<(BITNUM)))
#endif
#ifndef CLEAR_BIT
#define CLEAR_BIT(PORT, BITNUM) ((PORT) &= ~(1<<(BITNUM)))
#endif
#define TOGGLE_BIT(PORT, BITNUM) ((PORT) ^= (1<<(BITNUM)))

#endif // __BOARD_H__
