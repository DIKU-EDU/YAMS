/* yams -- Yet Another Machine Simulator
   Copyright (C) 2002 Juha Aatrokoski, Timo Lilja, Leena Salmela,
   Teemu Takanen, Aleksi Virtanen

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
   USA.

   $Id: dummy.c,v 1.5 2002/11/11 15:28:29 tlilja Exp $
*/
#include "dummy.h"

int dummy_io_write(device_t *dev, uint32_t addr, uint32_t data) {
    return (dev == NULL);
}

int dummy_io_read(device_t *dev, uint32_t addr, uint32_t *data) {
    *data = 0; /* better than leaving the data alone, imho */
    return (dev == NULL);
}

int dummy_update(device_t *dev) {
    return (dev == NULL);
}
