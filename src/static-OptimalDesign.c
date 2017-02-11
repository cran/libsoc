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
#include <so/OptimalDesign.h>
#include <so/private/OptimalDesign.h>

so_OptimalDesign *so_OptimalDesign_new()
{
	so_OptimalDesign *object = calloc(sizeof(so_OptimalDesign), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_OptimalDesign *so_OptimalDesign_copy(so_OptimalDesign *self)
{
	so_OptimalDesign *dest = so_OptimalDesign_new();
	if (dest) {
		if (self->type) {
			dest->type = pharmml_strdup(self->type);
			if (!dest->type) {
				so_OptimalDesign_free(dest);
				return NULL;
			}
		}
		if (self->num_OptimalDesignBlock) {
			dest->OptimalDesignBlock = calloc(self->num_OptimalDesignBlock * sizeof(so_OptimalDesignBlock *), 1);
			if (!dest->OptimalDesignBlock) {
				so_OptimalDesign_free(dest);
				return NULL;
			}
			dest->num_OptimalDesignBlock = self->num_OptimalDesignBlock;
			for (int i = 0; i < self->num_OptimalDesignBlock; i++) {
				dest->OptimalDesignBlock[i] = so_OptimalDesignBlock_copy(self->OptimalDesignBlock[i]);
				if (!dest->OptimalDesignBlock[i]) {
					so_OptimalDesign_free(dest);
					return NULL;
				}
			}
		}
	}

	return dest;
}

void so_OptimalDesign_free(so_OptimalDesign *self)
{
	if (self) {
		for(int i = 0; i < self->num_OptimalDesignBlock; i++) {
			so_OptimalDesignBlock_unref(self->OptimalDesignBlock[i]);
		}
		free(self->OptimalDesignBlock);
		if (self->type) free(self->type);
		free(self);
	}
}

void so_OptimalDesign_ref(so_OptimalDesign *self)
{
	self->reference_count++;
}

void so_OptimalDesign_unref(so_OptimalDesign *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_OptimalDesign_free(self);
		}
	}
}

char *so_OptimalDesign_get_type(so_OptimalDesign *self)
{
	return self->type;
}

so_OptimalDesignBlock *so_OptimalDesign_get_OptimalDesignBlock(so_OptimalDesign *self, int number)
{
	return self->OptimalDesignBlock[number];
}

int so_OptimalDesign_get_number_of_OptimalDesignBlock(so_OptimalDesign *self)
{
	return self->num_OptimalDesignBlock;
}

int so_OptimalDesign_set_type(so_OptimalDesign *self, char *value)
{
	if (!value) {
		self->type = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->type);
		self->type = new_value;
		return 0;
	} else {
		return 1;
	}
}

so_OptimalDesignBlock *so_OptimalDesign_create_OptimalDesignBlock(so_OptimalDesign *self)
{
	so_OptimalDesignBlock *obj = so_OptimalDesignBlock_new();
	if (obj) {
		so_OptimalDesignBlock **newblock = realloc(self->OptimalDesignBlock, (self->num_OptimalDesignBlock + 1) * sizeof(so_OptimalDesignBlock *));
		if (newblock) {
			self->OptimalDesignBlock = newblock;
			self->OptimalDesignBlock[self->num_OptimalDesignBlock] = obj;
			self->num_OptimalDesignBlock++;
		} else {
			so_OptimalDesignBlock_free(obj);
			obj = NULL;
		}
	}
	return obj;
}

int so_OptimalDesign_add_OptimalDesignBlock(so_OptimalDesign *self, so_OptimalDesignBlock *child)
{
	so_OptimalDesignBlock **new_array = realloc(self->OptimalDesignBlock, (self->num_OptimalDesignBlock + 1) * sizeof(so_OptimalDesignBlock *));
	if (!new_array) {
		return 1;
	}
	self->OptimalDesignBlock = new_array;
	self->OptimalDesignBlock[self->num_OptimalDesignBlock] = child;
	self->num_OptimalDesignBlock++;
	return 0;
}

