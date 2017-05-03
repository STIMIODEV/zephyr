/**
 * Copyright (c) 2017 IpTronix
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __WIFI_WINC1500_NM_BSP_INTERNAL_H__
#define __WIFI_WINC1500_NM_BSP_INTERNAL_H__

#include <device.h>
#include <gpio.h>

#include "wifi_winc1500_config.h"
#include <bus_wrapper/include/nm_bus_wrapper.h>

extern tstrNmBusCapabilities egstrNmBusCapabilities;

#define NM_EDGE_INTERRUPT	(1)

#define NM_DEBUG		CONF_WINC_DEBUG
#define NM_BSP_PRINTF		CONF_WINC_PRINTF

struct winc1500_device {
	struct device		**gpios;
	struct gpio_callback	gpio_cb;

	struct device		*spi_dev;
	int spi_slave;
};

extern struct winc1500_device winc1500;

#endif /* __WIFI_WINC1500_NM_BSP_INTERNAL_H__ */