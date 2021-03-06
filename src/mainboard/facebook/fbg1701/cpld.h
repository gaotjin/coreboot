/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019 Eltan B.V.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef CPLD_H
#define CPLD_H

unsigned int cpld_read_pcb_version(void);
void cpld_reset_bridge(void);

#endif
