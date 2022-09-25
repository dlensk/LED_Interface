//RGB LED(s) Driver
#include "led_driver.h"
#include <stdio.h>

void LED_Initialize(uint8_t numLEDs)
{
	//for number of LEDs (numLEDs) from 1 to 5, start PWM timer/channel

	if (numLEDs >= 1 && numLEDs <=5)
	{

	        switch(numLEDs)
	    {
	        case 1:
	        	printf("Initializing one LED\n");
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_3);
	        break;
	        case 2:
	        	printf("Initializing two LED's\n");
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_3);
	        break;
	        case 3:
	        	printf("Initializing three LED's\n");
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_3);
	            break;
	        case 4:
	        	printf("Initializing four LED's\n");
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim5, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim5, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim5, TIM_CHANNEL_3);
	            break;
	        case 5:
	        	printf("Initializing five LED's\n");
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim2, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim3, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim4, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim5, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim5, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim5, TIM_CHANNEL_3);
	        	HAL_TIM_PWM_Start(&tim6, TIM_CHANNEL_1);
	        	HAL_TIM_PWM_Start(&tim6, TIM_CHANNEL_2);
	        	HAL_TIM_PWM_Start(&tim6, TIM_CHANNEL_3);
	       	    break;
	        default:
	        	printf("Invalid number of LED's\n");
	    }
	}
	else{
		printf("Invalid number of LED's selected\n");
		}
	HAL_Delay(100);
}


void LED_Intensity_SET(unit8_t LEDnum, uint8_t RedIntensity, uint8_t GreenIntensity, uint8_t BlueIntensity)
{
	//Control intensities through CCR registers
	//Change htim* and/or CCR* to match microcontroller setup
	//Set Intensity to 0 to turn-off that color.


		if (LEDnum >= 1 && LEDnum <=5)
		{

		        switch(LEDnum)
		    {
		        case 1:
		        	printf("Setting LED 1\n");
		        	htim2.Instance->CCR1 = RedIntensity;
		        	htim2.Instance->CCR2 = GreenIntensity;
		        	htim2.Instance->CCR3 = BlueIntensity;
		        break;
		        case 2:
		        	printf("Setting LED 2\n");
		        	htim3.Instance->CCR1 = RedIntensity;
		        	htim3.Instance->CCR2 = GreenIntensity;
		        	htim3.Instance->CCR3 = BlueIntensity;
		        break;
		        case 3:
		        	printf("Setting LED 3\n");
		        	htim4.Instance->CCR1 = RedIntensity;
		        	htim4.Instance->CCR2 = GreenIntensity;
		        	htim4.Instance->CCR3 = BlueIntensity;
		            break;
		        case 4:
		        	printf("Setting LED 4\n");
		        	htim5.Instance->CCR1 = RedIntensity;
		        	htim5.Instance->CCR2 = GreenIntensity;
		        	htim5.Instance->CCR3 = BlueIntensity;
		            break;
		        case 5:
		        	printf("Setting LED 5\n");
		        	htim6.Instance->CCR1 = RedIntensity;
		        	htim6.Instance->CCR2 = GreenIntensity;
		        	htim6.Instance->CCR3 = BlueIntensity;
		       	    break;
		        default:
		        	printf("Invalid LED selected\n");

		    }
		}

		else {
			printf("Invalid LED selected\n");
		     }

		HAL_Delay(100);
}
