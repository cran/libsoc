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
#ifndef _SO_MLE_H
#define _SO_MLE_H

#include <so/Matrix.h>
#include <so/Table.h>

/** \struct so_MLE
	 \brief A structure representing an SO/SOBlock/Estimation/PrecisionPopulationEstimates/MLE element
*/
typedef struct so_MLE so_MLE;

/** \memberof so_MLE
 * Create a new empty so_MLE structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_MLE_copy, so_MLE_free
 */
so_MLE *so_MLE_new();
/** \memberof so_MLE
 * Create a copy of a so_MLE structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_MLE_new
 */
so_MLE *so_MLE_copy(so_MLE *self);
/** \memberof so_MLE
 * Free all memory associated with a so_MLE structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_MLE_new
 */
void so_MLE_free(so_MLE *self);
void so_MLE_ref(so_MLE *self);
void so_MLE_unref(so_MLE *self);
/** \memberof so_MLE
 * Get the FIM element
 * \param self - pointer to a so_MLE
 * \return A pointer to the structure representing the FIM element
 * \sa so_MLE_set_FIM
 */
so_Matrix *so_MLE_get_FIM(so_MLE *self);
/** \memberof so_MLE
 * Get the CovarianceMatrix element
 * \param self - pointer to a so_MLE
 * \return A pointer to the structure representing the CovarianceMatrix element
 * \sa so_MLE_set_CovarianceMatrix
 */
so_Matrix *so_MLE_get_CovarianceMatrix(so_MLE *self);
/** \memberof so_MLE
 * Get the CorrelationMatrix element
 * \param self - pointer to a so_MLE
 * \return A pointer to the structure representing the CorrelationMatrix element
 * \sa so_MLE_set_CorrelationMatrix
 */
so_Matrix *so_MLE_get_CorrelationMatrix(so_MLE *self);
/** \memberof so_MLE
 * Get the StandardError element
 * \param self - pointer to a so_MLE
 * \return A pointer to the structure representing the StandardError element
 * \sa so_MLE_set_StandardError
 */
so_Table *so_MLE_get_StandardError(so_MLE *self);
/** \memberof so_MLE
 * Get the RelativeStandardError element
 * \param self - pointer to a so_MLE
 * \return A pointer to the structure representing the RelativeStandardError element
 * \sa so_MLE_set_RelativeStandardError
 */
so_Table *so_MLE_get_RelativeStandardError(so_MLE *self);
/** \memberof so_MLE
 * Get the AsymptoticCI element
 * \param self - pointer to a so_MLE
 * \return A pointer to the structure representing the AsymptoticCI element
 * \sa so_MLE_set_AsymptoticCI
 */
so_Table *so_MLE_get_AsymptoticCI(so_MLE *self);
/** \memberof so_MLE
 * Get the ConditionNumber element
 * \param self - pointer to a so_MLE
 * \return A pointer to the value of ConditionNumber or NULL if no value is present.
 * \sa so_MLE_set_ConditionNumber
 */
double *so_MLE_get_ConditionNumber(so_MLE *self);
/** \memberof so_MLE
 * Set the FIM element
 * \param self - pointer to a so_MLE
 * \param value - A pointer to a \a so_Matrix to set.
 * \sa so_MLE_get_FIM
 */
void so_MLE_set_FIM(so_MLE *self, so_Matrix *value);
/** \memberof so_MLE
 * Set the CovarianceMatrix element
 * \param self - pointer to a so_MLE
 * \param value - A pointer to a \a so_Matrix to set.
 * \sa so_MLE_get_CovarianceMatrix
 */
void so_MLE_set_CovarianceMatrix(so_MLE *self, so_Matrix *value);
/** \memberof so_MLE
 * Set the CorrelationMatrix element
 * \param self - pointer to a so_MLE
 * \param value - A pointer to a \a so_Matrix to set.
 * \sa so_MLE_get_CorrelationMatrix
 */
void so_MLE_set_CorrelationMatrix(so_MLE *self, so_Matrix *value);
/** \memberof so_MLE
 * Set the StandardError element
 * \param self - pointer to a so_MLE
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_MLE_get_StandardError
 */
void so_MLE_set_StandardError(so_MLE *self, so_Table *value);
/** \memberof so_MLE
 * Set the RelativeStandardError element
 * \param self - pointer to a so_MLE
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_MLE_get_RelativeStandardError
 */
void so_MLE_set_RelativeStandardError(so_MLE *self, so_Table *value);
/** \memberof so_MLE
 * Set the AsymptoticCI element
 * \param self - pointer to a so_MLE
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_MLE_get_AsymptoticCI
 */
void so_MLE_set_AsymptoticCI(so_MLE *self, so_Table *value);
/** \memberof so_MLE
 * Set the ConditionNumber element
 * \param self - pointer to a so_MLE
 * \param value - A pointer to the value to set or NULL to not include this element.
 * \sa so_MLE_get_ConditionNumber
 */
void so_MLE_set_ConditionNumber(so_MLE *self, double *value);
/** \memberof so_MLE
 * Create a new FIM element and insert it into the so_MLE
 * \param self - pointer to a so_MLE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Matrix *so_MLE_create_FIM(so_MLE *self);
/** \memberof so_MLE
 * Create a new CovarianceMatrix element and insert it into the so_MLE
 * \param self - pointer to a so_MLE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Matrix *so_MLE_create_CovarianceMatrix(so_MLE *self);
/** \memberof so_MLE
 * Create a new CorrelationMatrix element and insert it into the so_MLE
 * \param self - pointer to a so_MLE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Matrix *so_MLE_create_CorrelationMatrix(so_MLE *self);
/** \memberof so_MLE
 * Create a new StandardError element and insert it into the so_MLE
 * \param self - pointer to a so_MLE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_MLE_create_StandardError(so_MLE *self);
/** \memberof so_MLE
 * Create a new RelativeStandardError element and insert it into the so_MLE
 * \param self - pointer to a so_MLE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_MLE_create_RelativeStandardError(so_MLE *self);
/** \memberof so_MLE
 * Create a new AsymptoticCI element and insert it into the so_MLE
 * \param self - pointer to a so_MLE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_MLE_create_AsymptoticCI(so_MLE *self);

#endif
