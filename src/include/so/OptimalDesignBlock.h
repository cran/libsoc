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
#ifndef _SO_OPTIMALDESIGNBLOCK_H
#define _SO_OPTIMALDESIGNBLOCK_H

#include <so/Matrix.h>
#include <so/Table.h>
#include <so/ExternalFile.h>

/** \struct so_OptimalDesignBlock
	 \brief A structure representing an SO/SOBlock/OptimalDesign/OptimalDesignBlock element
*/
typedef struct so_OptimalDesignBlock so_OptimalDesignBlock;

/** \memberof so_OptimalDesignBlock
 * Create a new empty so_OptimalDesignBlock structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_OptimalDesignBlock_copy, so_OptimalDesignBlock_free
 */
so_OptimalDesignBlock *so_OptimalDesignBlock_new();
/** \memberof so_OptimalDesignBlock
 * Create a copy of a so_OptimalDesignBlock structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_OptimalDesignBlock_new
 */
so_OptimalDesignBlock *so_OptimalDesignBlock_copy(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Free all memory associated with a so_OptimalDesignBlock structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_OptimalDesignBlock_new
 */
void so_OptimalDesignBlock_free(so_OptimalDesignBlock *self);
void so_OptimalDesignBlock_ref(so_OptimalDesignBlock *self);
void so_OptimalDesignBlock_unref(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Get the value of the blockNumber attribute
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the attribute value
 * \sa so_OptimalDesignBlock_set_blockNumber
 */
int *so_OptimalDesignBlock_get_blockNumber(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Set the value of the blockNumber attribute
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to the attribute value
 * \sa so_OptimalDesignBlock_get_blockNumber
 */
void so_OptimalDesignBlock_set_blockNumber(so_OptimalDesignBlock *self, int *value);
/** \memberof so_OptimalDesignBlock
 * Get the FIM element
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the structure representing the FIM element
 * \sa so_OptimalDesignBlock_set_FIM
 */
so_Matrix *so_OptimalDesignBlock_get_FIM(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Get the CovarianceMatrix element
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the structure representing the CovarianceMatrix element
 * \sa so_OptimalDesignBlock_set_CovarianceMatrix
 */
so_Matrix *so_OptimalDesignBlock_get_CovarianceMatrix(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Get the ParameterPrecision element
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the structure representing the ParameterPrecision element
 * \sa so_OptimalDesignBlock_set_ParameterPrecision
 */
so_Table *so_OptimalDesignBlock_get_ParameterPrecision(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Get the Criteria element
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the structure representing the Criteria element
 * \sa so_OptimalDesignBlock_set_Criteria
 */
so_Table *so_OptimalDesignBlock_get_Criteria(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Get the Tests element
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the structure representing the Tests element
 * \sa so_OptimalDesignBlock_set_Tests
 */
so_Table *so_OptimalDesignBlock_get_Tests(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Get the SimulatedData element
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the structure representing the SimulatedData element
 * \sa so_OptimalDesignBlock_set_SimulatedData
 */
so_ExternalFile *so_OptimalDesignBlock_get_SimulatedData(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Get the Design element
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the structure representing the Design element
 * \sa so_OptimalDesignBlock_set_Design
 */
so_ExternalFile *so_OptimalDesignBlock_get_Design(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Set the FIM element
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to a \a so_Matrix to set.
 * \sa so_OptimalDesignBlock_get_FIM
 */
void so_OptimalDesignBlock_set_FIM(so_OptimalDesignBlock *self, so_Matrix *value);
/** \memberof so_OptimalDesignBlock
 * Set the CovarianceMatrix element
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to a \a so_Matrix to set.
 * \sa so_OptimalDesignBlock_get_CovarianceMatrix
 */
void so_OptimalDesignBlock_set_CovarianceMatrix(so_OptimalDesignBlock *self, so_Matrix *value);
/** \memberof so_OptimalDesignBlock
 * Set the ParameterPrecision element
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_OptimalDesignBlock_get_ParameterPrecision
 */
void so_OptimalDesignBlock_set_ParameterPrecision(so_OptimalDesignBlock *self, so_Table *value);
/** \memberof so_OptimalDesignBlock
 * Set the Criteria element
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_OptimalDesignBlock_get_Criteria
 */
void so_OptimalDesignBlock_set_Criteria(so_OptimalDesignBlock *self, so_Table *value);
/** \memberof so_OptimalDesignBlock
 * Set the Tests element
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_OptimalDesignBlock_get_Tests
 */
void so_OptimalDesignBlock_set_Tests(so_OptimalDesignBlock *self, so_Table *value);
/** \memberof so_OptimalDesignBlock
 * Set the SimulatedData element
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to a \a so_ExternalFile to set.
 * \sa so_OptimalDesignBlock_get_SimulatedData
 */
void so_OptimalDesignBlock_set_SimulatedData(so_OptimalDesignBlock *self, so_ExternalFile *value);
/** \memberof so_OptimalDesignBlock
 * Set the Design element
 * \param self - pointer to a so_OptimalDesignBlock
 * \param value - A pointer to a \a so_ExternalFile to set.
 * \sa so_OptimalDesignBlock_get_Design
 */
void so_OptimalDesignBlock_set_Design(so_OptimalDesignBlock *self, so_ExternalFile *value);
/** \memberof so_OptimalDesignBlock
 * Create a new FIM element and insert it into the so_OptimalDesignBlock
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Matrix *so_OptimalDesignBlock_create_FIM(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Create a new CovarianceMatrix element and insert it into the so_OptimalDesignBlock
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Matrix *so_OptimalDesignBlock_create_CovarianceMatrix(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Create a new ParameterPrecision element and insert it into the so_OptimalDesignBlock
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_OptimalDesignBlock_create_ParameterPrecision(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Create a new Criteria element and insert it into the so_OptimalDesignBlock
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_OptimalDesignBlock_create_Criteria(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Create a new Tests element and insert it into the so_OptimalDesignBlock
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_OptimalDesignBlock_create_Tests(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Create a new SimulatedData element and insert it into the so_OptimalDesignBlock
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_ExternalFile *so_OptimalDesignBlock_create_SimulatedData(so_OptimalDesignBlock *self);
/** \memberof so_OptimalDesignBlock
 * Create a new Design element and insert it into the so_OptimalDesignBlock
 * \param self - pointer to a so_OptimalDesignBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_ExternalFile *so_OptimalDesignBlock_create_Design(so_OptimalDesignBlock *self);

#endif
