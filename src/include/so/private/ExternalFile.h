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
#ifndef _SO_PRIVATE_EXTERNALFILE_H
#define _SO_PRIVATE_EXTERNALFILE_H

#include <libxml/xmlwriter.h>

#include <so/private/MissingData.h>

struct so_ExternalFile {
	char *oid;
	char *Description;
	char *path;
	char *format;
	char *delimiter;
	so_MissingData **MissingData;
	int num_MissingData;
	int in_Description;
	int in_path;
	int in_format;
	int in_delimiter;
	int in_MissingData;
	int reference_count;
};

int so_ExternalFile_start_element(so_ExternalFile *self, const char *localname, int nb_attributes, const char **attributes);
void so_ExternalFile_end_element(so_ExternalFile *self, const char *localname);
int so_ExternalFile_characters(so_ExternalFile *self, const char *ch, int len);
int so_ExternalFile_xml(so_ExternalFile *self, xmlTextWriterPtr writer, char *element_name);
int so_ExternalFile_init_attributes(so_ExternalFile *self, int nb_attributes, const char **attributes);

#endif
