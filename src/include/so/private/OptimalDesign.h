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
#ifndef _SO_PRIVATE_OPTIMALDESIGN_H
#define _SO_PRIVATE_OPTIMALDESIGN_H

#include <libxml/xmlwriter.h>

#include <so/private/OptimalDesignBlock.h>

struct so_OptimalDesign {
	char *type;
	so_OptimalDesignBlock **OptimalDesignBlock;
	int num_OptimalDesignBlock;
	int in_OptimalDesignBlock;
	int reference_count;
};

int so_OptimalDesign_start_element(so_OptimalDesign *self, const char *localname, int nb_attributes, const char **attributes);
void so_OptimalDesign_end_element(so_OptimalDesign *self, const char *localname);
int so_OptimalDesign_characters(so_OptimalDesign *self, const char *ch, int len);
int so_OptimalDesign_xml(so_OptimalDesign *self, xmlTextWriterPtr writer);
int so_OptimalDesign_init_attributes(so_OptimalDesign *self, int nb_attributes, const char **attributes);

#endif
