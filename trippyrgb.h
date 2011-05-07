
#define TRIPPY_RGB_WAVE 1

// overrides for Cornfield Trippy RGB Wave board
#define bogusMask    B8(00100000)
#define redMask      B8(00000010)
#define grnMask      B8(00010000)
#define bluMask      B8(00000100)
#define rgbMask      B8(00010110)
#define irInMask     B8(00001000)
#define irOutMask    B8(00000001)
// 4 = PB3
#define irInPortBPin  4

#define JUST_RED_ON      PORTB |= rgbMask; PORTB &= ~(redMask);
#define JUST_GREEN_ON    PORTB |= rgbMask; PORTB &= ~(grnMask);
#define JUST_BLUE_ON     PORTB |= rgbMask; PORTB &= ~(bluMask);

#define FLASH_BLUE      PORTB ^= bluMask; delay_ten_us(100); PORTB ^= bluMask;
#define FLASH_GREEN     PORTB ^= grnMask; delay_ten_us(100); PORTB ^= grnMask;
#define FLASH_RED       PORTB ^= redMask; delay_ten_us(100); PORTB ^= redMask;

