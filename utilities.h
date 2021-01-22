/*
 * Copyright (c) 2021 Barchampas Gerasimos </makindosx@gmail.com>
 * HadesOS is a mini operating system with microkernel.
 *
 * HadesOS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 *
 * HadesOS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License, version 3,
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */



#ifndef UTILITIES_H
#define UTILITIES_H

#include "unit_types.h"

extern uint32 strlen(const char*);
extern uint32 digit_count(int);
extern void itoa(int, char *);

#endif

