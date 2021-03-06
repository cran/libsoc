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
#include <so/SimulationSubType.h>
#include <so/private/SimulationSubType.h>

so_SimulationSubType *so_SimulationSubType_new()
{
	so_SimulationSubType *object = calloc(sizeof(so_SimulationSubType), 1);
	if (object) {
		object->reference_count = 1;
		object->base = so_Table_new();
		if (!object->base) {
			free(object);
			object = NULL;
		}
	}

	return object;
}

so_SimulationSubType *so_SimulationSubType_copy(so_SimulationSubType *self)
{
	so_SimulationSubType *dest = so_SimulationSubType_new();
	if (dest) {
		dest->base = so_Table_copy(self->base);
		if (!dest->base) {
			so_SimulationSubType_free(dest);
			return NULL;
		}
		if (self->name) {
			dest->name = pharmml_strdup(self->name);
			if (!dest->name) {
				so_SimulationSubType_free(dest);
				return NULL;
			}
		}
		if (self->extFileNo) {
			dest->extFileNo_number = self->extFileNo_number;
			dest->extFileNo = &(dest->extFileNo_number);
		}
	}

	return dest;
}

void so_SimulationSubType_free(so_SimulationSubType *self)
{
	if (self) {
		if (self->name) free(self->name);
		free(self->base);
		free(self);
	}
}

void so_SimulationSubType_ref(so_SimulationSubType *self)
{
	self->reference_count++;
}

void so_SimulationSubType_unref(so_SimulationSubType *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_SimulationSubType_free(self);
		}
	}
}

char *so_SimulationSubType_get_name(so_SimulationSubType *self)
{
	return self->name;
}

int *so_SimulationSubType_get_extFileNo(so_SimulationSubType *self)
{
	return self->extFileNo;
}

int so_SimulationSubType_set_name(so_SimulationSubType *self, char *value)
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

void so_SimulationSubType_set_extFileNo(so_SimulationSubType *self, int *value)
{
	if (value) {
		self->extFileNo_number = *value;
		self->extFileNo = &(self->extFileNo_number);
	} else {
		self->extFileNo = value;
	}
}

so_Table *so_SimulationSubType_get_base(so_SimulationSubType *self)
{
	return self->base;
}

int so_SimulationSubType_set_base(so_SimulationSubType *self, so_Table *value)
{
	so_Table_unref(value);
	self->base = value;
	return 0;
}


int so_SimulationSubType_subclass_xml(void *this, xmlTextWriterPtr writer)
{
    so_SimulationSubType *self = (so_SimulationSubType *) this;
    int rc;

    if (self->name) {
        rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "name", BAD_CAST self->name);
        if (rc < 0) return 1;
    }
    if (self->extFileNo) {
        char *attr_string = pharmml_int_to_string(self->extFileNo_number);
        if (!attr_string) return 1;
        rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "extFileNo", BAD_CAST attr_string);
        free(attr_string);
        if (rc < 0) return 1;
    }

    return 0;
}


int so_SimulationSubType_xml(so_SimulationSubType *self, xmlTextWriterPtr writer, char *element_name)
{
	int rc;
    self->base->superclass_func = &so_SimulationSubType_subclass_xml;
    self->base->superclass = (void *) self;

    rc = so_Table_xml(self->base, writer, element_name);
    if (rc != 0) return rc;

	return 0;
}

int so_SimulationSubType_start_element(so_SimulationSubType *self, const char *localname, int nb_attributes, const char **attributes)
{
	int fail = so_Table_start_element(self->base, localname, nb_attributes, attributes);
	if (fail) {
		return fail;
	}
	return 0;
}

void so_SimulationSubType_end_element(so_SimulationSubType *self, const char *localname)
{
	so_Table_end_element(self->base, localname);
}

int so_SimulationSubType_characters(so_SimulationSubType *self, const char *ch, int len)
{
	int fail = so_Table_characters(self->base, ch, len);
	if (fail) return 1;
	return 0;
}

int so_SimulationSubType_init_attributes(so_SimulationSubType *self, int nb_attributes, const char **attributes)
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
		} else if (strcmp(localname, "extFileNo") == 0) {
			char *final_char = (char *) valueEnd;
			char end_char = *final_char;
			*final_char = '\0';
			self->extFileNo_number = pharmml_string_to_int(valueBegin);
			self->extFileNo = &(self->extFileNo_number);
			*final_char = end_char;
		}
	}
	return 0;
}
