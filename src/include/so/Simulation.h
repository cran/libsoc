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
#ifndef _SO_SIMULATION_H
#define _SO_SIMULATION_H

#include <so/SimulationBlock.h>

/** \struct so_Simulation
	 \brief A structure representing an SO/SOBlock/Simulation element
*/
typedef struct so_Simulation so_Simulation;

/** \memberof so_Simulation
 * Create a new empty so_Simulation structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_Simulation_copy, so_Simulation_free
 */
so_Simulation *so_Simulation_new();
/** \memberof so_Simulation
 * Create a copy of a so_Simulation structure.
 * \return A pointer to the newly created struct or NULL if memory allocation failed
 * \sa so_Simulation_new
 */
so_Simulation *so_Simulation_copy(so_Simulation *self);
/** \memberof so_Simulation
 * Free all memory associated with a so_Simulation structure and its children.
 * \param self - a pointer to the structure to free
 * \sa so_Simulation_new
 */
void so_Simulation_free(so_Simulation *self);
void so_Simulation_ref(so_Simulation *self);
void so_Simulation_unref(so_Simulation *self);
/** \memberof so_Simulation
 * Get the SimulationBlock element
 * \param self - pointer to a so_Simulation
 * \param number - An index to the specific element
 * \return A pointer to the structure representing the SimulationBlock element
 * \sa so_Simulation_set_SimulationBlock
 */
so_SimulationBlock *so_Simulation_get_SimulationBlock(so_Simulation *self, int number);
/** \memberof so_Simulation
 * Get the number of SimulationBlock currently contained in the Simulation structure
 * \param self - pointer to a so_Simulation
 * \return The number of SimulationBlocks
 */
int so_Simulation_get_number_of_SimulationBlock(so_Simulation *self);
/** \memberof so_Simulation
 * Create a new SimulationBlock element and insert it into the so_Simulation
 * \param self - pointer to a so_Simulation
 * \return A pointer to the newly created structure or NULL if memory allocation failed
 */
so_SimulationBlock *so_Simulation_create_SimulationBlock(so_Simulation *self);
int so_Simulation_add_SimulationBlock(so_Simulation *self, so_SimulationBlock *child);
int so_Simulation_remove_SimulationBlock(so_Simulation *self, int index);

#endif
