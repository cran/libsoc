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
#include <so/TargetToolMessages.h>
#include <so/private/TargetToolMessages.h>

so_TargetToolMessages *so_TargetToolMessages_new()
{
	so_TargetToolMessages *object = calloc(sizeof(so_TargetToolMessages), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_TargetToolMessages *so_TargetToolMessages_copy(so_TargetToolMessages *self)
{
	so_TargetToolMessages *dest = so_TargetToolMessages_new();
	if (dest) {
		if (self->Termination) {
			dest->Termination = pharmml_strdup(self->Termination);
			if (!dest->Termination) {
				so_TargetToolMessages_free(dest);
				return NULL;
			}
		}
		if (self->Warnings) {
			dest->Warnings = pharmml_strdup(self->Warnings);
			if (!dest->Warnings) {
				so_TargetToolMessages_free(dest);
				return NULL;
			}
		}
		if (self->Errors) {
			dest->Errors = pharmml_strdup(self->Errors);
			if (!dest->Errors) {
				so_TargetToolMessages_free(dest);
				return NULL;
			}
		}
		if (self->ElapsedTime) {
			dest->ElapsedTime_number = self->ElapsedTime_number;
			dest->ElapsedTime = &(dest->ElapsedTime_number);
		}
		if (self->OutputFilePath) {
			dest->OutputFilePath = so_ExternalFile_copy(self->OutputFilePath);
			if (!dest->OutputFilePath) {
				so_TargetToolMessages_free(dest);
				return NULL;
			}
		}
		if (self->ChainsNumber) {
			dest->ChainsNumber_number = self->ChainsNumber_number;
			dest->ChainsNumber = &(dest->ChainsNumber_number);
		}
		if (self->IterationNumber) {
			dest->IterationNumber_number = self->IterationNumber_number;
			dest->IterationNumber = &(dest->IterationNumber_number);
		}
	}

	return dest;
}

void so_TargetToolMessages_free(so_TargetToolMessages *self)
{
	if (self) {
		free(self->Termination);
		free(self->Warnings);
		free(self->Errors);
		so_ExternalFile_unref(self->OutputFilePath);
		free(self);
	}
}

void so_TargetToolMessages_ref(so_TargetToolMessages *self)
{
	self->reference_count++;
}

void so_TargetToolMessages_unref(so_TargetToolMessages *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_TargetToolMessages_free(self);
		}
	}
}

char *so_TargetToolMessages_get_Termination(so_TargetToolMessages *self)
{
	return self->Termination;
}

char *so_TargetToolMessages_get_Warnings(so_TargetToolMessages *self)
{
	return self->Warnings;
}

char *so_TargetToolMessages_get_Errors(so_TargetToolMessages *self)
{
	return self->Errors;
}

double *so_TargetToolMessages_get_ElapsedTime(so_TargetToolMessages *self)
{
	return self->ElapsedTime;
}

so_ExternalFile *so_TargetToolMessages_get_OutputFilePath(so_TargetToolMessages *self)
{
	return self->OutputFilePath;
}

double *so_TargetToolMessages_get_ChainsNumber(so_TargetToolMessages *self)
{
	return self->ChainsNumber;
}

double *so_TargetToolMessages_get_IterationNumber(so_TargetToolMessages *self)
{
	return self->IterationNumber;
}

int so_TargetToolMessages_set_Termination(so_TargetToolMessages *self, char *value)
{
	if (!value) {
		self->Termination = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->Termination);
		self->Termination = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_TargetToolMessages_set_Warnings(so_TargetToolMessages *self, char *value)
{
	if (!value) {
		self->Warnings = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->Warnings);
		self->Warnings = new_value;
		return 0;
	} else {
		return 1;
	}
}

int so_TargetToolMessages_set_Errors(so_TargetToolMessages *self, char *value)
{
	if (!value) {
		self->Errors = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->Errors);
		self->Errors = new_value;
		return 0;
	} else {
		return 1;
	}
}

void so_TargetToolMessages_set_ElapsedTime(so_TargetToolMessages *self, double *value)
{
	if (value) {
		self->ElapsedTime_number = *value;
		self->ElapsedTime = &(self->ElapsedTime_number);
	} else {
		self->ElapsedTime = value;
	}
}

void so_TargetToolMessages_set_OutputFilePath(so_TargetToolMessages *self, so_ExternalFile *value)
{
	so_ExternalFile_unref(self->OutputFilePath);
	self->OutputFilePath = value;
}

void so_TargetToolMessages_set_ChainsNumber(so_TargetToolMessages *self, double *value)
{
	if (value) {
		self->ChainsNumber_number = *value;
		self->ChainsNumber = &(self->ChainsNumber_number);
	} else {
		self->ChainsNumber = value;
	}
}

void so_TargetToolMessages_set_IterationNumber(so_TargetToolMessages *self, double *value)
{
	if (value) {
		self->IterationNumber_number = *value;
		self->IterationNumber = &(self->IterationNumber_number);
	} else {
		self->IterationNumber = value;
	}
}

so_ExternalFile *so_TargetToolMessages_create_OutputFilePath(so_TargetToolMessages *self)
{
	so_ExternalFile *obj = so_ExternalFile_new("OutputFilePath");
	if (obj) {
		self->OutputFilePath = obj;
	}
	return obj;
}

