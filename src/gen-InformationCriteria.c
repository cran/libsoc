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

SEXP r_so_InformationCriteria_new()
{
	so_InformationCriteria *obj = so_InformationCriteria_new();
	if (!obj) {
		error("Failed to create so_InformationCriteria object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_InformationCriteria_copy(SEXP self)
{
	so_InformationCriteria *obj = so_InformationCriteria_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_InformationCriteria object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_InformationCriteria_free(SEXP self)
{
	so_InformationCriteria_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_InformationCriteria_ref(SEXP self)
{
	so_InformationCriteria_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_InformationCriteria_unref(SEXP self)
{
	so_InformationCriteria_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_InformationCriteria_get_AIC(SEXP self)
{
	double *child = so_InformationCriteria_get_AIC(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_InformationCriteria_set_AIC(SEXP self, SEXP child)
{
	so_InformationCriteria_set_AIC(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}


SEXP r_so_InformationCriteria_get_BIC(SEXP self)
{
	double *child = so_InformationCriteria_get_BIC(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_InformationCriteria_set_BIC(SEXP self, SEXP child)
{
	so_InformationCriteria_set_BIC(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}


SEXP r_so_InformationCriteria_get_DIC(SEXP self)
{
	double *child = so_InformationCriteria_get_DIC(R_ExternalPtrAddr(self));
	if (!child) {
		return R_NilValue;
	}
	SEXP result;
	PROTECT(result = NEW_NUMERIC(1));
	REAL(result)[0] = *child;
	UNPROTECT(1);
	return result;
}

SEXP r_so_InformationCriteria_set_DIC(SEXP self, SEXP child)
{
	so_InformationCriteria_set_DIC(R_ExternalPtrAddr(self), REAL(child));
	return R_NilValue;
}


