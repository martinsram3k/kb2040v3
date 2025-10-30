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
   
// V souboru config.h

// 1. Povolení podpory pro encodery
#define ENCODERS_ENABLE

// 2. Definice počtu encoderů
// V tvém případě je to jen jeden.
#define ENCODER_COUNT 1

// 3. Definice pinů pro první (a jediný) encoder

// Definice pinu CLK (fáze A) pro Encoder 0
#define ENCODER_0_PIN_A GP6 
// Definice pinu DT (fáze B) pro Encoder 0
#define ENCODER_0_PIN_B GP7

// 4. (Volitelné) Povolení snímače (tlačítka) na encoderu

// Definice pinu pro tlačítko SW (Switch) na Encoderu 0
// QMK automaticky mapuje tento pin na matici kláves
#define ENCODER_0_SW_PIN GP8

// 5. Směr otáčení
// Určuje, zda se směr počítání (+/-) má obrátit.
// Zkus, zda to funguje; pokud se ti směr otáčení a reakce nezdají, odkomentuj:
// #define ENCODER_DIRECTION_FLIP

// V souboru config.h

// 1. Povolení RGB Matrix


// 2. Definice datového pinu (DIN)
// Používá pin GP9, jak jsi uvedl.
#define RGB_DI_PIN GP9 
#define WS2812_DI_PIN RGB_DI_PIN

#define WS2812_DRIVER vendor 

// --- Konfigurace RGB Matrix ---

#define RGB_MATRIX_COLOR_ORDER RGB_MATRIX_GRB

// 3. Počet LED diod
// V tvém schématu je 6 diod (6x WS2812B).
#define RGB_MATRIX_LED_COUNT 6 

// 4. Pořadí barev
// Typicky pro WS2812B.
#define RGB_MATRIX_COLOR_ORDER RGB_MATRIX_GRB

// 5. Typ matice
// Full Feature Matrix
#define RGB_MATRIX_TYPE RGB_MATRIX_KEYPRESSES 

// 6. Volitelné: Jas a kroky pro ovládání
#define RGB_MATRIX_VAL_MAX 255
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8

/*
 * POZNÁMKA K NAPÁJENÍ: 
 * Ujisti se, že zdroj raw-LED zvládne napájet 6 diod. 
 * Max spotřeba: 6 * 60mA = 360mA při plném jasu (bílá).
 */

#define DYNAMIC_KEYMAP_LAYER_COUNT 4 // Počet vrstev pro dynamickou klávesnici

#endif 