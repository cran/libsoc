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
#include <string.h>
#include <libxml/xmlwriter.h>
#include <pharmml/common_types.h>
#include <pharmml/string.h>
#include <so/DiagnosticStructuralModel.h>
#include <so/private/DiagnosticStructuralModel.h>

so_DiagnosticStructuralModel *so_DiagnosticStructuralModel_new()
{
	so_DiagnosticStructuralModel *object = calloc(sizeof(so_DiagnosticStructuralModel), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_DiagnosticStructuralModel *so_DiagnosticStructuralModel_copy(so_DiagnosticStructuralModel *self)
{
	so_DiagnosticStructuralModel *dest = so_DiagnosticStructuralModel_new();
	if (dest) {
		if (self->IndivObservationPrediction) {
			dest->IndivObservationPrediction = so_Table_copy(self->IndivObservationPrediction);
			if (!dest->IndivObservationPrediction) {
				so_DiagnosticStructuralModel_free(dest);
				return NULL;
			}
		}
		if (self->VPC) {
			dest->VPC = so_Table_copy(self->VPC);
			if (!dest->VPC) {
				so_DiagnosticStructuralModel_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_DiagnosticStructuralModel_free(so_DiagnosticStructuralModel *self)
{
	if (self) {
		so_Table_unref(self->IndivObservationPrediction);
		so_Table_unref(self->VPC);
		free(self);
	}
}

void so_DiagnosticStructuralModel_ref(so_DiagnosticStructuralModel *self)
{
	self->reference_count++;
}

void so_DiagnosticStructuralModel_unref(so_DiagnosticStructuralModel *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_DiagnosticStructuralModel_free(self);
		}
	}
}

so_Table *so_DiagnosticStructuralModel_get_IndivObservationPrediction(so_DiagnosticStructuralModel *self)
{
	return self->IndivObservationPrediction;
}

so_Table *so_DiagnosticStructuralModel_get_VPC(so_DiagnosticStructuralModel *self)
{
	return self->VPC;
}

void so_DiagnosticStructuralModel_set_IndivObservationPrediction(so_DiagnosticStructuralModel *self, so_Table *value)
{
	so_Table_unref(self->IndivObservationPrediction);
	self->IndivObservationPrediction = value;
}

void so_DiagnosticStructuralModel_set_VPC(so_DiagnosticStructuralModel *self, so_Table *value)
{
	so_Table_unref(self->VPC);
	self->VPC = value;
}

so_Table *so_DiagnosticStructuralModel_create_IndivObservationPrediction(so_DiagnosticStructuralModel *self)
{
	so_Table *obj = so_Table_new("IndivObservationPrediction");
	if (obj) {
		self->IndivObservationPrediction = obj;
	}
	return obj;
}

so_Table *so_DiagnosticStructuralModel_create_VPC(so_DiagnosticStructuralModel *self)
{
	so_Table *obj = so_Table_new("VPC");
	if (obj) {
		self->VPC = obj;
	}
	return obj;
}

int so_DiagnosticStructuralModel_xml(so_DiagnosticStructuralModel *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->IndivObservationPrediction || self->VPC) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "DiagnosticStructuralModel");
		if (rc < 0) return 1;
		if (self->IndivObservationPrediction) {
			rc = so_Table_xml(self->IndivObservationPrediction, writer, "IndivObservationPrediction");
			if (rc != 0) return rc;
		}
		if (self->VPC) {
			rc = so_Table_xml(self->VPC, writer, "VPC");
			if (rc != 0) return rc;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_DiagnosticStructuralModel_start_element(so_DiagnosticStructuralModel *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_IndivObservationPrediction) {
		int fail = so_Table_start_element(self->IndivObservationPrediction, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_VPC) {
		int fail = so_Table_start_element(self->VPC, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "IndivObservationPrediction") == 0) {
		so_Table *IndivObservationPrediction = so_DiagnosticStructuralModel_create_IndivObservationPrediction(self);
		if (!IndivObservationPrediction) {
			return 1;
		}
		self->in_IndivObservationPrediction = 1;
	} else if (strcmp(localname, "VPC") == 0) {
		so_Table *VPC = so_DiagnosticStructuralModel_create_VPC(self);
		if (!VPC) {
			return 1;
		}
		self->in_VPC = 1;
	}
	return 0;
}

void so_DiagnosticStructuralModel_end_element(so_DiagnosticStructuralModel *self, const char *localname)
{
	if (strcmp(localname, "IndivObservationPrediction") == 0 && self->in_IndivObservationPrediction) {
		self->in_IndivObservationPrediction = 0;
	} else if (strcmp(localname, "VPC") == 0 && self->in_VPC) {
		self->in_VPC = 0;
	} else if (self->in_IndivObservationPrediction) {
		so_Table_end_element(self->IndivObservationPrediction, localname);
	} else if (self->in_VPC) {
		so_Table_end_element(self->VPC, localname);
	}
}

int so_DiagnosticStructuralModel_characters(so_DiagnosticStructuralModel *self, const char *ch, int len)
{
	if (self->in_IndivObservationPrediction) {
		int fail = so_Table_characters(self->IndivObservationPrediction, ch, len);
		if (fail) return 1;
	} else if (self->in_VPC) {
		int fail = so_Table_characters(self->VPC, ch, len);
		if (fail) return 1;
	}
	return 0;
}