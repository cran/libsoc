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
#include <so/RandomEffects_IE.h>
#include <so/private/RandomEffects_IE.h>

so_RandomEffects_IE *so_RandomEffects_IE_new()
{
	so_RandomEffects_IE *object = calloc(sizeof(so_RandomEffects_IE), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_RandomEffects_IE *so_RandomEffects_IE_copy(so_RandomEffects_IE *self)
{
	so_RandomEffects_IE *dest = so_RandomEffects_IE_new();
	if (dest) {
		if (self->EffectMean) {
			dest->EffectMean = so_Table_copy(self->EffectMean);
			if (!dest->EffectMean) {
				so_RandomEffects_IE_free(dest);
				return NULL;
			}
		}
		if (self->EffectMedian) {
			dest->EffectMedian = so_Table_copy(self->EffectMedian);
			if (!dest->EffectMedian) {
				so_RandomEffects_IE_free(dest);
				return NULL;
			}
		}
		if (self->EffectMode) {
			dest->EffectMode = so_Table_copy(self->EffectMode);
			if (!dest->EffectMode) {
				so_RandomEffects_IE_free(dest);
				return NULL;
			}
		}
		if (self->Samples) {
			dest->Samples = so_Table_copy(self->Samples);
			if (!dest->Samples) {
				so_RandomEffects_IE_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_RandomEffects_IE_free(so_RandomEffects_IE *self)
{
	if (self) {
		so_Table_unref(self->EffectMean);
		so_Table_unref(self->EffectMedian);
		so_Table_unref(self->EffectMode);
		so_Table_unref(self->Samples);
		free(self);
	}
}

void so_RandomEffects_IE_ref(so_RandomEffects_IE *self)
{
	self->reference_count++;
}

void so_RandomEffects_IE_unref(so_RandomEffects_IE *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_RandomEffects_IE_free(self);
		}
	}
}

so_Table *so_RandomEffects_IE_get_EffectMean(so_RandomEffects_IE *self)
{
	return self->EffectMean;
}

so_Table *so_RandomEffects_IE_get_EffectMedian(so_RandomEffects_IE *self)
{
	return self->EffectMedian;
}

so_Table *so_RandomEffects_IE_get_EffectMode(so_RandomEffects_IE *self)
{
	return self->EffectMode;
}

so_Table *so_RandomEffects_IE_get_Samples(so_RandomEffects_IE *self)
{
	return self->Samples;
}

void so_RandomEffects_IE_set_EffectMean(so_RandomEffects_IE *self, so_Table *value)
{
	so_Table_unref(self->EffectMean);
	self->EffectMean = value;
}

void so_RandomEffects_IE_set_EffectMedian(so_RandomEffects_IE *self, so_Table *value)
{
	so_Table_unref(self->EffectMedian);
	self->EffectMedian = value;
}

void so_RandomEffects_IE_set_EffectMode(so_RandomEffects_IE *self, so_Table *value)
{
	so_Table_unref(self->EffectMode);
	self->EffectMode = value;
}

void so_RandomEffects_IE_set_Samples(so_RandomEffects_IE *self, so_Table *value)
{
	so_Table_unref(self->Samples);
	self->Samples = value;
}

so_Table *so_RandomEffects_IE_create_EffectMean(so_RandomEffects_IE *self)
{
	so_Table *obj = so_Table_new("EffectMean");
	if (obj) {
		self->EffectMean = obj;
	}
	return obj;
}

so_Table *so_RandomEffects_IE_create_EffectMedian(so_RandomEffects_IE *self)
{
	so_Table *obj = so_Table_new("EffectMedian");
	if (obj) {
		self->EffectMedian = obj;
	}
	return obj;
}

so_Table *so_RandomEffects_IE_create_EffectMode(so_RandomEffects_IE *self)
{
	so_Table *obj = so_Table_new("EffectMode");
	if (obj) {
		self->EffectMode = obj;
	}
	return obj;
}

so_Table *so_RandomEffects_IE_create_Samples(so_RandomEffects_IE *self)
{
	so_Table *obj = so_Table_new("Samples");
	if (obj) {
		self->Samples = obj;
	}
	return obj;
}

int so_RandomEffects_IE_xml(so_RandomEffects_IE *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->EffectMean || self->EffectMedian || self->EffectMode || self->Samples) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "RandomEffects");
		if (rc < 0) return 1;
		if (self->EffectMean) {
			rc = so_Table_xml(self->EffectMean, writer, "EffectMean");
			if (rc != 0) return rc;
		}
		if (self->EffectMedian) {
			rc = so_Table_xml(self->EffectMedian, writer, "EffectMedian");
			if (rc != 0) return rc;
		}
		if (self->EffectMode) {
			rc = so_Table_xml(self->EffectMode, writer, "EffectMode");
			if (rc != 0) return rc;
		}
		if (self->Samples) {
			rc = so_Table_xml(self->Samples, writer, "Samples");
			if (rc != 0) return rc;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_RandomEffects_IE_start_element(so_RandomEffects_IE *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_EffectMean) {
		int fail = so_Table_start_element(self->EffectMean, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_EffectMedian) {
		int fail = so_Table_start_element(self->EffectMedian, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_EffectMode) {
		int fail = so_Table_start_element(self->EffectMode, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_Samples) {
		int fail = so_Table_start_element(self->Samples, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "EffectMean") == 0) {
		so_Table *EffectMean = so_RandomEffects_IE_create_EffectMean(self);
		if (!EffectMean) {
			return 1;
		}
		self->in_EffectMean = 1;
	} else if (strcmp(localname, "EffectMedian") == 0) {
		so_Table *EffectMedian = so_RandomEffects_IE_create_EffectMedian(self);
		if (!EffectMedian) {
			return 1;
		}
		self->in_EffectMedian = 1;
	} else if (strcmp(localname, "EffectMode") == 0) {
		so_Table *EffectMode = so_RandomEffects_IE_create_EffectMode(self);
		if (!EffectMode) {
			return 1;
		}
		self->in_EffectMode = 1;
	} else if (strcmp(localname, "Samples") == 0) {
		so_Table *Samples = so_RandomEffects_IE_create_Samples(self);
		if (!Samples) {
			return 1;
		}
		self->in_Samples = 1;
	}
	return 0;
}

void so_RandomEffects_IE_end_element(so_RandomEffects_IE *self, const char *localname)
{
	if (strcmp(localname, "EffectMean") == 0 && self->in_EffectMean) {
		self->in_EffectMean = 0;
	} else if (strcmp(localname, "EffectMedian") == 0 && self->in_EffectMedian) {
		self->in_EffectMedian = 0;
	} else if (strcmp(localname, "EffectMode") == 0 && self->in_EffectMode) {
		self->in_EffectMode = 0;
	} else if (strcmp(localname, "Samples") == 0 && self->in_Samples) {
		self->in_Samples = 0;
	} else if (self->in_EffectMean) {
		so_Table_end_element(self->EffectMean, localname);
	} else if (self->in_EffectMedian) {
		so_Table_end_element(self->EffectMedian, localname);
	} else if (self->in_EffectMode) {
		so_Table_end_element(self->EffectMode, localname);
	} else if (self->in_Samples) {
		so_Table_end_element(self->Samples, localname);
	}
}

int so_RandomEffects_IE_characters(so_RandomEffects_IE *self, const char *ch, int len)
{
	if (self->in_EffectMean) {
		int fail = so_Table_characters(self->EffectMean, ch, len);
		if (fail) return 1;
	} else if (self->in_EffectMedian) {
		int fail = so_Table_characters(self->EffectMedian, ch, len);
		if (fail) return 1;
	} else if (self->in_EffectMode) {
		int fail = so_Table_characters(self->EffectMode, ch, len);
		if (fail) return 1;
	} else if (self->in_Samples) {
		int fail = so_Table_characters(self->Samples, ch, len);
		if (fail) return 1;
	}
	return 0;
}