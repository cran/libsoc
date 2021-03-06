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
#include <so/IndividualEstimates.h>
#include <so/private/IndividualEstimates.h>

so_IndividualEstimates *so_IndividualEstimates_new()
{
	so_IndividualEstimates *object = calloc(sizeof(so_IndividualEstimates), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_IndividualEstimates *so_IndividualEstimates_copy(so_IndividualEstimates *self)
{
	so_IndividualEstimates *dest = so_IndividualEstimates_new();
	if (dest) {
		if (self->Estimates) {
			dest->Estimates = so_Estimates_copy(self->Estimates);
			if (!dest->Estimates) {
				so_IndividualEstimates_free(dest);
				return NULL;
			}
		}
		if (self->RandomEffects) {
			dest->RandomEffects = so_RandomEffects_IE_copy(self->RandomEffects);
			if (!dest->RandomEffects) {
				so_IndividualEstimates_free(dest);
				return NULL;
			}
		}
		if (self->EtaShrinkage) {
			dest->EtaShrinkage = so_Table_copy(self->EtaShrinkage);
			if (!dest->EtaShrinkage) {
				so_IndividualEstimates_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_IndividualEstimates_free(so_IndividualEstimates *self)
{
	if (self) {
		so_Estimates_unref(self->Estimates);
		so_RandomEffects_IE_unref(self->RandomEffects);
		so_Table_unref(self->EtaShrinkage);
		free(self);
	}
}

void so_IndividualEstimates_ref(so_IndividualEstimates *self)
{
	self->reference_count++;
}

void so_IndividualEstimates_unref(so_IndividualEstimates *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_IndividualEstimates_free(self);
		}
	}
}

so_Estimates *so_IndividualEstimates_get_Estimates(so_IndividualEstimates *self)
{
	return self->Estimates;
}

so_RandomEffects_IE *so_IndividualEstimates_get_RandomEffects(so_IndividualEstimates *self)
{
	return self->RandomEffects;
}

so_Table *so_IndividualEstimates_get_EtaShrinkage(so_IndividualEstimates *self)
{
	return self->EtaShrinkage;
}

void so_IndividualEstimates_set_Estimates(so_IndividualEstimates *self, so_Estimates *value)
{
	so_Estimates_unref(self->Estimates);
	self->Estimates = value;
}

void so_IndividualEstimates_set_RandomEffects(so_IndividualEstimates *self, so_RandomEffects_IE *value)
{
	so_RandomEffects_IE_unref(self->RandomEffects);
	self->RandomEffects = value;
}

void so_IndividualEstimates_set_EtaShrinkage(so_IndividualEstimates *self, so_Table *value)
{
	so_Table_unref(self->EtaShrinkage);
	self->EtaShrinkage = value;
}

so_Estimates *so_IndividualEstimates_create_Estimates(so_IndividualEstimates *self)
{
	so_Estimates *obj = so_Estimates_new();
	if (obj) {
		self->Estimates = obj;
	}
	return obj;
}

so_RandomEffects_IE *so_IndividualEstimates_create_RandomEffects(so_IndividualEstimates *self)
{
	so_RandomEffects_IE *obj = so_RandomEffects_IE_new();
	if (obj) {
		self->RandomEffects = obj;
	}
	return obj;
}

so_Table *so_IndividualEstimates_create_EtaShrinkage(so_IndividualEstimates *self)
{
	so_Table *obj = so_Table_new("EtaShrinkage");
	if (obj) {
		self->EtaShrinkage = obj;
	}
	return obj;
}

int so_IndividualEstimates_xml(so_IndividualEstimates *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->Estimates || self->RandomEffects || self->EtaShrinkage) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "IndividualEstimates");
		if (rc < 0) return 1;
		if (self->Estimates) {
			rc = so_Estimates_xml(self->Estimates, writer);
			if (rc != 0) return rc;
		}
		if (self->RandomEffects) {
			rc = so_RandomEffects_IE_xml(self->RandomEffects, writer);
			if (rc != 0) return rc;
		}
		if (self->EtaShrinkage) {
			rc = so_Table_xml(self->EtaShrinkage, writer, "EtaShrinkage");
			if (rc != 0) return rc;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_IndividualEstimates_start_element(so_IndividualEstimates *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_Estimates) {
		int fail = so_Estimates_start_element(self->Estimates, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_RandomEffects) {
		int fail = so_RandomEffects_IE_start_element(self->RandomEffects, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_EtaShrinkage) {
		int fail = so_Table_start_element(self->EtaShrinkage, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "Estimates") == 0) {
		so_Estimates *Estimates = so_IndividualEstimates_create_Estimates(self);
		if (!Estimates) {
			return 1;
		}
		self->in_Estimates = 1;
	} else if (strcmp(localname, "RandomEffects") == 0) {
		so_RandomEffects_IE *RandomEffects = so_IndividualEstimates_create_RandomEffects(self);
		if (!RandomEffects) {
			return 1;
		}
		self->in_RandomEffects = 1;
	} else if (strcmp(localname, "EtaShrinkage") == 0) {
		so_Table *EtaShrinkage = so_IndividualEstimates_create_EtaShrinkage(self);
		if (!EtaShrinkage) {
			return 1;
		}
		self->in_EtaShrinkage = 1;
	}
	return 0;
}

void so_IndividualEstimates_end_element(so_IndividualEstimates *self, const char *localname)
{
	if (strcmp(localname, "Estimates") == 0 && self->in_Estimates) {
		self->in_Estimates = 0;
	} else if (strcmp(localname, "RandomEffects") == 0 && self->in_RandomEffects) {
		self->in_RandomEffects = 0;
	} else if (strcmp(localname, "EtaShrinkage") == 0 && self->in_EtaShrinkage) {
		self->in_EtaShrinkage = 0;
	} else if (self->in_Estimates) {
		so_Estimates_end_element(self->Estimates, localname);
	} else if (self->in_RandomEffects) {
		so_RandomEffects_IE_end_element(self->RandomEffects, localname);
	} else if (self->in_EtaShrinkage) {
		so_Table_end_element(self->EtaShrinkage, localname);
	}
}

int so_IndividualEstimates_characters(so_IndividualEstimates *self, const char *ch, int len)
{
	if (self->in_Estimates) {
		int fail = so_Estimates_characters(self->Estimates, ch, len);
		if (fail) return 1;
	} else if (self->in_RandomEffects) {
		int fail = so_RandomEffects_IE_characters(self->RandomEffects, ch, len);
		if (fail) return 1;
	} else if (self->in_EtaShrinkage) {
		int fail = so_Table_characters(self->EtaShrinkage, ch, len);
		if (fail) return 1;
	}
	return 0;
}
