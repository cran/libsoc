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

SEXP r_so_MissingData_new()
{
	so_MissingData *obj = so_MissingData_new();
	if (!obj) {
		error("Failed to create so_MissingData object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_MissingData_copy(SEXP self)
{
	so_MissingData *obj = so_MissingData_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_MissingData object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_MissingData_free(SEXP self)
{
	so_MissingData_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_MissingData_ref(SEXP self)
{
	so_MissingData_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_MissingData_unref(SEXP self)
{
	so_MissingData_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_MissingData_get_dataCode(SEXP self)
{
	char *value = so_MissingData_get_dataCode(R_ExternalPtrAddr(self));

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

SEXP r_so_MissingData_set_dataCode(SEXP self, SEXP string)
{
	char *c_string = (char *) CHAR(STRING_ELT(string, 0));
	int fail = so_MissingData_set_dataCode(R_ExternalPtrAddr(self), c_string);
	if (fail) {
		error("so_MissingData_set_dataCode failed");
	}

	return R_NilValue;
}

SEXP r_so_MissingData_get_missingDataType(SEXP self)
{
	char *value = so_MissingData_get_missingDataType(R_ExternalPtrAddr(self));

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

SEXP r_so_MissingData_set_missingDataType(SEXP self, SEXP string)
{
	char *c_string = (char *) CHAR(STRING_ELT(string, 0));
	int fail = so_MissingData_set_missingDataType(R_ExternalPtrAddr(self), c_string);
	if (fail) {
		error("so_MissingData_set_missingDataType failed");
	}

	return R_NilValue;
}

