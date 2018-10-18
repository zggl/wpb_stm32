/********************************************Copyright******************************************************
**                                                                                                      
**
**-------------------------------------------�ļ���Ϣ-------------------------------------------------------
** �ļ�����:			Wp_25F16.h
** ����޶�����:  		2012-10-10
** ���汾:			1.0
** ����:				Ƭ��FLASH�ļ�����;
**
**-----------------------------------------------------------------------------------------------------------
** ������:				�⿵
** ��������:			2012-02-09
** �汾:				1.0
** ����:				Ƭ��FLASH�ļ�����;
**
**-----------------------------------------------------------------------------------------------------------
** �޶���:
** �޶�����:
** �汾:
** ����:
**
**-----------------------------------------------------------------------------------------------------------
** �޶���:
** �޶�����:
** �汾:
** ����:
**
*************************************************************************************************************/
#ifndef WP_25F16_H
#define WP_25F16_H


#include "stm32f10x.h"
#include "Wp_UART.h"
#include "Wp_Globle.h"


/************************************************************************************************************
**                            	    ȫ�ֱ�������
*************************************************************************************************************/
//#define SST_SELECT()		    GPIO_ResetBits(GPIOB, GPIO_Pin_12)       // SST CS = L
//#define SST_DESELECT()		GPIO_SetBits(GPIOB, GPIO_Pin_12)         // SST CS = H
#define SST_SELECT()            GPIOB->BRR = GPIO_Pin_12                 // SST CS = L
#define SST_DESELECT()          GPIOB->BSRR = GPIO_Pin_12                // SST CS = H

#define READID                  0x90        // ������ID


/************************************************************************************************************
**                            	�����ⲿ����
*************************************************************************************************************/
extern void Wp_TurnToSST25(void);
extern void Wp_FlashSpiConfigure(void);
extern void TestSst(void);


#endif
/********************************************************************************************************
**                            End Of File
********************************************************************************************************/