
/*****************************************************************************
* Copyright (c) 2012, Microwise System Co., Ltd.
* All rights reserved.
*
* �� �� ��: AppTask1.c
* ��    ��: wsn�����ͽ���
*
* ��ǰ�汾: 
* ��    ��: sun.bo
* �������: 2012-10-21
* ���뻷��: IAR Embedded Workbench V5.3
******************************************************************************/
#include  <includes.h>

void  AppTask1(void *p_arg)
{
  (void)p_arg;
  NWK_PACKET data;
  
  for(;;)
  {
      memset((INT8U*)&data,0,sizeof(data));
      RecvRFData(&data);
      HandlerRFData(&data);
  } 
}
