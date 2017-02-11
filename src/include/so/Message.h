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
#ifndef _SO_MESSAGE_H
#define _SO_MESSAGE_H


/** \struct so_Message
	 \brief A structure representing an SO/SOBlock/TaskInformation/Message element
*/
typedef struct so_Message so_Message;

/** \memberof so_Message
 * Create a new empty so_Message structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_Message_copy, so_Message_free
 */
so_Message *so_Message_new();
/** \memberof so_Message
 * Create a copy of a so_Message structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_Message_new
 */
so_Message *so_Message_copy(so_Message *self);
/** \memberof so_Message
 * Free all memory associated with a so_Message structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_Message_new
 */
void so_Message_free(so_Message *self);
void so_Message_ref(so_Message *self);
void so_Message_unref(so_Message *self);
/** \memberof so_Message
 * Get the value of the type attribute
 * \param self - pointer to a so_Message
 * \return A pointer to the attribute value
 * \sa so_Message_set_type
 */
char *so_Message_get_type(so_Message *self);
/** \memberof so_Message
 * Set the value of the type attribute
 * \param self - pointer to a so_Message
 * \param value - A pointer to the attribute value
 * \return 0 for success
 * \sa so_Message_get_type
 */
int so_Message_set_type(so_Message *self, char *value);
/** \memberof so_Message
 * Get the Toolname element
 * \param self - pointer to a so_Message
 * \return A pointer to the Toolname string
 * \sa so_Message_set_Toolname
 */
char *so_Message_get_Toolname(so_Message *self);
/** \memberof so_Message
 * Get the Name element
 * \param self - pointer to a so_Message
 * \return A pointer to the Name string
 * \sa so_Message_set_Name
 */
char *so_Message_get_Name(so_Message *self);
/** \memberof so_Message
 * Get the Content element
 * \param self - pointer to a so_Message
 * \return A pointer to the Content string
 * \sa so_Message_set_Content
 */
char *so_Message_get_Content(so_Message *self);
/** \memberof so_Message
 * Get the Severity element
 * \param self - pointer to a so_Message
 * \return A pointer to the value of Severity or NULL if no value is present.
 * \sa so_Message_set_Severity
 */
int *so_Message_get_Severity(so_Message *self);
/** \memberof so_Message
 * Set the Toolname element
 * \param self - pointer to a so_Message
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_Message_get_Toolname
 */
int so_Message_set_Toolname(so_Message *self, char *value);
/** \memberof so_Message
 * Set the Name element
 * \param self - pointer to a so_Message
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_Message_get_Name
 */
int so_Message_set_Name(so_Message *self, char *value);
/** \memberof so_Message
 * Set the Content element
 * \param self - pointer to a so_Message
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_Message_get_Content
 */
int so_Message_set_Content(so_Message *self, char *value);
/** \memberof so_Message
 * Set the Severity element
 * \param self - pointer to a so_Message
 * \param value - A pointer to the value to set or NULL to not include this element.
 * \sa so_Message_get_Severity
 */
void so_Message_set_Severity(so_Message *self, int *value);

#endif