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

SEXP r_so_TargetToolMessages_new()
{
	so_TargetToolMessages *obj = so_TargetToolMessages_new();
	if (!obj) {
		error("Failed to create so_TargetToolMessages object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_TargetToolMessages_copy(SEXP self)
{
	so_TargetToolMessages *obj = so_TargetToolMessages_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_TargetToolMessages object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_TargetToolMessages_free(SEXP self)
{
	so_TargetToolMessages_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_TargetToolMessages_ref(SEXP self)
{
	so_TargetToolMessages_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_TargetToolMessages_unref(SEXP self)
{
	so_TargetToolMessages_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_TargetToolMessages_get_Termination(SEXP self)
{
	char *child = so_TargetToolMessages_get_Termination(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_STRING(1));
	SET_STRING_ELT(result, 0, mkChar(child));
	UNPROTECT(1);
	return result;
}

SEXP r_so_TargetToolMessages_set_Termination(SEXP self, SEXP child)
{
	int fail = so_TargetToolMessages_set_Termination(R_ExternalPtrAddr(self), (char *) CHAR(STRING_ELT(child, 0)));
	if (fail) {
		error("so_TargetToolMessages_set_Termination failed");
	}
	return R_NilValue;
}


SEXP r_so_TargetToolMessages_get_Warnings(SEXP self)
{
	char *child = so_TargetToolMessages_get_Warnings(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_STRING(1));
	SET_STRING_ELT(result, 0, mkChar(child));
	UNPROTECT(1);
	return result;
}

SEXP r_so_TargetToolMessages_set_Warnings(SEXP self, SEXP child)
{
	int fail = so_TargetToolMessages_set_Warnings(R_ExternalPtrAddr(self), (char *) CHAR(STRING_ELT(child, 0)));
	if (fail) {
		error("so_TargetToolMessages_set_Warnings failed");
	}
	return R_NilValue;
}


SEXP r_so_TargetToolMessages_get_Errors(SEXP self)
{
	char *child = so_TargetToolMessages_get_Errors(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_STRING(1));
	SET_STRING_ELT(result, 0, mkChar(child));
	UNPROTECT(1);
	return result;
}

SEXP r_so_TargetToolMessages_set_Errors(SEXP self, SEXP child)
{
	int fail = so_TargetToolMessages_set_Errors(R_ExternalPtrAddr(self), (char *) CHAR(STRING_ELT(child, 0)));
	if (fail) {
		error("so_TargetToolMessages_set_Errors failed");
	}
	return R_NilValue;
}


SEXP r_so_TargetToolMessages_get_ElapsedTime(SEXP self)
{
	double *child = so_TargetToolMessages_get_ElapsedTime(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_TargetToolMessages_set_ElapsedTime(SEXP self, SEXP child)
{
	so_TargetToolMessages_set_ElapsedTime(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}


SEXP r_so_TargetToolMessages_get_OutputFilePath(SEXP self)
{
	so_ExternalFile *child = so_TargetToolMessages_get_OutputFilePath(R_ExternalPtrAddr(self));
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_TargetToolMessages_set_OutputFilePath(SEXP self, SEXP child)
{
	so_TargetToolMessages_set_OutputFilePath(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	return R_NilValue;
}

SEXP r_so_TargetToolMessages_create_OutputFilePath(SEXP self)
{
	so_ExternalFile *child = so_TargetToolMessages_create_OutputFilePath(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_TargetToolMessages_get_ChainsNumber(SEXP self)
{
	double *child = so_TargetToolMessages_get_ChainsNumber(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_TargetToolMessages_set_ChainsNumber(SEXP self, SEXP child)
{
	so_TargetToolMessages_set_ChainsNumber(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}


SEXP r_so_TargetToolMessages_get_IterationNumber(SEXP self)
{
	double *child = so_TargetToolMessages_get_IterationNumber(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_TargetToolMessages_set_IterationNumber(SEXP self, SEXP child)
{
	so_TargetToolMessages_set_IterationNumber(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}


