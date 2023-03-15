#include <main.h>

//PA8 TIM1
extern TIM_HandleTypeDef htim1;

int32_t duty = 500;


void main_cpp(){
	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_RESET);

	while(1){


		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_SET);
		HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
		__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, duty);

//duty 100~1100ぐらいまで反応する
	}
}
