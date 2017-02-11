/* libsoc - Library to handle standardised output files
 * Copyright (C) 2015 Rikard Nordgren
 * 
 * This file was autogenerated and should not be edited
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * his library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _SO_PRIVATE_RUNTIME_H
#define _SO_PRIVATE_RUNTIME_H

#include <so/xml.h>

struct so_RunTime {
	char *Description;
	double *Real;
	double Real_number;
	int in_Description;
	int in_Real;
	int reference_count;
};

int so_RunTime_start_element(so_RunTime *self, const char *localname, int nb_attributes, const char **attributes);
void so_RunTime_end_element(so_RunTime *self, const char *localname);
int so_RunTime_characters(so_RunTime *self, const char *ch, int len);
so_xml so_RunTime_xml(so_RunTime *self);

#endif