int so_TargetToolMessages_xml(so_TargetToolMessages *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->Termination || self->Warnings || self->Errors || self->ElapsedTime || self->OutputFilePath || self->ChainsNumber || self->IterationNumber) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "TargetToolMessages");
		if (rc < 0) return 1;
		if (self->Termination) {
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "Termination", BAD_CAST self->Termination);
			if (rc < 0) return 1;
		}
		if (self->Warnings) {
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "Warnings", BAD_CAST self->Warnings);
			if (rc < 0) return 1;
		}
		if (self->Errors) {
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "Errors", BAD_CAST self->Errors);
			if (rc < 0) return 1;
		}
		if (self->ElapsedTime) {
			char *number_string = pharmml_double_to_string(self->ElapsedTime_number);
			if (!number_string) return 1;
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "ElapsedTime", BAD_CAST number_string);
			free(number_string);
			if (rc < 0) return 1;
		}
		if (self->OutputFilePath) {
			rc = so_ExternalFile_xml(self->OutputFilePath, writer, "OutputFilePath");
			if (rc != 0) return rc;
		}
		if (self->ChainsNumber) {
			char *number_string = pharmml_double_to_string(self->ChainsNumber_number);
			if (!number_string) return 1;
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "ChainsNumber", BAD_CAST number_string);
			free(number_string);
			if (rc < 0) return 1;
		}
		if (self->IterationNumber) {
			char *number_string = pharmml_double_to_string(self->IterationNumber_number);
			if (!number_string) return 1;
			rc = xmlTextWriterWriteElement(writer, BAD_CAST "IterationNumber", BAD_CAST number_string);
			free(number_string);
			if (rc < 0) return 1;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_TargetToolMessages_start_element(so_TargetToolMessages *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_OutputFilePath) {
		int fail = so_ExternalFile_start_element(self->OutputFilePath, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "Termination") == 0) {
		self->in_Termination = 1;
	} else if (strcmp(localname, "Warnings") == 0) {
		self->in_Warnings = 1;
	} else if (strcmp(localname, "Errors") == 0) {
		self->in_Errors = 1;
	} else if (strcmp(localname, "ElapsedTime") == 0) {
		self->in_ElapsedTime = 1;
	} else if (strcmp(localname, "OutputFilePath") == 0) {
		so_ExternalFile *OutputFilePath = so_ExternalFile_new("OutputFilePath");
		if (!OutputFilePath) {
			return 1;
		}
		int fail = so_ExternalFile_init_attributes(OutputFilePath, nb_attributes, attributes);
		if (fail) {
			so_ExternalFile_free(OutputFilePath);
			return 1;
		}
		so_TargetToolMessages_set_OutputFilePath(self, OutputFilePath);
		self->in_OutputFilePath = 1;
	} else if (strcmp(localname, "ChainsNumber") == 0) {
		self->in_ChainsNumber = 1;
	} else if (strcmp(localname, "IterationNumber") == 0) {
		self->in_IterationNumber = 1;
	}
	return 0;
}

void so_TargetToolMessages_end_element(so_TargetToolMessages *self, const char *localname)
{
	if (strcmp(localname, "Termination") == 0 && self->in_Termination) {
		self->in_Termination = 0;
	} else if (strcmp(localname, "Warnings") == 0 && self->in_Warnings) {
		self->in_Warnings = 0;
	} else if (strcmp(localname, "Errors") == 0 && self->in_Errors) {
		self->in_Errors = 0;
	} else if (strcmp(localname, "ElapsedTime") == 0 && self->in_ElapsedTime) {
		self->in_ElapsedTime = 0;
	} else if (strcmp(localname, "OutputFilePath") == 0 && self->in_OutputFilePath) {
		self->in_OutputFilePath = 0;
	} else if (strcmp(localname, "ChainsNumber") == 0 && self->in_ChainsNumber) {
		self->in_ChainsNumber = 0;
	} else if (strcmp(localname, "IterationNumber") == 0 && self->in_IterationNumber) {
		self->in_IterationNumber = 0;
	} else if (self->in_OutputFilePath) {
		so_ExternalFile_end_element(self->OutputFilePath, localname);
	}
}

int so_TargetToolMessages_characters(so_TargetToolMessages *self, const char *ch, int len)
{
	if (self->in_Termination) {
		self->Termination = pharmml_strndup(ch, len);
		if (!self->Termination) {
			return 1;
		}
	} else if (self->in_Warnings) {
		self->Warnings = pharmml_strndup(ch, len);
		if (!self->Warnings) {
			return 1;
		}
	} else if (self->in_Errors) {
		self->Errors = pharmml_strndup(ch, len);
		if (!self->Errors) {
			return 1;
		}
	} else if (self->in_ElapsedTime) {
		self->ElapsedTime_number = pharmml_string_to_double(ch);
		self->ElapsedTime = &(self->ElapsedTime_number);
	} else if (self->in_OutputFilePath) {
		int fail = so_ExternalFile_characters(self->OutputFilePath, ch, len);
		if (fail) return 1;
	} else if (self->in_ChainsNumber) {
		self->ChainsNumber_number = pharmml_string_to_double(ch);
		self->ChainsNumber = &(self->ChainsNumber_number);
	} else if (self->in_IterationNumber) {
		self->IterationNumber_number = pharmml_string_to_double(ch);
		self->IterationNumber = &(self->IterationNumber_number);
	}
	return 0;
}