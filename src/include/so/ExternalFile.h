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
#ifndef _SO_EXTERNALFILE_H
#define _SO_EXTERNALFILE_H

#include <so/MissingData.h>

/** \struct so_ExternalFile
	 \brief A structure representing an ExternalFile element
*/
typedef struct so_ExternalFile so_ExternalFile;

/** \memberof so_ExternalFile
 * Create a new empty so_ExternalFile structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_ExternalFile_copy, so_ExternalFile_free
 */
so_ExternalFile *so_ExternalFile_new();
/** \memberof so_ExternalFile
 * Create a copy of a so_ExternalFile structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_ExternalFile_new
 */
so_ExternalFile *so_ExternalFile_copy(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Free all memory associated with a so_ExternalFile structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_ExternalFile_new
 */
void so_ExternalFile_free(so_ExternalFile *self);
void so_ExternalFile_ref(so_ExternalFile *self);
void so_ExternalFile_unref(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Get the value of the oid attribute
 * \param self - pointer to a so_ExternalFile
 * \return A pointer to the attribute value
 * \sa so_ExternalFile_set_oid
 */
char *so_ExternalFile_get_oid(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Set the value of the oid attribute
 * \param self - pointer to a so_ExternalFile
 * \param value - A pointer to the attribute value
 * \return 0 for success
 * \sa so_ExternalFile_get_oid
 */
int so_ExternalFile_set_oid(so_ExternalFile *self, char *value);
/** \memberof so_ExternalFile
 * Get the Description element
 * \param self - pointer to a so_ExternalFile
 * \return A pointer to the Description string
 * \sa so_ExternalFile_set_Description
 */
char *so_ExternalFile_get_Description(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Get the path element
 * \param self - pointer to a so_ExternalFile
 * \return A pointer to the path string
 * \sa so_ExternalFile_set_path
 */
char *so_ExternalFile_get_path(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Get the format element
 * \param self - pointer to a so_ExternalFile
 * \return A pointer to the format string
 * \sa so_ExternalFile_set_format
 */
char *so_ExternalFile_get_format(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Get the delimiter element
 * \param self - pointer to a so_ExternalFile
 * \return A pointer to the delimiter string
 * \sa so_ExternalFile_set_delimiter
 */
char *so_ExternalFile_get_delimiter(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Get the MissingData element
 * \param self - pointer to a so_ExternalFile
 * \param number - An index to the specific element
 * \return A pointer to the structure representing the MissingData element
 * \sa so_ExternalFile_set_MissingData
 */
so_MissingData *so_ExternalFile_get_MissingData(so_ExternalFile *self, int number);
/** \memberof so_ExternalFile
 * Get the number of MissingData currently contained in the ExternalFile structure
 * \param self - pointer to a so_ExternalFile
 * \return The number of MissingDatas
 */
int so_ExternalFile_get_number_of_MissingData(so_ExternalFile *self);
/** \memberof so_ExternalFile
 * Set the Description element
 * \param self - pointer to a so_ExternalFile
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_ExternalFile_get_Description
 */
int so_ExternalFile_set_Description(so_ExternalFile *self, char *value);
/** \memberof so_ExternalFile
 * Set the path element
 * \param self - pointer to a so_ExternalFile
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_ExternalFile_get_path
 */
int so_ExternalFile_set_path(so_ExternalFile *self, char *value);
/** \memberof so_ExternalFile
 * Set the format element
 * \param self - pointer to a so_ExternalFile
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_ExternalFile_get_format
 */
int so_ExternalFile_set_format(so_ExternalFile *self, char *value);
/** \memberof so_ExternalFile
 * Set the delimiter element
 * \param self - pointer to a so_ExternalFile
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_ExternalFile_get_delimiter
 */
int so_ExternalFile_set_delimiter(so_ExternalFile *self, char *value);
/** \memberof so_ExternalFile
 * Create a new MissingData element and insert it into the so_ExternalFile
 * \param self - pointer to a so_ExternalFile
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_MissingData *so_ExternalFile_create_MissingData(so_ExternalFile *self);
int so_ExternalFile_add_MissingData(so_ExternalFile *self, so_MissingData *child);
int so_ExternalFile_remove_MissingData(so_ExternalFile *self, int index);

#endif
