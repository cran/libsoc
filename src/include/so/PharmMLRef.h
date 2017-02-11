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
#ifndef _SO_PHARMMLREF_H
#define _SO_PHARMMLREF_H


/** \struct so_PharmMLRef
	 \brief A structure representing an SO/PharmMLRef element
*/
typedef struct so_PharmMLRef so_PharmMLRef;

/** \memberof so_PharmMLRef
 * Create a new empty so_PharmMLRef structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_PharmMLRef_copy, so_PharmMLRef_free
 */
so_PharmMLRef *so_PharmMLRef_new();
/** \memberof so_PharmMLRef
 * Create a copy of a so_PharmMLRef structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_PharmMLRef_new
 */
so_PharmMLRef *so_PharmMLRef_copy(so_PharmMLRef *self);
/** \memberof so_PharmMLRef
 * Free all memory associated with a so_PharmMLRef structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_PharmMLRef_new
 */
void so_PharmMLRef_free(so_PharmMLRef *self);
void so_PharmMLRef_ref(so_PharmMLRef *self);
void so_PharmMLRef_unref(so_PharmMLRef *self);
/** \memberof so_PharmMLRef
 * Get the value of the name attribute
 * \param self - pointer to a so_PharmMLRef
 * \return A pointer to the attribute value
 * \sa so_PharmMLRef_set_name
 */
char *so_PharmMLRef_get_name(so_PharmMLRef *self);
/** \memberof so_PharmMLRef
 * Set the value of the name attribute
 * \param self - pointer to a so_PharmMLRef
 * \param value - A pointer to the attribute value
 * \return 0 for success
 * \sa so_PharmMLRef_get_name
 */
int so_PharmMLRef_set_name(so_PharmMLRef *self, char *value);
/** \memberof so_PharmMLRef
 * Get the value of the id attribute
 * \param self - pointer to a so_PharmMLRef
 * \return A pointer to the attribute value
 * \sa so_PharmMLRef_set_id
 */
char *so_PharmMLRef_get_id(so_PharmMLRef *self);
/** \memberof so_PharmMLRef
 * Set the value of the id attribute
 * \param self - pointer to a so_PharmMLRef
 * \param value - A pointer to the attribute value
 * \return 0 for success
 * \sa so_PharmMLRef_get_id
 */
int so_PharmMLRef_set_id(so_PharmMLRef *self, char *value);
/** \memberof so_PharmMLRef
 * Get the Description element
 * \param self - pointer to a so_PharmMLRef
 * \return A pointer to the Description string
 * \sa so_PharmMLRef_set_Description
 */
char *so_PharmMLRef_get_Description(so_PharmMLRef *self);
/** \memberof so_PharmMLRef
 * Set the Description element
 * \param self - pointer to a so_PharmMLRef
 * \param value - A pointer to a \a string to set.
 * \return 0 for success
 * \sa so_PharmMLRef_get_Description
 */
int so_PharmMLRef_set_Description(so_PharmMLRef *self, char *value);

#endif
