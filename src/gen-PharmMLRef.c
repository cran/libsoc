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

SEXP r_so_PharmMLRef_new()
{
	so_PharmMLRef *obj = so_PharmMLRef_new();
	if (!obj) {
		error("Failed to create so_PharmMLRef object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_PharmMLRef_copy(SEXP self)
{
	so_PharmMLRef *obj = so_PharmMLRef_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_PharmMLRef object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_PharmMLRef_free(SEXP self)
{
	so_PharmMLRef_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_PharmMLRef_ref(SEXP self)
{
	so_PharmMLRef_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_PharmMLRef_unref(SEXP self)
{
	so_PharmMLRef_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_PharmMLRef_get_Description(SEXP self)
{
	char *child = so_PharmMLRef_get_Description(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_STRING(1));
	SET_STRING_ELT(result, 0, mkChar(child));
	UNPROTECT(1);
	return result;
}

SEXP r_so_PharmMLRef_set_Description(SEXP self, SEXP child)
{
	int fail = so_PharmMLRef_set_Description(R_ExternalPtrAddr(self), (char *) CHAR(STRING_ELT(child, 0)));
	if (fail) {
		error("so_PharmMLRef_set_Description failed");
	}
	return R_NilValue;
}


SEXP r_so_PharmMLRef_get_name(SEXP self)
{
	char *value = so_PharmMLRef_get_name(R_ExternalPtrAddr(self));

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

SEXP r_so_PharmMLRef_set_name(SEXP self, SEXP string)
{
	char *c_string = (char *) CHAR(STRING_ELT(string, 0));
	int fail = so_PharmMLRef_set_name(R_ExternalPtrAddr(self), c_string);
	if (fail) {
		error("so_PharmMLRef_set_name failed");
	}

	return R_NilValue;
}

SEXP r_so_PharmMLRef_get_id(SEXP self)
{
	char *value = so_PharmMLRef_get_id(R_ExternalPtrAddr(self));

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

SEXP r_so_PharmMLRef_set_id(SEXP self, SEXP string)
{
	char *c_string = (char *) CHAR(STRING_ELT(string, 0));
	int fail = so_PharmMLRef_set_id(R_ExternalPtrAddr(self), c_string);
	if (fail) {
		error("so_PharmMLRef_set_id failed");
	}

	return R_NilValue;
}

