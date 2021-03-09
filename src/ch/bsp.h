/***********************************************************************
 * @file        bsp.h
 * @author	:	ch
 * @brief	:
 * @version:	v1.0
 * @Copyright (C)  2021-02-13  .cdWFVCEL. all right reserved
***********************************************************************/

#ifndef __BSP_H_
#define __BSP_H_
/* ����ͷ�ļ� ------------------------------------------------------------------*/
#ifdef ARDUINO
#include <Arduino.h>
#include <Wire.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

/* �궨�� ----------------------------------------------------------------------*/

#ifdef ARDUINO
#define delay_ms delay
#define delay_us delayMicroseconds
#endif

/* ���Ͷ��� --------------------------------------------------------------------*/
    typedef uint8_t u8;
    typedef uint16_t u16;
    typedef uint32_t u32;
    typedef int8_t s8;
    typedef int16_t s16;
    typedef int32_t s32;
/* �������� --------------------------------------------------------------------*/
/* �������� --------------------------------------------------------------------*/

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
#endif // __BSP_H_
