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
#ifndef _SO_BAYESIAN_PPE_H
#define _SO_BAYESIAN_PPE_H

#include <so/Table.h>

/** \struct so_Bayesian_PPE
	 \brief A structure representing an SO/SOBlock/Estimation/PrecisionPopulationEstimates/Bayesian element
*/
typedef struct so_Bayesian_PPE so_Bayesian_PPE;

/** \memberof so_Bayesian_PPE
 * Create a new empty so_Bayesian_PPE structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_Bayesian_PPE_copy, so_Bayesian_PPE_free
 */
so_Bayesian_PPE *so_Bayesian_PPE_new();
/** \memberof so_Bayesian_PPE
 * Create a copy of a so_Bayesian_PPE structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_Bayesian_PPE_new
 */
so_Bayesian_PPE *so_Bayesian_PPE_copy(so_Bayesian_PPE *self);
/** \memberof so_Bayesian_PPE
 * Free all memory associated with a so_Bayesian_PPE structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_Bayesian_PPE_new
 */
void so_Bayesian_PPE_free(so_Bayesian_PPE *self);
void so_Bayesian_PPE_ref(so_Bayesian_PPE *self);
void so_Bayesian_PPE_unref(so_Bayesian_PPE *self);
/** \memberof so_Bayesian_PPE
 * Get the StandardDeviationPosterior element
 * \param self - pointer to a so_Bayesian_PPE
 * \return A pointer to the structure representing the StandardDeviationPosterior element
 * \sa so_Bayesian_PPE_set_StandardDeviationPosterior
 */
so_Table *so_Bayesian_PPE_get_StandardDeviationPosterior(so_Bayesian_PPE *self);
/** \memberof so_Bayesian_PPE
 * Get the PercentilesCI element
 * \param self - pointer to a so_Bayesian_PPE
 * \return A pointer to the structure representing the PercentilesCI element
 * \sa so_Bayesian_PPE_set_PercentilesCI
 */
so_Table *so_Bayesian_PPE_get_PercentilesCI(so_Bayesian_PPE *self);
/** \memberof so_Bayesian_PPE
 * Set the StandardDeviationPosterior element
 * \param self - pointer to a so_Bayesian_PPE
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_Bayesian_PPE_get_StandardDeviationPosterior
 */
void so_Bayesian_PPE_set_StandardDeviationPosterior(so_Bayesian_PPE *self, so_Table *value);
/** \memberof so_Bayesian_PPE
 * Set the PercentilesCI element
 * \param self - pointer to a so_Bayesian_PPE
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_Bayesian_PPE_get_PercentilesCI
 */
void so_Bayesian_PPE_set_PercentilesCI(so_Bayesian_PPE *self, so_Table *value);
/** \memberof so_Bayesian_PPE
 * Create a new StandardDeviationPosterior element and insert it into the so_Bayesian_PPE
 * \param self - pointer to a so_Bayesian_PPE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_Bayesian_PPE_create_StandardDeviationPosterior(so_Bayesian_PPE *self);
/** \memberof so_Bayesian_PPE
 * Create a new PercentilesCI element and insert it into the so_Bayesian_PPE
 * \param self - pointer to a so_Bayesian_PPE
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_Bayesian_PPE_create_PercentilesCI(so_Bayesian_PPE *self);

#endif