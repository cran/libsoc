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
#include <so/SO.h>
#include <so/private/SO.h>

so_SO *so_SO_new()
{
	so_SO *object = calloc(sizeof(so_SO), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_SO *so_SO_copy(so_SO *self)
{
	so_SO *dest = so_SO_new();
	if (dest) {
		if (self->id) {
			dest->id = pharmml_strdup(self->id);
			if (!dest->id) {
				so_SO_free(dest);
				return NULL;
			}
		}
		if (self->metadataFile) {
			dest->metadataFile = pharmml_strdup(self->metadataFile);
			if (!dest->metadataFile) {
				so_SO_free(dest);
				return NULL;
			}
		}
		if (self->Description) {
			dest->Description = pharmml_strdup(self->Description);
			if (!dest->Description) {
				so_SO_free(dest);
				return NULL;
			}
		}
		if (self->PharmMLRef) {
			dest->PharmMLRef = so_PharmMLRef_copy(self->PharmMLRef);
			if (!dest->PharmMLRef) {
				so_SO_free(dest);
				return NULL;
			}
		}
		if (self->num_SOBlock) {
			dest->SOBlock = calloc(self->num_SOBlock * sizeof(so_SOBlock *), 1);
			if (!dest->SOBlock) {
				so_SO_free(dest);
				return NULL;
			}
			dest->num_SOBlock = self->num_SOBlock;
			for (int i = 0; i < self->num_SOBlock; i++) {
				dest->SOBlock[i] = so_SOBlock_copy(self->SOBlock[i]);
				if (!dest->SOBlock[i]) {
					so_SO_free(dest);
					return NULL;
				}
			}
		}
	}

	return dest;
}

void so_SO_free(so_SO *self)
{
	if (self) {
		free(self->Description);
		so_PharmMLRef_unref(self->PharmMLRef);
		for(int i = 0; i < self->num_SOBlock; i++) {
			so_SOBlock_unref(self->SOBlock[i]);
		}
		free(self->SOBlock);
		if (self->id) free(self->id);
		if (self->metadataFile) free(self->metadataFile);
		free(self);
	}
}

void so_SO_ref(so_SO *self)
{
	self->reference_count++;
}

void so_SO_unref(so_SO *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_SO_free(self);
		}
	}
}

char *so_SO_get_id(so_SO *self)
{
	return self->id;
}

char *so_SO_get_metadataFile(so_SO *self)
{
	return self->metadataFile;
}

char *so_SO_get_Description(so_SO *self)
{
	return self->Description;
}

so_PharmMLRef *so_SO_get_PharmMLRef(so_SO *self)
{
	return self->PharmMLRef;
}

so_SOBlock *so_SO_get_SOBlock(so_SO *self, int number)
{
	return self->SOBlock[number];
}

int so_SO_get_number_of_SOBlock(so_SO *self)
{
	return self->num_SOBlock;
}

int so_SO_set_id(so_SO *self, char *value)
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

