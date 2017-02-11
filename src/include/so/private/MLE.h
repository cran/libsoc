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
#ifndef _SO_PRIVATE_MLE_H
#define _SO_PRIVATE_MLE_H

#include <libxml/xmlwriter.h>

#include <so/private/Matrix.h>
#include <so/private/Table.h>

struct so_MLE {
	so_Matrix *FIM;
	so_Matrix *CovarianceMatrix;
	so_Matrix *CorrelationMatrix;
	so_Table *StandardError;
	so_Table *RelativeStandardError;
	so_Table *AsymptoticCI;
	double *ConditionNumber;
	double ConditionNumber_number;
	int in_FIM;
	int in_CovarianceMatrix;
	int in_CorrelationMatrix;
	int in_StandardError;
	int in_RelativeStandardError;
	int in_AsymptoticCI;
	int in_ConditionNumber;
	int reference_count;
};

int so_MLE_start_element(so_MLE *self, const char *localname, int nb_attributes, const char **attributes);
void so_MLE_end_element(so_MLE *self, const char *localname);
int so_MLE_characters(so_MLE *self, const char *ch, int len);
int so_MLE_xml(so_MLE *self, xmlTextWriterPtr writer);

#endif
