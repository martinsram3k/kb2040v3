#ifdef VIA_ENABLE  // Povolené via
#define VIA_UID_VENDOR_ID 0x4D16 
#define VIA_UID_PRODUCT_ID 0x0002

#define OLED_DRIVER_ENABLE yes
#define OLED_DISPLAY_ADDRESS 0x3C  // Adresa I2C displeje OLED

#define I2C_SCL_PIN GP13 // Pin SCL I2C
#define I2C_SDA_PIN GP12 // Pin SDA I2C

#define I2C0_SCL_PIN I2C_SCL_PIN
#define I2C0_SDA_PIN I2C_SDA_PIN

#define OLED_FADE_OUT 2000 // Trvání vyblednutí OLED v ms
#define OLED_TIMEOUT 20000 // Vypnutí OLED po nečinnosti v ms
#define OLED_BRIGHTNESS 255 // Jas OLED (0-255)

#define BOOTMAGIC_ROW 0 // Řádek pro Bootmagic (tlačítko v levém horním rohu)
#define BOOTMAGIC_COLUMN 0 // Sloupec pro Bootmagic (tlačítko v levém horním rohu)
   
#define ENCODER_A_PINS { GP7 }
#define ENCODER_B_PINS { GP6 }

#define WS2812_DI_PIN GP9
#define RGBLIGHT_LED_COUNT 6 // Počet LED diod na klávesnici
/*
 * POZNÁMKA K NAPÁJENÍ: 
 * Ujisti se, že zdroj raw-LED zvládne napájet 6 diod. 
 * Max spotřeba: 6 * 60mA = 360mA při plném jasu (bílá).
 */

#define DYNAMIC_KEYMAP_LAYER_COUNT 4 // Počet vrstev pro dynamickou klávesnici

#endif 