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
#ifndef _SO_PRIVATE_BAYESIAN_PPE_H
#define _SO_PRIVATE_BAYESIAN_PPE_H

#include <libxml/xmlwriter.h>

#include <so/private/Table.h>

struct so_Bayesian_PPE {
	so_Table *StandardDeviationPosterior;
	so_Table *PercentilesCI;
	int in_StandardDeviationPosterior;
	int in_PercentilesCI;
	int reference_count;
};

int so_Bayesian_PPE_start_element(so_Bayesian_PPE *self, const char *localname, int nb_attributes, const char **attributes);
void so_Bayesian_PPE_end_element(so_Bayesian_PPE *self, const char *localname);
int so_Bayesian_PPE_characters(so_Bayesian_PPE *self, const char *ch, int len);
int so_Bayesian_PPE_xml(so_Bayesian_PPE *self, xmlTextWriterPtr writer);

#endif