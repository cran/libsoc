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

so_TaskInformation_new <- function() {
	obj = .Call("r_so_TaskInformation_new")
}

so_TaskInformation_copy <- function(self) {
	.Call("r_so_TaskInformation_copy", self)
}

so_TaskInformation_free <- function(self) {
	.Call("r_so_TaskInformation_free", self)
}

so_TaskInformation_ref <- function(self) {
	.Call("r_so_TaskInformation_ref", self)
}

so_TaskInformation_unref <- function(self) {
	.Call("r_so_TaskInformation_unref", self)
}

so_TaskInformation_get_Message <- function(self, number) {
	.Call("r_so_TaskInformation_get_Message", self, number)
}

so_TaskInformation_get_number_of_Message <- function(self) {
	.Call("r_so_TaskInformation_get_number_of_Message", self)
}
so_TaskInformation_add_Message <- function(self, value) {
	.Call("r_so_TaskInformation_add_Message", self, value)
}
so_TaskInformation_remove_Message <- function(self, index) {
	.Call("r_so_TaskInformation_remove_Message", self, index)
}

so_TaskInformation_create_Message <- function(self) {
	.Call("r_so_TaskInformation_create_Message", self)
}

so_TaskInformation_get_OutputFilePath <- function(self, number) {
	.Call("r_so_TaskInformation_get_OutputFilePath", self, number)
}

so_TaskInformation_get_number_of_OutputFilePath <- function(self) {
	.Call("r_so_TaskInformation_get_number_of_OutputFilePath", self)
}
so_TaskInformation_add_OutputFilePath <- function(self, value) {
	.Call("r_so_TaskInformation_add_OutputFilePath", self, value)
}
so_TaskInformation_remove_OutputFilePath <- function(self, index) {
	.Call("r_so_TaskInformation_remove_OutputFilePath", self, index)
}

so_TaskInformation_create_OutputFilePath <- function(self) {
	.Call("r_so_TaskInformation_create_OutputFilePath", self)
}

so_TaskInformation_get_RunTime <- function(self) {
	.Call("r_so_TaskInformation_get_RunTime", self)
}

so_TaskInformation_set_RunTime <- function(self, value) {
	.Call("r_so_TaskInformation_set_RunTime", self, value)
}

so_TaskInformation_get_NumberChains <- function(self) {
	.Call("r_so_TaskInformation_get_NumberChains", self)
}

so_TaskInformation_set_NumberChains <- function(self, value) {
	.Call("r_so_TaskInformation_set_NumberChains", self, value)
}

so_TaskInformation_get_NumberIterations <- function(self) {
	.Call("r_so_TaskInformation_get_NumberIterations", self)
}

so_TaskInformation_set_NumberIterations <- function(self, value) {
	.Call("r_so_TaskInformation_set_NumberIterations", self, value)
}

Message_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			n = so_TaskInformation_get_number_of_Message(.self$.cobj)
			if (n > 0) {
				a = list()
				for (i in seq.int(1, n)) {
					child = so_TaskInformation_get_Message(.self$.cobj, i - 1L)
					a[[i]] = so_Message$new(cobj=child)
					so_Message_ref(child)
				}
				return(a)
			}
		} else {
		}
	}
}

OutputFilePath_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			n = so_TaskInformation_get_number_of_OutputFilePath(.self$.cobj)
			if (n > 0) {
				a = list()
				for (i in seq.int(1, n)) {
					child = so_TaskInformation_get_OutputFilePath(.self$.cobj, i - 1L)
					a[[i]] = so_ExternalFile$new(cobj=child)
					so_ExternalFile_ref(child)
				}
				return(a)
			}
		} else {
		}
	}
}

RunTime_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			so_TaskInformation_get_RunTime(.self$.cobj)
		} else {
			if (!is(value, "numeric")) {
				stop("object must be of type 'numeric'")
			}
			so_TaskInformation_set_RunTime(.self$.cobj, value)
		}
	}
}

NumberChains_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			so_TaskInformation_get_NumberChains(.self$.cobj)
		} else {
			if (!is(value, "integer")) {
				stop("object must be of type 'integer'")
			}
			so_TaskInformation_set_NumberChains(.self$.cobj, value)
		}
	}
}

NumberIterations_acc <- function(value)
{
	if (!isnull(.self$.cobj)) {
		if (missing(value)) {
			so_TaskInformation_get_NumberIterations(.self$.cobj)
		} else {
			if (!is(value, "integer")) {
				stop("object must be of type 'integer'")
			}
			so_TaskInformation_set_NumberIterations(.self$.cobj, value)
		}
	}
}

so_TaskInformation = setRefClass("so_TaskInformation",
	fields=list(
		Message = Message_acc,
		OutputFilePath = OutputFilePath_acc,
		RunTime = RunTime_acc,
		NumberChains = NumberChains_acc,
		NumberIterations = NumberIterations_acc,
		.cobj = "externalptr"
	),
	methods=list(
		copy = function() {
			copy = so_TaskInformation_copy(.self$.cobj)
			so_TaskInformation$new(cobj=copy)
		},
		initialize = function(cobj) {
			if (missing(cobj)) {
				.cobj <<- so_TaskInformation_new()
			} else {
				.cobj <<- cobj
			}
		},
		finalize = function() {
			so_TaskInformation_unref(.self$.cobj)
		},
		add_Message = function(value) {
			so_TaskInformation_add_Message(.self$.cobj, value$.cobj)
			invisible(so_Message_ref(value$.cobj))
		},
		remove_Message = function(value, index) {
			invisible(so_TaskInformation_remove_Message(.self$.cobj, index))
		},
		add_OutputFilePath = function(value) {
			so_TaskInformation_add_OutputFilePath(.self$.cobj, value$.cobj)
			invisible(so_ExternalFile_ref(value$.cobj))
		},
		remove_OutputFilePath = function(value, index) {
			invisible(so_TaskInformation_remove_OutputFilePath(.self$.cobj, index))
		}
	)
)
