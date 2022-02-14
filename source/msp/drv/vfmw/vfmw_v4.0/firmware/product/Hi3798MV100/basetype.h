
/*******************************************************************************
Copyright (C), 2009-2012, Hisilicon Tech. Co., Ltd.
File name: basetype.h
Author & ID: ��С��+00133955 ����Ƽ+00139017 �ܿ�ï+00103648
Version: 1.00
Date:  2010-03-01
Description: ���ļ������˳������������ض���ĺ꣨windows��linuxƽ̨��
Function List:
History:
* Revision 1.00  2010/03/01 10:00:00  songxg+00133955
* ��ʼ�汾�������
*
* Revision 1.01  2010/03/02 14:15:00  songxg+00133955
* ���ݲܿ�ï������Ƽ�������INT40��UINT40��BOOL���ͼ������ض����ȥ��
*
*******************************************************************************/
#ifndef __BASE_TYPE_H__
#define __BASE_TYPE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif    /* __cpluscplus*/
#endif    /* __cpluscplus*/

// �������������ض���
typedef signed char        INT8;
typedef signed short       INT16;
typedef signed int         INT32;
typedef unsigned char      UINT8;
typedef unsigned short     UINT16;
typedef unsigned int       UINT32;

#if defined(__GNUC__)
typedef          long long INT64;
typedef unsigned long long UINT64;

typedef double             DOUBLE;
#else
typedef          __int64   INT64;
typedef unsigned __int64   UINT64;
#endif

// DSP���ܻ��õ�����������
typedef long               INT40;
typedef unsigned long      UINT40;

// �������������ض���
typedef float              FLOAT32;
typedef double             FLOAT64;


// �������������ض���
typedef char               BOOL8;
typedef short              BOOL16;
typedef int                BOOL;

#ifndef TRUE
#define TRUE               1
#endif

#ifndef FALSE
#define FALSE              0
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif    /* __cpluscplus*/
#endif    /* __cpluscplus*/

#endif /**< __BASE_TYPE_H__ */

/************************************************************************
* $Log$
************************************************************************/