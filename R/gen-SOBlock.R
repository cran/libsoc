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

so_SOBlock_new <- function() {
	obj = .Call("r_so_SOBlock_new")
}

so_SOBlock_copy <- function(self) {
	.Call("r_so_SOBlock_copy", self)
}

so_SOBlock_free <- function(self) {
	.Call("r_so_SOBlock_free", self)
}

so_SOBlock_ref <- function(self) {
	.Call("r_so_SOBlock_ref", self)
}

so_SOBlock_unref <- function(self) {
	.Call("r_so_SOBlock_unref", self)
}

so_SOBlock_get_blkId <- function(self) {
	.Call("r_so_SOBlock_get_blkId", self)
}

so_SOBlock_set_blkId <- function(self, value) {
	.Call("r_so_SOBlock_set_blkId", self, value)
}

so_SOBlock_get_ToolSettings <- function(self) {
	.Call("r_so_SOBlock_get_ToolSettings", self)
}

so_SOBlock_set_ToolSettings <- function(self, value) {
	.Call("r_so_SOBlock_set_ToolSettings", self, value)
}

so_SOBlock_create_ToolSettings <- function(self) {
	.Call("r_so_SOBlock_create_ToolSettings", self)
}

so_SOBlock_get_RawResults <- function(self) {
	.Call("r_so_SOBlock_get_RawResults", self)
}

so_SOBlock_set_RawResults <- function(self, value) {
	.Call("r_so_SOBlock_set_RawResults", self, value)
}

so_SOBlock_create_RawResults <- function(self) {
	.Call("r_so_SOBlock_create_RawResults", self)
}

so_SOBlock_get_TaskInformation <- function(self) {
	.Call("r_so_SOBlock_get_TaskInformation", self)
}

so_SOBlock_set_TaskInformation <- function(self, value) {
	.Call("r_so_SOBlock_set_TaskInformation", self, value)
}

so_SOBlock_create_TaskInformation <- function(self) {
	.Call("r_so_SOBlock_create_TaskInformation", self)
}

so_SOBlock_get_Estimation <- function(self) {
	.Call("r_so_SOBlock_get_Estimation", self)
}

so_SOBlock_set_Estimation <- function(self, value) {
	.Call("r_so_SOBlock_set_Estimation", self, value)
}

so_SOBlock_create_Estimation <- function(self) {
	.Call("r_so_SOBlock_create_Estimation", self)
}

so_SOBlock_get_Simulation <- function(self) {
	.Call("r_so_SOBlock_get_Simulation", self)
}

so_SOBlock_set_Simulation <- function(self, value) {
	.Call("r_so_SOBlock_set_Simulation", self, value)
}

so_SOBlock_create_Simulation <- function(self) {
	.Call("r_so_SOBlock_create_Simulation", self)
}

so_SOBlock_get_ModelDiagnostic <- function(self) {
	.Call("r_so_SOBlock_get_ModelDiagnostic", self)
}

so_SOBlock_set_ModelDiagnostic <- function(self, value) {
	.Call("r_so_SOBlock_set_ModelDiagnostic", self, value)
}

so_SOBlock_create_ModelDiagnostic <- function(self) {
	.Call("r_so_SOBlock_create_ModelDiagnostic", self)
}

so_SOBlock_get_OptimalDesign <- function(self) {
	.Call("r_so_SOBlock_get_OptimalDesign", self)
}

so_SOBlock_set_OptimalDesign <- function(self, value) {
	.Call("r_so_SOBlock_set_OptimalDesign", self, value)
}

so_SOBlock_create_OptimalDesign <- function(self) {
	.Call("r_so_SOBlock_create_OptimalDesign", self)
}

blkId_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			so_SOBlock_get_blkId(.self$.cobj)
		} else {
			stopifnot(is.character(value), length(value) == 1)
			so_SOBlock_set_blkId(.self$.cobj, value)
		}
	}
}

ToolSettings_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			child = so_SOBlock_get_ToolSettings(.self$.cobj)
			if (!isnull(child)) {
				so_ToolSettings_ref(child)
				so_ToolSettings$new(cobj=child)
			}
		} else {
			if (!is(value, "so_ToolSettings")) {
				stop("object must be of type 'so_ToolSettings'")
			}
			so_SOBlock_set_ToolSettings(.self$.cobj, value$.cobj)
			so_ToolSettings_ref(value$.cobj)
		}
	}
}

