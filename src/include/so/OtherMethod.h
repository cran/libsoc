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
#ifndef _SO_OTHERMETHOD_H
#define _SO_OTHERMETHOD_H

#include <so/Table.h>

/** \struct so_OtherMethod
	 \brief A structure representing an SO/SOBlock/Estimation/PopulationEstimates/OtherMethod element
*/
typedef struct so_OtherMethod so_OtherMethod;

/** \memberof so_OtherMethod
 * Create a new empty so_OtherMethod structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_OtherMethod_copy, so_OtherMethod_free
 */
so_OtherMethod *so_OtherMethod_new();
/** \memberof so_OtherMethod
 * Create a copy of a so_OtherMethod structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_OtherMethod_new
 */
so_OtherMethod *so_OtherMethod_copy(so_OtherMethod *self);
/** \memberof so_OtherMethod
 * Free all memory associated with a so_OtherMethod structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_OtherMethod_new
 */
void so_OtherMethod_free(so_OtherMethod *self);
void so_OtherMethod_ref(so_OtherMethod *self);
void so_OtherMethod_unref(so_OtherMethod *self);
/** \memberof so_OtherMethod
 * Get the value of the method attribute
 * \param self - pointer to a so_OtherMethod
 * \return A pointer to the attribute value
 * \sa so_OtherMethod_set_method
 */
char *so_OtherMethod_get_method(so_OtherMethod *self);
/** \memberof so_OtherMethod
 * Set the value of the method attribute
 * \param self - pointer to a so_OtherMethod
 * \param value - A pointer to the attribute value
 * \return 0 for success
 * \sa so_OtherMethod_get_method
 */
int so_OtherMethod_set_method(so_OtherMethod *self, char *value);
/** \memberof so_OtherMethod
 * Get the Mean element
 * \param self - pointer to a so_OtherMethod
 * \return A pointer to the structure representing the Mean element
 * \sa so_OtherMethod_set_Mean
 */
so_Table *so_OtherMethod_get_Mean(so_OtherMethod *self);
/** \memberof so_OtherMethod
 * Get the Median element
 * \param self - pointer to a so_OtherMethod
 * \return A pointer to the structure representing the Median element
 * \sa so_OtherMethod_set_Median
 */
so_Table *so_OtherMethod_get_Median(so_OtherMethod *self);
/** \memberof so_OtherMethod
 * Set the Mean element
 * \param self - pointer to a so_OtherMethod
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_OtherMethod_get_Mean
 */
void so_OtherMethod_set_Mean(so_OtherMethod *self, so_Table *value);
/** \memberof so_OtherMethod
 * Set the Median element
 * \param self - pointer to a so_OtherMethod
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_OtherMethod_get_Median
 */
void so_OtherMethod_set_Median(so_OtherMethod *self, so_Table *value);
/** \memberof so_OtherMethod
 * Create a new Mean element and insert it into the so_OtherMethod
 * \param self - pointer to a so_OtherMethod
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_OtherMethod_create_Mean(so_OtherMethod *self);
/** \memberof so_OtherMethod
 * Create a new Median element and insert it into the so_OtherMethod
 * \param self - pointer to a so_OtherMethod
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_OtherMethod_create_Median(so_OtherMethod *self);

#endif