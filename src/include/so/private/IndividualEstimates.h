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
#ifndef _SO_PRIVATE_INDIVIDUALESTIMATES_H
#define _SO_PRIVATE_INDIVIDUALESTIMATES_H

#include <libxml/xmlwriter.h>

#include <so/private/Estimates.h>
#include <so/private/RandomEffects_IE.h>
#include <so/private/Table.h>

struct so_IndividualEstimates {
	so_Estimates *Estimates;
	so_RandomEffects_IE *RandomEffects;
	so_Table *EtaShrinkage;
	int in_Estimates;
	int in_RandomEffects;
	int in_EtaShrinkage;
	int reference_count;
};

int so_IndividualEstimates_start_element(so_IndividualEstimates *self, const char *localname, int nb_attributes, const char **attributes);
void so_IndividualEstimates_end_element(so_IndividualEstimates *self, const char *localname);
int so_IndividualEstimates_characters(so_IndividualEstimates *self, const char *ch, int len);
int so_IndividualEstimates_xml(so_IndividualEstimates *self, xmlTextWriterPtr writer);

#endif