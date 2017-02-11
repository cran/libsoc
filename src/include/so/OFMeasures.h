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
#ifndef _SO_OFMEASURES_H
#define _SO_OFMEASURES_H

#include <so/Table.h>
#include <so/InformationCriteria.h>

/** \struct so_OFMeasures
	 \brief A structure representing an SO/SOBlock/Estimation/OFMeasures element
*/
typedef struct so_OFMeasures so_OFMeasures;

/** \memberof so_OFMeasures
 * Create a new empty so_OFMeasures structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_OFMeasures_copy, so_OFMeasures_free
 */
so_OFMeasures *so_OFMeasures_new();
/** \memberof so_OFMeasures
 * Create a copy of a so_OFMeasures structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_OFMeasures_new
 */
so_OFMeasures *so_OFMeasures_copy(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Free all memory associated with a so_OFMeasures structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_OFMeasures_new
 */
void so_OFMeasures_free(so_OFMeasures *self);
void so_OFMeasures_ref(so_OFMeasures *self);
void so_OFMeasures_unref(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Get the Likelihood element
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the value of Likelihood or NULL if no value is present.
 * \sa so_OFMeasures_set_Likelihood
 */
double *so_OFMeasures_get_Likelihood(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Get the LogLikelihood element
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the value of LogLikelihood or NULL if no value is present.
 * \sa so_OFMeasures_set_LogLikelihood
 */
double *so_OFMeasures_get_LogLikelihood(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Get the Deviance element
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the value of Deviance or NULL if no value is present.
 * \sa so_OFMeasures_set_Deviance
 */
double *so_OFMeasures_get_Deviance(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Get the ToolObjFunction element
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the value of ToolObjFunction or NULL if no value is present.
 * \sa so_OFMeasures_set_ToolObjFunction
 */
double *so_OFMeasures_get_ToolObjFunction(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Get the IndividualContribtoLL element
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the structure representing the IndividualContribtoLL element
 * \sa so_OFMeasures_set_IndividualContribtoLL
 */
so_Table *so_OFMeasures_get_IndividualContribtoLL(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Get the InformationCriteria element
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the structure representing the InformationCriteria element
 * \sa so_OFMeasures_set_InformationCriteria
 */
so_InformationCriteria *so_OFMeasures_get_InformationCriteria(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Set the Likelihood element
 * \param self - pointer to a so_OFMeasures
 * \param value - A pointer to the value to set or NULL to not include this element.
 * \sa so_OFMeasures_get_Likelihood
 */
void so_OFMeasures_set_Likelihood(so_OFMeasures *self, double *value);
/** \memberof so_OFMeasures
 * Set the LogLikelihood element
 * \param self - pointer to a so_OFMeasures
 * \param value - A pointer to the value to set or NULL to not include this element.
 * \sa so_OFMeasures_get_LogLikelihood
 */
void so_OFMeasures_set_LogLikelihood(so_OFMeasures *self, double *value);
/** \memberof so_OFMeasures
 * Set the Deviance element
 * \param self - pointer to a so_OFMeasures
 * \param value - A pointer to the value to set or NULL to not include this element.
 * \sa so_OFMeasures_get_Deviance
 */
void so_OFMeasures_set_Deviance(so_OFMeasures *self, double *value);
/** \memberof so_OFMeasures
 * Set the ToolObjFunction element
 * \param self - pointer to a so_OFMeasures
 * \param value - A pointer to the value to set or NULL to not include this element.
 * \sa so_OFMeasures_get_ToolObjFunction
 */
void so_OFMeasures_set_ToolObjFunction(so_OFMeasures *self, double *value);
/** \memberof so_OFMeasures
 * Set the IndividualContribtoLL element
 * \param self - pointer to a so_OFMeasures
 * \param value - A pointer to a \a so_Table to set.
 * \sa so_OFMeasures_get_IndividualContribtoLL
 */
void so_OFMeasures_set_IndividualContribtoLL(so_OFMeasures *self, so_Table *value);
/** \memberof so_OFMeasures
 * Set the InformationCriteria element
 * \param self - pointer to a so_OFMeasures
 * \param value - A pointer to a \a so_InformationCriteria to set.
 * \sa so_OFMeasures_get_InformationCriteria
 */
void so_OFMeasures_set_InformationCriteria(so_OFMeasures *self, so_InformationCriteria *value);
/** \memberof so_OFMeasures
 * Create a new IndividualContribtoLL element and insert it into the so_OFMeasures
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Table *so_OFMeasures_create_IndividualContribtoLL(so_OFMeasures *self);
/** \memberof so_OFMeasures
 * Create a new InformationCriteria element and insert it into the so_OFMeasures
 * \param self - pointer to a so_OFMeasures
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_InformationCriteria *so_OFMeasures_create_InformationCriteria(so_OFMeasures *self);

#endif