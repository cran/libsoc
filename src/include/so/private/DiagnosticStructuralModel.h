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
#ifndef _SO_PRIVATE_DIAGNOSTICSTRUCTURALMODEL_H
#define _SO_PRIVATE_DIAGNOSTICSTRUCTURALMODEL_H

#include <libxml/xmlwriter.h>

#include <so/private/Table.h>

struct so_DiagnosticStructuralModel {
	so_Table *IndivObservationPrediction;
	so_Table *VPC;
	int in_IndivObservationPrediction;
	int in_VPC;
	int reference_count;
};

int so_DiagnosticStructuralModel_start_element(so_DiagnosticStructuralModel *self, const char *localname, int nb_attributes, const char **attributes);
void so_DiagnosticStructuralModel_end_element(so_DiagnosticStructuralModel *self, const char *localname);
int so_DiagnosticStructuralModel_characters(so_DiagnosticStructuralModel *self, const char *ch, int len);
int so_DiagnosticStructuralModel_xml(so_DiagnosticStructuralModel *self, xmlTextWriterPtr writer);

#endif