int so_SO_set_metadataFile(so_SO *self, char *value)
{
	if (!value) {
		self->metadataFile = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->metadataFile);
		self->metadataFile = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_SO_set_Description(so_SO *self, char *value)
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

void so_SO_set_PharmMLRef(so_SO *self, so_PharmMLRef *value)
{
	so_PharmMLRef_unref(self->PharmMLRef);
	self->PharmMLRef = value;
}

so_PharmMLRef *so_SO_create_PharmMLRef(so_SO *self)
{
	so_PharmMLRef *obj = so_PharmMLRef_new();
	if (obj) {
		self->PharmMLRef = obj;
	}
	return obj;
}

so_SOBlock *so_SO_create_SOBlock(so_SO *self)
{
	so_SOBlock *obj = so_SOBlock_new();
	if (obj) {
		so_SOBlock **newblock = realloc(self->SOBlock, (self->num_SOBlock + 1) * sizeof(so_SOBlock *));
		if (newblock) {
			self->SOBlock = newblock;
			self->SOBlock[self->num_SOBlock] = obj;
			self->num_SOBlock++;
		} else {
			so_SOBlock_free(obj);
			obj = NULL;
		}
	}
	return obj;
}

int so_SO_add_SOBlock(so_SO *self, so_SOBlock *child)
{
	so_SOBlock **new_array = realloc(self->SOBlock, (self->num_SOBlock + 1) * sizeof(so_SOBlock *));
	if (!new_array) {
		return 1;
	}
	self->SOBlock = new_array;
	self->SOBlock[self->num_SOBlock] = child;
	self->num_SOBlock++;
	return 0;
}

int so_SO_remove_SOBlock(so_SO *self, int index)
{
	int size = self->num_SOBlock;
	if (index >= size) {
		return 0;
	}
	if (size == 1) {
		free(self->SOBlock);
		self->SOBlock = NULL;
		return 0;
	}
	so_SOBlock *final = self->SOBlock[size - 1];
	so_SOBlock *remove = self->SOBlock[index];
	so_SOBlock **new_array = realloc(self->SOBlock, (self->num_SOBlock - 1) * sizeof(so_SOBlock *));
	if (!new_array) {
		return 1;
	}
	self->num_SOBlock--;
	if (final == remove) {
		return 0;
	}
	for (int i = index; i < size - 3; i++) {
		self->SOBlock[i] = self->SOBlock[i + 1];
	}
	self->SOBlock[size - 2] = final;
	so_SOBlock_unref(remove);
	return 0;
}

int so_SO_xml(so_SO *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->Description || self->PharmMLRef || self->SOBlock || self->id || self->metadataFile) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "SO");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns", BAD_CAST "http://www.pharmml.org/so/0.3/StandardisedOutput");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:xsi", BAD_CAST "http://www.w3.org/2001/XMLSchema-instance");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:ds", BAD_CAST "http://www.pharmml.org/pharmml/0.8/Dataset");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:ct", BAD_CAST "http://www.pharmml.org/pharmml/0.8/CommonTypes");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xmlns:po", BAD_CAST "http://www.pharmml.org/probonto/ProbOnto");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "xsi:schemaLocation", BAD_CAST "http://www.pharmml.org/so/0.3/StandardisedOutput");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "implementedBy", BAD_CAST "MJS");
		if (rc < 0) return 1;
		rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "writtenVersion", BAD_CAST "0.3.1");
		if (rc < 0) return 1;
		if (self->id) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "id", BAD_CAST self->id);
			if (rc < 0) return 1;
		}
		if (self->metadataFile) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "metadataFile", BAD_CAST self->metadataFile);
			if (rc < 0) return 1;
		}
		if (self->Description) {
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "ct:Description", BAD_CAST self->Description);
			if (rc < 0) return 1;
		}
		if (self->PharmMLRef) {
			rc = so_PharmMLRef_xml(self->PharmMLRef, writer);
			if (rc != 0) return rc;
		}
		if (self->SOBlock) {
			for (int i = 0; i < self->num_SOBlock; i++) {
				rc = so_SOBlock_xml(self->SOBlock[i], writer);
				if (rc != 0) return 1;
			}
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_SO_start_element(so_SO *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_PharmMLRef) {
		int fail = so_PharmMLRef_start_element(self->PharmMLRef, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_SOBlock) {
		int fail = so_SOBlock_start_element(self->SOBlock[self->num_SOBlock - 1], localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "Description") == 0) {
		self->in_Description = 1;
	} else if (strcmp(localname, "PharmMLRef") == 0) {
		so_PharmMLRef *PharmMLRef = so_PharmMLRef_new();
		if (!PharmMLRef) {
			return 1;
		}
		int fail = so_PharmMLRef_init_attributes(PharmMLRef, nb_attributes, attributes);
		if (fail) {
			so_PharmMLRef_free(PharmMLRef);
			return 1;
		}
		so_SO_set_PharmMLRef(self, PharmMLRef);
		self->in_PharmMLRef = 1;
	} else if (strcmp(localname, "SOBlock") == 0) {
		so_SOBlock *SOBlock = so_SOBlock_new();
		if (!SOBlock) {
			return 1;
		}
		int fail = so_SOBlock_init_attributes(SOBlock, nb_attributes, attributes);
		if (fail) {
			so_SOBlock_free(SOBlock);
			return 1;
		}
		fail = so_SO_add_SOBlock(self, SOBlock);
		if (fail) {
			so_SOBlock_free(SOBlock);
			return 1;
		}
		self->in_SOBlock = 1;
	}
	return 0;
}

void so_SO_end_element(so_SO *self, const char *localname)
{
	if (strcmp(localname, "Description") == 0 && self->in_Description) {
		self->in_Description = 0;
	} else if (strcmp(localname, "PharmMLRef") == 0 && self->in_PharmMLRef) {
		self->in_PharmMLRef = 0;
	} else if (strcmp(localname, "SOBlock") == 0 && self->in_SOBlock) {
		self->in_SOBlock = 0;
	} else if (self->in_PharmMLRef) {
		so_PharmMLRef_end_element(self->PharmMLRef, localname);
	} else if (self->in_SOBlock) {
		so_SOBlock_end_element(self->SOBlock[self->num_SOBlock - 1], localname);
	}
}

int so_SO_characters(so_SO *self, const char *ch, int len)
{
	if (self->in_Description) {
		self->Description = pharmml_strndup(ch, len);
		if (!self->Description) {
			return 1;
		}
	} else if (self->in_PharmMLRef) {
		int fail = so_PharmMLRef_characters(self->PharmMLRef, ch, len);
		if (fail) return 1;
	} else if (self->in_SOBlock) {
		int fail = so_SOBlock_characters(self->SOBlock[self->num_SOBlock - 1], ch, len);
		if (fail) return 1;
	}
	return 0;
}

int so_SO_init_attributes(so_SO *self, int nb_attributes, const char **attributes)
{
	unsigned int index = 0;
	for (int i = 0; i < nb_attributes; i++, index += 5) {
		const char *localname = attributes[index];
		const char *valueBegin = attributes[index + 3];
		const char *valueEnd = attributes[index + 4];

		if (strcmp(localname, "id") == 0) {
			self->id = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->id) {
				return 1;
			}
		} else if (strcmp(localname, "metadataFile") == 0) {
			self->metadataFile = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->metadataFile) {
				return 1;
			}
		}
	}
	return 0;
}
