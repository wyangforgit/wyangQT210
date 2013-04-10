
/*****************************************************************************
* Copyright (c) 2012, Microwise System Co., Ltd.
* All rights reserved.
*
* 文 件 名: AppTask2.c
* 描    述: 搜网络，加入wsn网路
*
* 当前版本: 
* 作    者: sun.bo
* 完成日期: 2012-10-21
* 编译环境: IAR Embedded Workbench V5.3
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