RawResults_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			child = so_SOBlock_get_RawResults(.self$.cobj)
			if (!isnull(child)) {
				so_RawResults_ref(child)
				so_RawResults$new(cobj=child)
			}
		} else {
			if (!is(value, "so_RawResults")) {
				stop("object must be of type 'so_RawResults'")
			}
			so_SOBlock_set_RawResults(.self$.cobj, value$.cobj)
			so_RawResults_ref(value$.cobj)
		}
	}
}

TaskInformation_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			child = so_SOBlock_get_TaskInformation(.self$.cobj)
			if (!isnull(child)) {
				so_TaskInformation_ref(child)
				so_TaskInformation$new(cobj=child)
			}
		} else {
			if (!is(value, "so_TaskInformation")) {
				stop("object must be of type 'so_TaskInformation'")
			}
			so_SOBlock_set_TaskInformation(.self$.cobj, value$.cobj)
			so_TaskInformation_ref(value$.cobj)
		}
	}
}

Estimation_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			child = so_SOBlock_get_Estimation(.self$.cobj)
			if (!isnull(child)) {
				so_Estimation_ref(child)
				so_Estimation$new(cobj=child)
			}
		} else {
			if (!is(value, "so_Estimation")) {
				stop("object must be of type 'so_Estimation'")
			}
			so_SOBlock_set_Estimation(.self$.cobj, value$.cobj)
			so_Estimation_ref(value$.cobj)
		}
	}
}

Simulation_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			child = so_SOBlock_get_Simulation(.self$.cobj)
			if (!isnull(child)) {
				so_Simulation_ref(child)
				so_Simulation$new(cobj=child)
			}
		} else {
			if (!is(value, "so_Simulation")) {
				stop("object must be of type 'so_Simulation'")
			}
			so_SOBlock_set_Simulation(.self$.cobj, value$.cobj)
			so_Simulation_ref(value$.cobj)
		}
	}
}

ModelDiagnostic_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			child = so_SOBlock_get_ModelDiagnostic(.self$.cobj)
			if (!isnull(child)) {
				so_ModelDiagnostic_ref(child)
				so_ModelDiagnostic$new(cobj=child)
			}
		} else {
			if (!is(value, "so_ModelDiagnostic")) {
				stop("object must be of type 'so_ModelDiagnostic'")
			}
			so_SOBlock_set_ModelDiagnostic(.self$.cobj, value$.cobj)
			so_ModelDiagnostic_ref(value$.cobj)
		}
	}
}

OptimalDesign_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			child = so_SOBlock_get_OptimalDesign(.self$.cobj)
			if (!isnull(child)) {
				so_OptimalDesign_ref(child)
				so_OptimalDesign$new(cobj=child)
			}
		} else {
			if (!is(value, "so_OptimalDesign")) {
				stop("object must be of type 'so_OptimalDesign'")
			}
			so_SOBlock_set_OptimalDesign(.self$.cobj, value$.cobj)
			so_OptimalDesign_ref(value$.cobj)
		}
	}
}

so_SOBlock = setRefClass("so_SOBlock",
	fields=list(
		blkId = blkId_acc,
		ToolSettings = ToolSettings_acc,
		RawResults = RawResults_acc,
		TaskInformation = TaskInformation_acc,
		Estimation = Estimation_acc,
		Simulation = Simulation_acc,
		ModelDiagnostic = ModelDiagnostic_acc,
		OptimalDesign = OptimalDesign_acc,
		.cobj = "externalptr"
	),
	methods=list(
		copy = function() {
			copy = so_SOBlock_copy(.self$.cobj)
			so_SOBlock$new(cobj=copy)
		},
		initialize = function(cobj) {
			if (missing(cobj)) {
				.cobj <<- so_SOBlock_new()
			} else {
				.cobj <<- cobj
			}
		},
		finalize = function() {
			so_SOBlock_unref(.self$.cobj)
		}
	)
)
