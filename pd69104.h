#pragma once

#include <stdint.h>

#include "poemgr.h"

struct pd69104_priv {
	int i2c_fd;

	int i2c_addr;
};

int pd69104_init(struct pd69104_priv *ctx, int i2c_bus, int i2c_addr);

int pd69104_end(struct pd69104_priv *ctx);

int pd69104_port_power_consumption_get(struct pd69104_priv *priv, int port);

int pd69104_pwrgd_pin_status_get(struct pd69104_priv *priv);
