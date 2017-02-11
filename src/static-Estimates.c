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
#include <so/Estimates.h>
#include <so/private/Estimates.h>

so_Estimates *so_Estimates_new()
{
	so_Estimates *object = calloc(sizeof(so_Estimates), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_Estimates *so_Estimates_copy(so_Estimates *self)
{
	so_Estimates *dest = so_Estimates_new();
	if (dest) {
		if (self->Mean) {
			dest->Mean = so_Table_copy(self->Mean);
			if (!dest->Mean) {
				so_Estimates_free(dest);
				return NULL;
			}
		}
		if (self->Median) {
			dest->Median = so_Table_copy(self->Median);
			if (!dest->Median) {
				so_Estimates_free(dest);
				return NULL;
			}
		}
		if (self->Mode) {
			dest->Mode = so_Table_copy(self->Mode);
			if (!dest->Mode) {
				so_Estimates_free(dest);
				return NULL;
			}
		}
		if (self->Samples) {
			dest->Samples = so_Table_copy(self->Samples);
			if (!dest->Samples) {
				so_Estimates_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_Estimates_free(so_Estimates *self)
{
	if (self) {
		so_Table_unref(self->Mean);
		so_Table_unref(self->Median);
		so_Table_unref(self->Mode);
		so_Table_unref(self->Samples);
		free(self);
	}
}

void so_Estimates_ref(so_Estimates *self)
{
	self->reference_count++;
}

void so_Estimates_unref(so_Estimates *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_Estimates_free(self);
		}
	}
}

so_Table *so_Estimates_get_Mean(so_Estimates *self)
{
	return self->Mean;
}

so_Table *so_Estimates_get_Median(so_Estimates *self)
{
	return self->Median;
}

so_Table *so_Estimates_get_Mode(so_Estimates *self)
{
	return self->Mode;
}

so_Table *so_Estimates_get_Samples(so_Estimates *self)
{
	return self->Samples;
}

void so_Estimates_set_Mean(so_Estimates *self, so_Table *value)
{
	so_Table_unref(self->Mean);
	self->Mean = value;
}

void so_Estimates_set_Median(so_Estimates *self, so_Table *value)
{
	so_Table_unref(self->Median);
	self->Median = value;
}

void so_Estimates_set_Mode(so_Estimates *self, so_Table *value)
{
	so_Table_unref(self->Mode);
	self->Mode = value;
}

void so_Estimates_set_Samples(so_Estimates *self, so_Table *value)
{
	so_Table_unref(self->Samples);
	self->Samples = value;
}

so_Table *so_Estimates_create_Mean(so_Estimates *self)
{
	so_Table *obj = so_Table_new("Mean");
	if (obj) {
		self->Mean = obj;
	}
	return obj;
}

so_Table *so_Estimates_create_Median(so_Estimates *self)
{
	so_Table *obj = so_Table_new("Median");
	if (obj) {
		self->Median = obj;
	}
	return obj;
}

so_Table *so_Estimates_create_Mode(so_Estimates *self)
{
	so_Table *obj = so_Table_new("Mode");
	if (obj) {
		self->Mode = obj;
	}
	return obj;
}

so_Table *so_Estimates_create_Samples(so_Estimates *self)
{
	so_Table *obj = so_Table_new("Samples");
	if (obj) {
		self->Samples = obj;
	}
	return obj;
}

int so_Estimates_xml(so_Estimates *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->Mean || self->Median || self->Mode || self->Samples) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "Estimates");
		if (rc < 0) return 1;
		if (self->Mean) {
			rc = so_Table_xml(self->Mean, writer, "Mean");
			if (rc != 0) return rc;
		}
		if (self->Median) {
			rc = so_Table_xml(self->Median, writer, "Median");
			if (rc != 0) return rc;
		}
		if (self->Mode) {
			rc = so_Table_xml(self->Mode, writer, "Mode");
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

int so_Estimates_start_element(so_Estimates *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_Mean) {
		int fail = so_Table_start_element(self->Mean, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_Median) {
		int fail = so_Table_start_element(self->Median, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_Mode) {
		int fail = so_Table_start_element(self->Mode, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_Samples) {
		int fail = so_Table_start_element(self->Samples, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "Mean") == 0) {
		so_Table *Mean = so_Estimates_create_Mean(self);
		if (!Mean) {
			return 1;
		}
		self->in_Mean = 1;
	} else if (strcmp(localname, "Median") == 0) {
		so_Table *Median = so_Estimates_create_Median(self);
		if (!Median) {
			return 1;
		}
		self->in_Median = 1;
	} else if (strcmp(localname, "Mode") == 0) {
		so_Table *Mode = so_Estimates_create_Mode(self);
		if (!Mode) {
			return 1;
		}
		self->in_Mode = 1;
	} else if (strcmp(localname, "Samples") == 0) {
		so_Table *Samples = so_Estimates_create_Samples(self);
		if (!Samples) {
			return 1;
		}
		self->in_Samples = 1;
	}
	return 0;
}

void so_Estimates_end_element(so_Estimates *self, const char *localname)
{
	if (strcmp(localname, "Mean") == 0 && self->in_Mean) {
		self->in_Mean = 0;
	} else if (strcmp(localname, "Median") == 0 && self->in_Median) {
		self->in_Median = 0;
	} else if (strcmp(localname, "Mode") == 0 && self->in_Mode) {
		self->in_Mode = 0;
	} else if (strcmp(localname, "Samples") == 0 && self->in_Samples) {
		self->in_Samples = 0;
	} else if (self->in_Mean) {
		so_Table_end_element(self->Mean, localname);
	} else if (self->in_Median) {
		so_Table_end_element(self->Median, localname);
	} else if (self->in_Mode) {
		so_Table_end_element(self->Mode, localname);
	} else if (self->in_Samples) {
		so_Table_end_element(self->Samples, localname);
	}
}

int so_Estimates_characters(so_Estimates *self, const char *ch, int len)
{
	if (self->in_Mean) {
		int fail = so_Table_characters(self->Mean, ch, len);
		if (fail) return 1;
	} else if (self->in_Median) {
		int fail = so_Table_characters(self->Median, ch, len);
		if (fail) return 1;
	} else if (self->in_Mode) {
		int fail = so_Table_characters(self->Mode, ch, len);
		if (fail) return 1;
	} else if (self->in_Samples) {
		int fail = so_Table_characters(self->Samples, ch, len);
		if (fail) return 1;
	}
	return 0;
}