/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 * 2022-04-19     Meco Man     solve LED interferes with SPI
 */

#include <rtthread.h>
#include <rtdevice.h>
int main(void)
{
    rt_adc_device_t adc_dev;
    rt_uint16_t voltage = 0.0;


    adc_dev = (rt_adc_device_t)rt_device_find("adc1");

    voltage =  rt_device_control((rt_device_t)adc_dev, RT_ADC_CMD_GET_VREF,RT_NULL);

    rt_kprintf("voltage ---> %d\n", voltage);
//    while (1)
//    {
//        rt_kprintf("Hello RT-Thread!\n");
//        rt_thread_mdelay(1000);
//    }
}
