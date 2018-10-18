/********************************************Copyright******************************************************
**                                                                                                      
**
**-------------------------------------------�ļ���Ϣ-------------------------------------------------------
** �ļ�����:			Wp_EXTI.h
** ����޶�����:  		2012-10-10
** ���汾:			1.0
** ����:				���ն����;
**
**-----------------------------------------------------------------------------------------------------------
** ������:				�⿵
** ��������:			2012-02-09
** �汾:				1.0
** ����:				���ն����;
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
#ifndef WP_EXTI_H
#define WP_EXTI_H


#include "stm32f10x.h"
#include "Wp_Globle.h"


/************************************************************************************************************
**                             �궨�����
*************************************************************************************************************/
// �ⲿ�ж�ͨ���궨��
#define EXTI_DMP	EXTI_Line5


/************************************************************************************************************
**                             ��������
*************************************************************************************************************/
extern void UP_Exti_Init(void);												// �ⲿ�жϳ�ʼ��
extern void UP_Exti_EnableIT(u32 Channel, EXTITrigger_TypeDef TriggerMode);	// ʹ���ⲿ�ж�ͨ�����������ж�ģʽ
extern void UP_Exti_DisableIT(u32 Channel); 								// �����ⲿ�ж�
extern void UP_Exti_SetHadler(void (*ApplicationAddress)(u32));				// �����ⲿ�ж���ں���
extern void ExtiHadler(u32 extichannel);									// �ⲿ�ж���ں���


#endif
/********************************************************************************************************
**                            End Of File
********************************************************************************************************/