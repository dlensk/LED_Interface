//Iontra LED Interface Exercise
//Daniel Lenskold

#include "main.h"
#include <stdio.h>
#include "led_driver.h"

TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;
TIM_HandleTypeDef htim5;
TIM_HandleTypeDef htim6;

void SystemClock_Config(void);
static void MX_TIM2_Init(void);
static void MX_TIM3_Init(void);
static void MX_TIM4_Init(void);
static void MX_TIM5_Init(void);
static void MX_TIM6_Init(void);


int main(void)
{

  HAL_Init();

  SystemClock_Config();
  MX_TIM2_Init();
  MX_TIM3_Init();
  MX_TIM4_Init();
  MX_TIM5_Init();
  MX_TIM6_Init();

  LED_Initialize(1); //Initializes up to five LED's.

  while (1)
  {
	  // Set a specific LED's RGB brightness, enter 0 to turn-off that color.
	  // LED_Intensity_SET(unit8_t LEDnum, uint8_t RedIntensity, uint8_t GreenIntensity, uint8_t BlueIntensity);
	  LED_Intensity_SET(1, 100, 100, 100);
  }

}



