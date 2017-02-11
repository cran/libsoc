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
#include <so/MissingData.h>
#include <so/private/MissingData.h>

so_MissingData *so_MissingData_new()
{
	so_MissingData *object = calloc(sizeof(so_MissingData), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_MissingData *so_MissingData_copy(so_MissingData *self)
{
	so_MissingData *dest = so_MissingData_new();
	if (dest) {
		if (self->dataCode) {
			dest->dataCode = pharmml_strdup(self->dataCode);
			if (!dest->dataCode) {
				so_MissingData_free(dest);
				return NULL;
			}
		}
		if (self->missingDataType) {
			dest->missingDataType = pharmml_strdup(self->missingDataType);
			if (!dest->missingDataType) {
				so_MissingData_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_MissingData_free(so_MissingData *self)
{
	if (self) {
		if (self->dataCode) free(self->dataCode);
		if (self->missingDataType) free(self->missingDataType);
		free(self);
	}
}

void so_MissingData_ref(so_MissingData *self)
{
	self->reference_count++;
}

void so_MissingData_unref(so_MissingData *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_MissingData_free(self);
		}
	}
}

char *so_MissingData_get_dataCode(so_MissingData *self)
{
	return self->dataCode;
}

char *so_MissingData_get_missingDataType(so_MissingData *self)
{
	return self->missingDataType;
}

int so_MissingData_set_dataCode(so_MissingData *self, char *value)
{
	if (!value) {
		self->dataCode = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->dataCode);
		self->dataCode = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_MissingData_set_missingDataType(so_MissingData *self, char *value)
{
	if (!value) {
		self->missingDataType = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->missingDataType);
		self->missingDataType = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_MissingData_xml(so_MissingData *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->dataCode || self->missingDataType) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "MissingData");
		if (rc < 0) return 1;
		if (self->dataCode) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "dataCode", BAD_CAST self->dataCode);
			if (rc < 0) return 1;
		}
		if (self->missingDataType) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "missingDataType", BAD_CAST self->missingDataType);
			if (rc < 0) return 1;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_MissingData_start_element(so_MissingData *self, const char *localname, int nb_attributes, const char **attributes)
{
	return 0;
}

void so_MissingData_end_element(so_MissingData *self, const char *localname)
{
}

int so_MissingData_characters(so_MissingData *self, const char *ch, int len)
{
	return 0;
}

int so_MissingData_init_attributes(so_MissingData *self, int nb_attributes, const char **attributes)
{
	unsigned int index = 0;
	for (int i = 0; i < nb_attributes; i++, index += 5) {
		const char *localname = attributes[index];
		const char *valueBegin = attributes[index + 3];
		const char *valueEnd = attributes[index + 4];

		if (strcmp(localname, "dataCode") == 0) {
			self->dataCode = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->dataCode) {
				return 1;
			}
		} else if (strcmp(localname, "missingDataType") == 0) {
			self->missingDataType = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->missingDataType) {
				return 1;
			}
		}
	}
	return 0;
}