int so_OptimalDesign_remove_OptimalDesignBlock(so_OptimalDesign *self, int index)
{
	int size = self->num_OptimalDesignBlock;
	if (index >= size) {
		return 0;
	}
	if (size == 1) {
		free(self->OptimalDesignBlock);
		self->OptimalDesignBlock = NULL;
		return 0;
	}
	so_OptimalDesignBlock *final = self->OptimalDesignBlock[size - 1];
	so_OptimalDesignBlock *remove = self->OptimalDesignBlock[index];
	so_OptimalDesignBlock **new_array = realloc(self->OptimalDesignBlock, (self->num_OptimalDesignBlock - 1) * sizeof(so_OptimalDesignBlock *));
	if (!new_array) {
		return 1;
	}
	self->num_OptimalDesignBlock--;
	if (final == remove) {
		return 0;
	}
	for (int i = index; i < size - 3; i++) {
		self->OptimalDesignBlock[i] = self->OptimalDesignBlock[i + 1];
	}
	self->OptimalDesignBlock[size - 2] = final;
	so_OptimalDesignBlock_unref(remove);
	return 0;
}

int so_OptimalDesign_xml(so_OptimalDesign *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->OptimalDesignBlock || self->type) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "OptimalDesign");
		if (rc < 0) return 1;
		if (self->type) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "type", BAD_CAST self->type);
			if (rc < 0) return 1;
		}
		if (self->OptimalDesignBlock) {
			for (int i = 0; i < self->num_OptimalDesignBlock; i++) {
				rc = so_OptimalDesignBlock_xml(self->OptimalDesignBlock[i], writer);
				if (rc != 0) return 1;
			}
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_OptimalDesign_start_element(so_OptimalDesign *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_OptimalDesignBlock) {
		int fail = so_OptimalDesignBlock_start_element(self->OptimalDesignBlock[self->num_OptimalDesignBlock - 1], localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "OptimalDesignBlock") == 0) {
		so_OptimalDesignBlock *OptimalDesignBlock = so_OptimalDesignBlock_new();
		if (!OptimalDesignBlock) {
			return 1;
		}
		int fail = so_OptimalDesignBlock_init_attributes(OptimalDesignBlock, nb_attributes, attributes);
		if (fail) {
			so_OptimalDesignBlock_free(OptimalDesignBlock);
			return 1;
		}
		fail = so_OptimalDesign_add_OptimalDesignBlock(self, OptimalDesignBlock);
		if (fail) {
			so_OptimalDesignBlock_free(OptimalDesignBlock);
			return 1;
		}
		self->in_OptimalDesignBlock = 1;
	}
	return 0;
}

void so_OptimalDesign_end_element(so_OptimalDesign *self, const char *localname)
{
	if (strcmp(localname, "OptimalDesignBlock") == 0 && self->in_OptimalDesignBlock) {
		self->in_OptimalDesignBlock = 0;
	} else if (self->in_OptimalDesignBlock) {
		so_OptimalDesignBlock_end_element(self->OptimalDesignBlock[self->num_OptimalDesignBlock - 1], localname);
	}
}

int so_OptimalDesign_characters(so_OptimalDesign *self, const char *ch, int len)
{
	if (self->in_OptimalDesignBlock) {
		int fail = so_OptimalDesignBlock_characters(self->OptimalDesignBlock[self->num_OptimalDesignBlock - 1], ch, len);
		if (fail) return 1;
	}
	return 0;
}

int so_OptimalDesign_init_attributes(so_OptimalDesign *self, int nb_attributes, const char **attributes)
{
	unsigned int index = 0;
	for (int i = 0; i < nb_attributes; i++, index += 5) {
		const char *localname = attributes[index];
		const char *valueBegin = attributes[index + 3];
		const char *valueEnd = attributes[index + 4];

		if (strcmp(localname, "type") == 0) {
			self->type = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->type) {
				return 1;
			}
		}
	}
	return 0;
}
