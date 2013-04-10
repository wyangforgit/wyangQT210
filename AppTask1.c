
/*****************************************************************************
* Copyright (c) 2012, Microwise System Co., Ltd.
* All rights reserved.
*
* 文 件 名: AppTask1.c
* 描    述: wsn包类型解析
*
* 当前版本: 
* 作    者: sun.bo
* 完成日期: 2012-10-21
* 编译环境: IAR Embedded Workbench V5.3
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
