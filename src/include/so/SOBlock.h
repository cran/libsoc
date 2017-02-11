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
#ifndef _SO_SOBLOCK_H
#define _SO_SOBLOCK_H

#include <so/ToolSettings.h>
#include <so/RawResults.h>
#include <so/TaskInformation.h>
#include <so/Estimation.h>
#include <so/Simulation.h>
#include <so/ModelDiagnostic.h>
#include <so/OptimalDesign.h>

/** \struct so_SOBlock
	 \brief A structure representing an SO/SOBlock element
*/
typedef struct so_SOBlock so_SOBlock;

/** \memberof so_SOBlock
 * Create a new empty so_SOBlock structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_SOBlock_copy, so_SOBlock_free
 */
so_SOBlock *so_SOBlock_new();
/** \memberof so_SOBlock
 * Create a copy of a so_SOBlock structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_SOBlock_new
 */
so_SOBlock *so_SOBlock_copy(so_SOBlock *self);
/** \memberof so_SOBlock
 * Free all memory associated with a so_SOBlock structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_SOBlock_new
 */
void so_SOBlock_free(so_SOBlock *self);
void so_SOBlock_ref(so_SOBlock *self);
void so_SOBlock_unref(so_SOBlock *self);
/** \memberof so_SOBlock
 * Get the value of the blkId attribute
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the attribute value
 * \sa so_SOBlock_set_blkId
 */
char *so_SOBlock_get_blkId(so_SOBlock *self);
/** \memberof so_SOBlock
 * Set the value of the blkId attribute
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to the attribute value
 * \return 0 for success
 * \sa so_SOBlock_get_blkId
 */
int so_SOBlock_set_blkId(so_SOBlock *self, char *value);
/** \memberof so_SOBlock
 * Get the ToolSettings element
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the structure representing the ToolSettings element
 * \sa so_SOBlock_set_ToolSettings
 */
so_ToolSettings *so_SOBlock_get_ToolSettings(so_SOBlock *self);
/** \memberof so_SOBlock
 * Get the RawResults element
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the structure representing the RawResults element
 * \sa so_SOBlock_set_RawResults
 */
so_RawResults *so_SOBlock_get_RawResults(so_SOBlock *self);
/** \memberof so_SOBlock
 * Get the TaskInformation element
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the structure representing the TaskInformation element
 * \sa so_SOBlock_set_TaskInformation
 */
so_TaskInformation *so_SOBlock_get_TaskInformation(so_SOBlock *self);
/** \memberof so_SOBlock
 * Get the Estimation element
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the structure representing the Estimation element
 * \sa so_SOBlock_set_Estimation
 */
so_Estimation *so_SOBlock_get_Estimation(so_SOBlock *self);
/** \memberof so_SOBlock
 * Get the Simulation element
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the structure representing the Simulation element
 * \sa so_SOBlock_set_Simulation
 */
so_Simulation *so_SOBlock_get_Simulation(so_SOBlock *self);
/** \memberof so_SOBlock
 * Get the ModelDiagnostic element
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the structure representing the ModelDiagnostic element
 * \sa so_SOBlock_set_ModelDiagnostic
 */
so_ModelDiagnostic *so_SOBlock_get_ModelDiagnostic(so_SOBlock *self);
/** \memberof so_SOBlock
 * Get the OptimalDesign element
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the structure representing the OptimalDesign element
 * \sa so_SOBlock_set_OptimalDesign
 */
so_OptimalDesign *so_SOBlock_get_OptimalDesign(so_SOBlock *self);
/** \memberof so_SOBlock
 * Set the ToolSettings element
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to a \a so_ToolSettings to set.
 * \sa so_SOBlock_get_ToolSettings
 */
void so_SOBlock_set_ToolSettings(so_SOBlock *self, so_ToolSettings *value);
/** \memberof so_SOBlock
 * Set the RawResults element
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to a \a so_RawResults to set.
 * \sa so_SOBlock_get_RawResults
 */
void so_SOBlock_set_RawResults(so_SOBlock *self, so_RawResults *value);
/** \memberof so_SOBlock
 * Set the TaskInformation element
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to a \a so_TaskInformation to set.
 * \sa so_SOBlock_get_TaskInformation
 */
void so_SOBlock_set_TaskInformation(so_SOBlock *self, so_TaskInformation *value);
/** \memberof so_SOBlock
 * Set the Estimation element
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to a \a so_Estimation to set.
 * \sa so_SOBlock_get_Estimation
 */
void so_SOBlock_set_Estimation(so_SOBlock *self, so_Estimation *value);
/** \memberof so_SOBlock
 * Set the Simulation element
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to a \a so_Simulation to set.
 * \sa so_SOBlock_get_Simulation
 */
void so_SOBlock_set_Simulation(so_SOBlock *self, so_Simulation *value);
/** \memberof so_SOBlock
 * Set the ModelDiagnostic element
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to a \a so_ModelDiagnostic to set.
 * \sa so_SOBlock_get_ModelDiagnostic
 */
void so_SOBlock_set_ModelDiagnostic(so_SOBlock *self, so_ModelDiagnostic *value);
/** \memberof so_SOBlock
 * Set the OptimalDesign element
 * \param self - pointer to a so_SOBlock
 * \param value - A pointer to a \a so_OptimalDesign to set.
 * \sa so_SOBlock_get_OptimalDesign
 */
void so_SOBlock_set_OptimalDesign(so_SOBlock *self, so_OptimalDesign *value);
/** \memberof so_SOBlock
 * Create a new ToolSettings element and insert it into the so_SOBlock
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_ToolSettings *so_SOBlock_create_ToolSettings(so_SOBlock *self);
/** \memberof so_SOBlock
 * Create a new RawResults element and insert it into the so_SOBlock
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_RawResults *so_SOBlock_create_RawResults(so_SOBlock *self);
/** \memberof so_SOBlock
 * Create a new TaskInformation element and insert it into the so_SOBlock
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_TaskInformation *so_SOBlock_create_TaskInformation(so_SOBlock *self);
/** \memberof so_SOBlock
 * Create a new Estimation element and insert it into the so_SOBlock
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Estimation *so_SOBlock_create_Estimation(so_SOBlock *self);
/** \memberof so_SOBlock
 * Create a new Simulation element and insert it into the so_SOBlock
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_Simulation *so_SOBlock_create_Simulation(so_SOBlock *self);
/** \memberof so_SOBlock
 * Create a new ModelDiagnostic element and insert it into the so_SOBlock
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_ModelDiagnostic *so_SOBlock_create_ModelDiagnostic(so_SOBlock *self);
/** \memberof so_SOBlock
 * Create a new OptimalDesign element and insert it into the so_SOBlock
 * \param self - pointer to a so_SOBlock
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_OptimalDesign *so_SOBlock_create_OptimalDesign(so_SOBlock *self);

#endif
