#ifndef _ATK_TIMER_H
#define _ATK_TIMER_H

#include "atk_sys.h"

#include "stm32f4xx_hal_tim.h"
//////////////////////////////////////////////////////////////////////////////////     
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F7开发板
//定时器驱动代码       
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2015/11/27
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved                                      
////////////////////////////////////////////////////////////////////////////////// 


extern TIM_HandleTypeDef TIM3_Handler; //定时器句柄 

void atk_tim3_init(u16 arr,u16 psc);

#endif

