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

SEXP r_so_TaskInformation_new()
{
	so_TaskInformation *obj = so_TaskInformation_new();
	if (!obj) {
		error("Failed to create so_TaskInformation object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_TaskInformation_copy(SEXP self)
{
	so_TaskInformation *obj = so_TaskInformation_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_TaskInformation object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_TaskInformation_free(SEXP self)
{
	so_TaskInformation_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_TaskInformation_ref(SEXP self)
{
	so_TaskInformation_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_TaskInformation_unref(SEXP self)
{
	so_TaskInformation_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_TaskInformation_get_Message(SEXP self, SEXP index)
{
	so_Message *child = so_TaskInformation_get_Message(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_TaskInformation_get_number_of_Message(SEXP self)
{
	int number = so_TaskInformation_get_number_of_Message(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_TaskInformation_add_Message(SEXP self, SEXP child)
{
	int fail = so_TaskInformation_add_Message(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add Message to TaskInformation");
	}
	return(R_NilValue);
}
SEXP r_so_TaskInformation_remove_Message(SEXP self, SEXP index)
{
	int fail = so_TaskInformation_remove_Message(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove Message from TaskInformation");
	}
	return(R_NilValue);
}
SEXP r_so_TaskInformation_create_Message(SEXP self)
{
	so_Message *child = so_TaskInformation_create_Message(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_TaskInformation_get_OutputFilePath(SEXP self, SEXP index)
{
	so_ExternalFile *child = so_TaskInformation_get_OutputFilePath(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_TaskInformation_get_number_of_OutputFilePath(SEXP self)
{
	int number = so_TaskInformation_get_number_of_OutputFilePath(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_TaskInformation_add_OutputFilePath(SEXP self, SEXP child)
{
	int fail = so_TaskInformation_add_OutputFilePath(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add OutputFilePath to TaskInformation");
	}
	return(R_NilValue);
}
SEXP r_so_TaskInformation_remove_OutputFilePath(SEXP self, SEXP index)
{
	int fail = so_TaskInformation_remove_OutputFilePath(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove OutputFilePath from TaskInformation");
	}
	return(R_NilValue);
}
SEXP r_so_TaskInformation_create_OutputFilePath(SEXP self)
{
	so_ExternalFile *child = so_TaskInformation_create_OutputFilePath(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_TaskInformation_get_RunTime(SEXP self)
{
	double *child = so_TaskInformation_get_RunTime(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_TaskInformation_set_RunTime(SEXP self, SEXP child)
{
	so_TaskInformation_set_RunTime(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}


SEXP r_so_TaskInformation_get_NumberChains(SEXP self)
{
	int *child = so_TaskInformation_get_NumberChains(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_INTEGER(1));
	INTEGER(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_TaskInformation_set_NumberChains(SEXP self, SEXP child)
{
	so_TaskInformation_set_NumberChains(R_ExternalPtrAddr(self), INTEGER(child));
	return R_NilValue;
}


SEXP r_so_TaskInformation_get_NumberIterations(SEXP self)
{
	int *child = so_TaskInformation_get_NumberIterations(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_INTEGER(1));
	INTEGER(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_TaskInformation_set_NumberIterations(SEXP self, SEXP child)
{
	so_TaskInformation_set_NumberIterations(R_ExternalPtrAddr(self), INTEGER(child));
	return R_NilValue;
}


