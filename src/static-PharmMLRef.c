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
#include <so/PharmMLRef.h>
#include <so/private/PharmMLRef.h>

so_PharmMLRef *so_PharmMLRef_new()
{
	so_PharmMLRef *object = calloc(sizeof(so_PharmMLRef), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_PharmMLRef *so_PharmMLRef_copy(so_PharmMLRef *self)
{
	so_PharmMLRef *dest = so_PharmMLRef_new();
	if (dest) {
		if (self->name) {
			dest->name = pharmml_strdup(self->name);
			if (!dest->name) {
				so_PharmMLRef_free(dest);
				return NULL;
			}
		}
		if (self->id) {
			dest->id = pharmml_strdup(self->id);
			if (!dest->id) {
				so_PharmMLRef_free(dest);
				return NULL;
			}
		}
		if (self->Description) {
			dest->Description = pharmml_strdup(self->Description);
			if (!dest->Description) {
				so_PharmMLRef_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_PharmMLRef_free(so_PharmMLRef *self)
{
	if (self) {
		free(self->Description);
		if (self->name) free(self->name);
		if (self->id) free(self->id);
		free(self);
	}
}

void so_PharmMLRef_ref(so_PharmMLRef *self)
{
	self->reference_count++;
}

void so_PharmMLRef_unref(so_PharmMLRef *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_PharmMLRef_free(self);
		}
	}
}

char *so_PharmMLRef_get_name(so_PharmMLRef *self)
{
	return self->name;
}

char *so_PharmMLRef_get_id(so_PharmMLRef *self)
{
	return self->id;
}

char *so_PharmMLRef_get_Description(so_PharmMLRef *self)
{
	return self->Description;
}

int so_PharmMLRef_set_name(so_PharmMLRef *self, char *value)
{
	if (!value) {
		self->name = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->name);
		self->name = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_PharmMLRef_set_id(so_PharmMLRef *self, char *value)
{
	if (!value) {
		self->id = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->id);
		self->id = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_PharmMLRef_set_Description(so_PharmMLRef *self, char *value)
{
	if (!value) {
		self->Description = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->Description);
		self->Description = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_PharmMLRef_xml(so_PharmMLRef *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->Description || self->name || self->id) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "PharmMLRef");
		if (rc < 0) return 1;
		if (self->name) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "name", BAD_CAST self->name);
			if (rc < 0) return 1;
		}
		if (self->id) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "id", BAD_CAST self->id);
			if (rc < 0) return 1;
		}
		if (self->Description) {
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "ct:Description", BAD_CAST self->Description);
			if (rc < 0) return 1;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_PharmMLRef_start_element(so_PharmMLRef *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (strcmp(localname, "Description") == 0) {
		self->in_Description = 1;
	}
	return 0;
}

void so_PharmMLRef_end_element(so_PharmMLRef *self, const char *localname)
{
	if (strcmp(localname, "Description") == 0 && self->in_Description) {
		self->in_Description = 0;
	}
}

int so_PharmMLRef_characters(so_PharmMLRef *self, const char *ch, int len)
{
	if (self->in_Description) {
		self->Description = pharmml_strndup(ch, len);
		if (!self->Description) {
			return 1;
		}
	}
	return 0;
}

int so_PharmMLRef_init_attributes(so_PharmMLRef *self, int nb_attributes, const char **attributes)
{
	unsigned int index = 0;
	for (int i = 0; i < nb_attributes; i++, index += 5) {
		const char *localname = attributes[index];
		const char *valueBegin = attributes[index + 3];
		const char *valueEnd = attributes[index + 4];

		if (strcmp(localname, "name") == 0) {
			self->name = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->name) {
				return 1;
			}
		} else if (strcmp(localname, "id") == 0) {
			self->id = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->id) {
				return 1;
			}
		}
	}
	return 0;
}