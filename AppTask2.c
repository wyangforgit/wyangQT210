
/*****************************************************************************
* Copyright (c) 2012, Microwise System Co., Ltd.
* All rights reserved.
*
* �� �� ��: AppTask2.c
* ��    ��: �����磬����wsn��·
*
* ��ǰ�汾: 
* ��    ��: sun.bo
* �������: 2012-10-21
* ���뻷��: IAR Embedded Workbench V5.3
******************************************************************************/

#include  <includes.h>

void  AppTask2(void *p_arg)
{
  (void)p_arg;

  for(;;)
  {   
       SearchNet();
       WaitSearchNet();
  }

}