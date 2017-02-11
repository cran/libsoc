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
#include <so/SOBlock.h>
#include <so/private/SOBlock.h>

so_SOBlock *so_SOBlock_new()
{
	so_SOBlock *object = calloc(sizeof(so_SOBlock), 1);
	if (object) {
		object->reference_count = 1;
	}

	return object;
}

so_SOBlock *so_SOBlock_copy(so_SOBlock *self)
{
	so_SOBlock *dest = so_SOBlock_new();
	if (dest) {
		if (self->blkId) {
			dest->blkId = pharmml_strdup(self->blkId);
			if (!dest->blkId) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
		if (self->ToolSettings) {
			dest->ToolSettings = so_ToolSettings_copy(self->ToolSettings);
			if (!dest->ToolSettings) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
		if (self->RawResults) {
			dest->RawResults = so_RawResults_copy(self->RawResults);
			if (!dest->RawResults) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
		if (self->TaskInformation) {
			dest->TaskInformation = so_TaskInformation_copy(self->TaskInformation);
			if (!dest->TaskInformation) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
		if (self->Estimation) {
			dest->Estimation = so_Estimation_copy(self->Estimation);
			if (!dest->Estimation) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
		if (self->Simulation) {
			dest->Simulation = so_Simulation_copy(self->Simulation);
			if (!dest->Simulation) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
		if (self->ModelDiagnostic) {
			dest->ModelDiagnostic = so_ModelDiagnostic_copy(self->ModelDiagnostic);
			if (!dest->ModelDiagnostic) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
		if (self->OptimalDesign) {
			dest->OptimalDesign = so_OptimalDesign_copy(self->OptimalDesign);
			if (!dest->OptimalDesign) {
				so_SOBlock_free(dest);
				return NULL;
			}
		}
	}

	return dest;
}

void so_SOBlock_free(so_SOBlock *self)
{
	if (self) {
		so_ToolSettings_unref(self->ToolSettings);
		so_RawResults_unref(self->RawResults);
		so_TaskInformation_unref(self->TaskInformation);
		so_Estimation_unref(self->Estimation);
		so_Simulation_unref(self->Simulation);
		so_ModelDiagnostic_unref(self->ModelDiagnostic);
		so_OptimalDesign_unref(self->OptimalDesign);
		if (self->blkId) free(self->blkId);
		free(self);
	}
}

void so_SOBlock_ref(so_SOBlock *self)
{
	self->reference_count++;
}

void so_SOBlock_unref(so_SOBlock *self)
{
	if (self) {
		self->reference_count--;
		if (!self->reference_count) {
			so_SOBlock_free(self);
		}
	}
}

char *so_SOBlock_get_blkId(so_SOBlock *self)
{
	return self->blkId;
}

so_ToolSettings *so_SOBlock_get_ToolSettings(so_SOBlock *self)
{
	return self->ToolSettings;
}

so_RawResults *so_SOBlock_get_RawResults(so_SOBlock *self)
{
	return self->RawResults;
}

so_TaskInformation *so_SOBlock_get_TaskInformation(so_SOBlock *self)
{
	return self->TaskInformation;
}

so_Estimation *so_SOBlock_get_Estimation(so_SOBlock *self)
{
	return self->Estimation;
}

so_Simulation *so_SOBlock_get_Simulation(so_SOBlock *self)
{
	return self->Simulation;
}

so_ModelDiagnostic *so_SOBlock_get_ModelDiagnostic(so_SOBlock *self)
{
	return self->ModelDiagnostic;
}

so_OptimalDesign *so_SOBlock_get_OptimalDesign(so_SOBlock *self)
{
	return self->OptimalDesign;
}

int so_SOBlock_set_blkId(so_SOBlock *self, char *value)
{
	if (!value) {
		self->blkId = value;
		return 0;
	}
	char *new_value = pharmml_strdup(value);
	if (new_value) {
		free(self->blkId);
		self->blkId = new_value;
		return 0;
	} else {
		return 1;
	}
}

void so_SOBlock_set_ToolSettings(so_SOBlock *self, so_ToolSettings *value)
{
	so_ToolSettings_unref(self->ToolSettings);
	self->ToolSettings = value;
}

void so_SOBlock_set_RawResults(so_SOBlock *self, so_RawResults *value)
{
	so_RawResults_unref(self->RawResults);
	self->RawResults = value;
}

void so_SOBlock_set_TaskInformation(so_SOBlock *self, so_TaskInformation *value)
{
	so_TaskInformation_unref(self->TaskInformation);
	self->TaskInformation = value;
}

void so_SOBlock_set_Estimation(so_SOBlock *self, so_Estimation *value)
{
	so_Estimation_unref(self->Estimation);
	self->Estimation = value;
}

void so_SOBlock_set_Simulation(so_SOBlock *self, so_Simulation *value)
{
	so_Simulation_unref(self->Simulation);
	self->Simulation = value;
}

void so_SOBlock_set_ModelDiagnostic(so_SOBlock *self, so_ModelDiagnostic *value)
{
	so_ModelDiagnostic_unref(self->ModelDiagnostic);
	self->ModelDiagnostic = value;
}

void so_SOBlock_set_OptimalDesign(so_SOBlock *self, so_OptimalDesign *value)
{
	so_OptimalDesign_unref(self->OptimalDesign);
	self->OptimalDesign = value;
}

so_ToolSettings *so_SOBlock_create_ToolSettings(so_SOBlock *self)
{
	so_ToolSettings *obj = so_ToolSettings_new();
	if (obj) {
		self->ToolSettings = obj;
	}
	return obj;
}

so_RawResults *so_SOBlock_create_RawResults(so_SOBlock *self)
{
	so_RawResults *obj = so_RawResults_new();
	if (obj) {
		self->RawResults = obj;
	}
	return obj;
}

so_TaskInformation *so_SOBlock_create_TaskInformation(so_SOBlock *self)
{
	so_TaskInformation *obj = so_TaskInformation_new();
	if (obj) {
		self->TaskInformation = obj;
	}
	return obj;
}

so_Estimation *so_SOBlock_create_Estimation(so_SOBlock *self)
{
	so_Estimation *obj = so_Estimation_new();
	if (obj) {
		self->Estimation = obj;
	}
	return obj;
}

so_Simulation *so_SOBlock_create_Simulation(so_SOBlock *self)
{
	so_Simulation *obj = so_Simulation_new();
	if (obj) {
		self->Simulation = obj;
	}
	return obj;
}

so_ModelDiagnostic *so_SOBlock_create_ModelDiagnostic(so_SOBlock *self)
{
	so_ModelDiagnostic *obj = so_ModelDiagnostic_new();
	if (obj) {
		self->ModelDiagnostic = obj;
	}
	return obj;
}

so_OptimalDesign *so_SOBlock_create_OptimalDesign(so_SOBlock *self)
{
	so_OptimalDesign *obj = so_OptimalDesign_new();
	if (obj) {
		self->OptimalDesign = obj;
	}
	return obj;
}

int so_SOBlock_xml(so_SOBlock *self, xmlTextWriterPtr writer)
{
	int rc;
	if (self->ToolSettings || self->RawResults || self->TaskInformation || self->Estimation || self->Simulation || self->ModelDiagnostic || self->OptimalDesign || self->blkId) {
		rc = xmlTextWriterStartElement(writer, BAD_CAST "SOBlock");
		if (rc < 0) return 1;
		if (self->blkId) {
			rc = xmlTextWriterWriteAttribute(writer, BAD_CAST "blkId", BAD_CAST self->blkId);
			if (rc < 0) return 1;
		}
		if (self->ToolSettings) {
			rc = so_ToolSettings_xml(self->ToolSettings, writer);
			if (rc != 0) return rc;
		}
		if (self->RawResults) {
			rc = so_RawResults_xml(self->RawResults, writer);
			if (rc != 0) return rc;
		}
		if (self->TaskInformation) {
			rc = so_TaskInformation_xml(self->TaskInformation, writer);
			if (rc != 0) return rc;
		}
		if (self->Estimation) {
			rc = so_Estimation_xml(self->Estimation, writer);
			if (rc != 0) return rc;
		}
		if (self->Simulation) {
			rc = so_Simulation_xml(self->Simulation, writer);
			if (rc != 0) return rc;
		}
		if (self->ModelDiagnostic) {
			rc = so_ModelDiagnostic_xml(self->ModelDiagnostic, writer);
			if (rc != 0) return rc;
		}
		if (self->OptimalDesign) {
			rc = so_OptimalDesign_xml(self->OptimalDesign, writer);
			if (rc != 0) return rc;
		}
		rc = xmlTextWriterEndElement(writer);
		if (rc < 0) return 1;
	}
	return 0;
}

int so_SOBlock_start_element(so_SOBlock *self, const char *localname, int nb_attributes, const char **attributes)
{
	if (self->in_ToolSettings) {
		int fail = so_ToolSettings_start_element(self->ToolSettings, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_RawResults) {
		int fail = so_RawResults_start_element(self->RawResults, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_TaskInformation) {
		int fail = so_TaskInformation_start_element(self->TaskInformation, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_Estimation) {
		int fail = so_Estimation_start_element(self->Estimation, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_Simulation) {
		int fail = so_Simulation_start_element(self->Simulation, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_ModelDiagnostic) {
		int fail = so_ModelDiagnostic_start_element(self->ModelDiagnostic, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (self->in_OptimalDesign) {
		int fail = so_OptimalDesign_start_element(self->OptimalDesign, localname, nb_attributes, attributes);
		if (fail) {
			return fail;
		}
	} else if (strcmp(localname, "ToolSettings") == 0) {
		so_ToolSettings *ToolSettings = so_SOBlock_create_ToolSettings(self);
		if (!ToolSettings) {
			return 1;
		}
		self->in_ToolSettings = 1;
	} else if (strcmp(localname, "RawResults") == 0) {
		so_RawResults *RawResults = so_SOBlock_create_RawResults(self);
		if (!RawResults) {
			return 1;
		}
		self->in_RawResults = 1;
	} else if (strcmp(localname, "TaskInformation") == 0) {
		so_TaskInformation *TaskInformation = so_SOBlock_create_TaskInformation(self);
		if (!TaskInformation) {
			return 1;
		}
		self->in_TaskInformation = 1;
	} else if (strcmp(localname, "Estimation") == 0) {
		so_Estimation *Estimation = so_SOBlock_create_Estimation(self);
		if (!Estimation) {
			return 1;
		}
		self->in_Estimation = 1;
	} else if (strcmp(localname, "Simulation") == 0) {
		so_Simulation *Simulation = so_SOBlock_create_Simulation(self);
		if (!Simulation) {
			return 1;
		}
		self->in_Simulation = 1;
	} else if (strcmp(localname, "ModelDiagnostic") == 0) {
		so_ModelDiagnostic *ModelDiagnostic = so_SOBlock_create_ModelDiagnostic(self);
		if (!ModelDiagnostic) {
			return 1;
		}
		self->in_ModelDiagnostic = 1;
	} else if (strcmp(localname, "OptimalDesign") == 0) {
		so_OptimalDesign *OptimalDesign = so_OptimalDesign_new();
		if (!OptimalDesign) {
			return 1;
		}
		int fail = so_OptimalDesign_init_attributes(OptimalDesign, nb_attributes, attributes);
		if (fail) {
			so_OptimalDesign_free(OptimalDesign);
			return 1;
		}
		so_SOBlock_set_OptimalDesign(self, OptimalDesign);
		self->in_OptimalDesign = 1;
	}
	return 0;
}

void so_SOBlock_end_element(so_SOBlock *self, const char *localname)
{
	if (strcmp(localname, "ToolSettings") == 0 && self->in_ToolSettings) {
		self->in_ToolSettings = 0;
	} else if (strcmp(localname, "RawResults") == 0 && self->in_RawResults) {
		self->in_RawResults = 0;
	} else if (strcmp(localname, "TaskInformation") == 0 && self->in_TaskInformation) {
		self->in_TaskInformation = 0;
	} else if (strcmp(localname, "Estimation") == 0 && self->in_Estimation) {
		self->in_Estimation = 0;
	} else if (strcmp(localname, "Simulation") == 0 && self->in_Simulation) {
		self->in_Simulation = 0;
	} else if (strcmp(localname, "ModelDiagnostic") == 0 && self->in_ModelDiagnostic) {
		self->in_ModelDiagnostic = 0;
	} else if (strcmp(localname, "OptimalDesign") == 0 && self->in_OptimalDesign) {
		self->in_OptimalDesign = 0;
	} else if (self->in_ToolSettings) {
		so_ToolSettings_end_element(self->ToolSettings, localname);
	} else if (self->in_RawResults) {
		so_RawResults_end_element(self->RawResults, localname);
	} else if (self->in_TaskInformation) {
		so_TaskInformation_end_element(self->TaskInformation, localname);
	} else if (self->in_Estimation) {
		so_Estimation_end_element(self->Estimation, localname);
	} else if (self->in_Simulation) {
		so_Simulation_end_element(self->Simulation, localname);
	} else if (self->in_ModelDiagnostic) {
		so_ModelDiagnostic_end_element(self->ModelDiagnostic, localname);
	} else if (self->in_OptimalDesign) {
		so_OptimalDesign_end_element(self->OptimalDesign, localname);
	}
}

int so_SOBlock_characters(so_SOBlock *self, const char *ch, int len)
{
	if (self->in_ToolSettings) {
		int fail = so_ToolSettings_characters(self->ToolSettings, ch, len);
		if (fail) return 1;
	} else if (self->in_RawResults) {
		int fail = so_RawResults_characters(self->RawResults, ch, len);
		if (fail) return 1;
	} else if (self->in_TaskInformation) {
		int fail = so_TaskInformation_characters(self->TaskInformation, ch, len);
		if (fail) return 1;
	} else if (self->in_Estimation) {
		int fail = so_Estimation_characters(self->Estimation, ch, len);
		if (fail) return 1;
	} else if (self->in_Simulation) {
		int fail = so_Simulation_characters(self->Simulation, ch, len);
		if (fail) return 1;
	} else if (self->in_ModelDiagnostic) {
		int fail = so_ModelDiagnostic_characters(self->ModelDiagnostic, ch, len);
		if (fail) return 1;
	} else if (self->in_OptimalDesign) {
		int fail = so_OptimalDesign_characters(self->OptimalDesign, ch, len);
		if (fail) return 1;
	}
	return 0;
}

int so_SOBlock_init_attributes(so_SOBlock *self, int nb_attributes, const char **attributes)
{
	unsigned int index = 0;
	for (int i = 0; i < nb_attributes; i++, index += 5) {
		const char *localname = attributes[index];
		const char *valueBegin = attributes[index + 3];
		const char *valueEnd = attributes[index + 4];

		if (strcmp(localname, "blkId") == 0) {
			self->blkId = pharmml_strndup(valueBegin, valueEnd - valueBegin);
			if (!self->blkId) {
				return 1;
			}
		}
	}
	return 0;
}
