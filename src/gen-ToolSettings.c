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

#include <R.h>
#include <Rdefines.h>
#include <so.h>
#include "soc.h"

SEXP r_so_ToolSettings_new()
{
	so_ToolSettings *obj = so_ToolSettings_new();
	if (!obj) {
		error("Failed to create so_ToolSettings object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_ToolSettings_copy(SEXP self)
{
	so_ToolSettings *obj = so_ToolSettings_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_ToolSettings object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_ToolSettings_free(SEXP self)
{
	so_ToolSettings_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_ToolSettings_ref(SEXP self)
{
	so_ToolSettings_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_ToolSettings_unref(SEXP self)
{
	so_ToolSettings_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_ToolSettings_get_File(SEXP self, SEXP index)
{
	so_ExternalFile *child = so_ToolSettings_get_File(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_ToolSettings_get_number_of_File(SEXP self)
{
	int number = so_ToolSettings_get_number_of_File(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_ToolSettings_add_File(SEXP self, SEXP child)
{
	int fail = so_ToolSettings_add_File(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add File to ToolSettings");
	}
	return(R_NilValue);
}
SEXP r_so_ToolSettings_remove_File(SEXP self, SEXP index)
{
	int fail = so_ToolSettings_remove_File(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove File from ToolSettings");
	}
	return(R_NilValue);
}
SEXP r_so_ToolSettings_create_File(SEXP self)
{
	so_ExternalFile *child = so_ToolSettings_create_File(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

