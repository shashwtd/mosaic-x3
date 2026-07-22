#include <FastLED.h>

constexpr uint8_t ledPin = 38;
constexpr uint8_t columns = 12;
constexpr uint8_t rows = 7;
constexpr uint16_t ledCount = columns * rows;

CRGB leds[ledCount];

const uint8_t chart[rows][columns] = {
  {0, 0, 0, 1, 1, 2, 2, 1, 1, 0, 0, 0},
  {0, 0, 1, 1, 2, 3, 3, 2, 1, 1, 0, 0},
  {0, 1, 1, 2, 3, 4, 4, 3, 2, 1, 1, 0},
  {1, 1, 2, 3, 4, 4, 4, 4, 3, 2, 1, 1},
  {0, 1, 1, 2, 3, 4, 4, 3, 2, 1, 1, 0},
  {0, 0, 1, 1, 2, 3, 3, 2, 1, 1, 0, 0},
  {0, 0, 0, 1, 1, 2, 2, 1, 1, 0, 0, 0}
};

const CRGB colors[] = {
  CRGB(13, 17, 23),
  CRGB(14, 68, 41),
  CRGB(0, 109, 50),
  CRGB(38, 166, 65),
  CRGB(57, 211, 83)
};

uint16_t pixelAt(uint8_t x, uint8_t y) {
  if (y % 2 == 0) {
    return y * columns + x;
  }

  return y * columns + (columns - 1 - x);
}

void drawChart() {
  for (uint8_t y = 0; y < rows; y++) {
    for (uint8_t x = 0; x < columns; x++) {
      leds[pixelAt(x, y)] = colors[chart[y][x]];
    }
  }

  FastLED.show();
}

void setup() {
  FastLED.addLeds<WS2812B, ledPin, GRB>(leds, ledCount);
  FastLED.setBrightness(48);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 1800);
  FastLED.clear(true);
  drawChart();
}

void loop() {
}
