# libsoc - Library to handle standardised output files
# Copyright (C) 2015 Rikard Nordgren
# 
# This file was autogenerated and should not be edited
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
# 
# his library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, see <http://www.gnu.org/licenses/>.

so_Simulation_new <- function() {
	obj = .Call("r_so_Simulation_new")
}

so_Simulation_copy <- function(self) {
	.Call("r_so_Simulation_copy", self)
}

so_Simulation_free <- function(self) {
	.Call("r_so_Simulation_free", self)
}

so_Simulation_ref <- function(self) {
	.Call("r_so_Simulation_ref", self)
}

so_Simulation_unref <- function(self) {
	.Call("r_so_Simulation_unref", self)
}

so_Simulation_get_SimulationBlock <- function(self, number) {
	.Call("r_so_Simulation_get_SimulationBlock", self, number)
}

so_Simulation_get_number_of_SimulationBlock <- function(self) {
	.Call("r_so_Simulation_get_number_of_SimulationBlock", self)
}
so_Simulation_add_SimulationBlock <- function(self, value) {
	.Call("r_so_Simulation_add_SimulationBlock", self, value)
}
so_Simulation_remove_SimulationBlock <- function(self, index) {
	.Call("r_so_Simulation_remove_SimulationBlock", self, index)
}

so_Simulation_create_SimulationBlock <- function(self) {
	.Call("r_so_Simulation_create_SimulationBlock", self)
}

SimulationBlock_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			n = so_Simulation_get_number_of_SimulationBlock(.self$.cobj)
			if (n > 0) {
				a = list()
				for (i in seq.int(1, n)) {
					child = so_Simulation_get_SimulationBlock(.self$.cobj, i - 1L)
					a[[i]] = so_SimulationBlock$new(cobj=child)
					so_SimulationBlock_ref(child)
				}
				return(a)
			}
		} else {
		}
	}
}

so_Simulation = setRefClass("so_Simulation",
	fields=list(
		SimulationBlock = SimulationBlock_acc,
		.cobj = "externalptr"
	),
	methods=list(
		copy = function() {
			copy = so_Simulation_copy(.self$.cobj)
			so_Simulation$new(cobj=copy)
		},
		initialize = function(cobj) {
			if (missing(cobj)) {
				.cobj <<- so_Simulation_new()
			} else {
				.cobj <<- cobj
			}
		},
		finalize = function() {
			so_Simulation_unref(.self$.cobj)
		},
		add_SimulationBlock = function(value) {
			so_Simulation_add_SimulationBlock(.self$.cobj, value$.cobj)
			invisible(so_SimulationBlock_ref(value$.cobj))
		},
		remove_SimulationBlock = function(value, index) {
			invisible(so_Simulation_remove_SimulationBlock(.self$.cobj, index))
		}
	)
)
