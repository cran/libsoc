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

SEXP r_so_Message_new()
{
	so_Message *obj = so_Message_new();
	if (!obj) {
		error("Failed to create so_Message object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_Message_copy(SEXP self)
{
	so_Message *obj = so_Message_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_Message object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_Message_free(SEXP self)
{
	so_Message_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_Message_ref(SEXP self)
{
	so_Message_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_Message_unref(SEXP self)
{
	so_Message_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_Message_get_Toolname(SEXP self)
{
	char *child = so_Message_get_Toolname(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_STRING(1));
	SET_STRING_ELT(result, 0, mkChar(child));
	UNPROTECT(1);
	return result;
}

SEXP r_so_Message_set_Toolname(SEXP self, SEXP child)
{
	int fail = so_Message_set_Toolname(R_ExternalPtrAddr(self), (char *) CHAR(STRING_ELT(child, 0)));
	if (fail) {
		error("so_Message_set_Toolname failed");
	}
	return R_NilValue;
}


SEXP r_so_Message_get_Name(SEXP self)
{
	char *child = so_Message_get_Name(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_STRING(1));
	SET_STRING_ELT(result, 0, mkChar(child));
	UNPROTECT(1);
	return result;
}

SEXP r_so_Message_set_Name(SEXP self, SEXP child)
{
	int fail = so_Message_set_Name(R_ExternalPtrAddr(self), (char *) CHAR(STRING_ELT(child, 0)));
	if (fail) {
		error("so_Message_set_Name failed");
	}
	return R_NilValue;
}


SEXP r_so_Message_get_Content(SEXP self)
{
	char *child = so_Message_get_Content(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_STRING(1));
	SET_STRING_ELT(result, 0, mkChar(child));
	UNPROTECT(1);
	return result;
}

SEXP r_so_Message_set_Content(SEXP self, SEXP child)
{
	int fail = so_Message_set_Content(R_ExternalPtrAddr(self), (char *) CHAR(STRING_ELT(child, 0)));
	if (fail) {
		error("so_Message_set_Content failed");
	}
	return R_NilValue;
}


SEXP r_so_Message_get_Severity(SEXP self)
{
	int *child = so_Message_get_Severity(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_INTEGER(1));
	INTEGER(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_Message_set_Severity(SEXP self, SEXP child)
{
	so_Message_set_Severity(R_ExternalPtrAddr(self), INTEGER(child));
	return R_NilValue;
}


SEXP r_so_Message_get_type(SEXP self)
{
	char *value = so_Message_get_type(R_ExternalPtrAddr(self));

	SEXP result;

	if (value) {
		result = PROTECT(NEW_STRING(1));
		SET_STRING_ELT(result, 0, mkChar(value));

		UNPROTECT(1);
	} else {
		result = R_NilValue;
	}
	return result;
}

SEXP r_so_Message_set_type(SEXP self, SEXP string)
{
	char *c_string = (char *) CHAR(STRING_ELT(string, 0));
	int fail = so_Message_set_type(R_ExternalPtrAddr(self), c_string);
	if (fail) {
		error("so_Message_set_type failed");
	}

	return R_NilValue;
}

