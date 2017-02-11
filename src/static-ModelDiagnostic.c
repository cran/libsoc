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
#include <so/ModelDiagnostic.h>
#include <so/private/ModelDiagnostic.h>

so_ModelDiagnostic *so_ModelDiagnostic_new()
{
	so_ModelDiagnostic *object = calloc(sizeof(so_ModelDiagnostic), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_ModelDiagnostic *so_ModelDiagnostic_copy(so_ModelDiagnostic *self)
{
	so_ModelDiagnostic *dest = so_ModelDiagnostic_new();
	if (dest) {
		if (self->DiagnosticStructuralModel) {
			dest->DiagnosticStructuralModel = so_DiagnosticStructuralModel_copy(self->DiagnosticStructuralModel);
			if (!dest->DiagnosticStructuralModel) {
				so_ModelDiagnostic_free(dest);
				return NULL;
			}
		}
		if (self->DiagnosticIndividualParams) {
			dest->DiagnosticIndividualParams = so_DiagnosticIndividualParams_copy(self->DiagnosticIndividualParams);
			if (!dest->DiagnosticIndividualParams) {
				so_ModelDiagnostic_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_ModelDiagnostic_free(so_ModelDiagnostic *self)
{
	if (self) {
		so_DiagnosticStructuralModel_unref(self->DiagnosticStructuralModel);
		so_DiagnosticIndividualParams_unref(self->DiagnosticIndividualParams);
		free(self);
	}
}

void so_ModelDiagnostic_ref(so_ModelDiagnostic *self)
{
	self->reference_count++;
}

void so_ModelDiagnostic_unref(so_ModelDiagnostic *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_ModelDiagnostic_free(self);
		}
	}
}

so_DiagnosticStructuralModel *so_ModelDiagnostic_get_DiagnosticStructuralModel(so_ModelDiagnostic *self)
{
	return self->DiagnosticStructuralModel;
}

so_DiagnosticIndividualParams *so_ModelDiagnostic_get_DiagnosticIndividualParams(so_ModelDiagnostic *self)
{
	return self->DiagnosticIndividualParams;
}

void so_ModelDiagnostic_set_DiagnosticStructuralModel(so_ModelDiagnostic *self, so_DiagnosticStructuralModel *value)
{
	so_DiagnosticStructuralModel_unref(self->DiagnosticStructuralModel);
	self->DiagnosticStructuralModel = value;
}

void so_ModelDiagnostic_set_DiagnosticIndividualParams(so_ModelDiagnostic *self, so_DiagnosticIndividualParams *value)
{
	so_DiagnosticIndividualParams_unref(self->DiagnosticIndividualParams);
	self->DiagnosticIndividualParams = value;
}

so_DiagnosticStructuralModel *so_ModelDiagnostic_create_DiagnosticStructuralModel(so_ModelDiagnostic *self)
{
	so_DiagnosticStructuralModel *obj = so_DiagnosticStructuralModel_new();
	if (obj) {
		self->DiagnosticStructuralModel = obj;
	}
	return obj;
}

so_DiagnosticIndividualParams *so_ModelDiagnostic_create_DiagnosticIndividualParams(so_ModelDiagnostic *self)
{
	so_DiagnosticIndividualParams *obj = so_DiagnosticIndividualParams_new();
	if (obj) {
		self->DiagnosticIndividualParams = obj;
	}
	return obj;
}

int so_ModelDiagnostic_xml(so_ModelDiagnostic *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->DiagnosticStructuralModel || self->DiagnosticIndividualParams) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "ModelDiagnostic");
		if (rc < 0) return 1;
		if (self->DiagnosticStructuralModel) {
			rc = so_DiagnosticStructuralModel_xml(self->DiagnosticStructuralModel, writer);
			if (rc != 0) return rc;
		}
		if (self->DiagnosticIndividualParams) {
			rc = so_DiagnosticIndividualParams_xml(self->DiagnosticIndividualParams, writer);
			if (rc != 0) return rc;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_ModelDiagnostic_start_element(so_ModelDiagnostic *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_DiagnosticStructuralModel) {
		int fail = so_DiagnosticStructuralModel_start_element(self->DiagnosticStructuralModel, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_DiagnosticIndividualParams) {
		int fail = so_DiagnosticIndividualParams_start_element(self->DiagnosticIndividualParams, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "DiagnosticStructuralModel") == 0) {
		so_DiagnosticStructuralModel *DiagnosticStructuralModel = so_ModelDiagnostic_create_DiagnosticStructuralModel(self);
		if (!DiagnosticStructuralModel) {
			return 1;
		}
		self->in_DiagnosticStructuralModel = 1;
	} else if (strcmp(localname, "DiagnosticIndividualParams") == 0) {
		so_DiagnosticIndividualParams *DiagnosticIndividualParams = so_ModelDiagnostic_create_DiagnosticIndividualParams(self);
		if (!DiagnosticIndividualParams) {
			return 1;
		}
		self->in_DiagnosticIndividualParams = 1;
	}
	return 0;
}

void so_ModelDiagnostic_end_element(so_ModelDiagnostic *self, const char *localname)
{
	if (strcmp(localname, "DiagnosticStructuralModel") == 0 && self->in_DiagnosticStructuralModel) {
		self->in_DiagnosticStructuralModel = 0;
	} else if (strcmp(localname, "DiagnosticIndividualParams") == 0 && self->in_DiagnosticIndividualParams) {
		self->in_DiagnosticIndividualParams = 0;
	} else if (self->in_DiagnosticStructuralModel) {
		so_DiagnosticStructuralModel_end_element(self->DiagnosticStructuralModel, localname);
	} else if (self->in_DiagnosticIndividualParams) {
		so_DiagnosticIndividualParams_end_element(self->DiagnosticIndividualParams, localname);
	}
}

int so_ModelDiagnostic_characters(so_ModelDiagnostic *self, const char *ch, int len)
{
	if (self->in_DiagnosticStructuralModel) {
		int fail = so_DiagnosticStructuralModel_characters(self->DiagnosticStructuralModel, ch, len);
		if (fail) return 1;
	} else if (self->in_DiagnosticIndividualParams) {
		int fail = so_DiagnosticIndividualParams_characters(self->DiagnosticIndividualParams, ch, len);
		if (fail) return 1;
	}
	return 0;
}
