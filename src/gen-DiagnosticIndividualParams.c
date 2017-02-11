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

SEXP r_so_DiagnosticIndividualParams_new()
{
	so_DiagnosticIndividualParams *obj = so_DiagnosticIndividualParams_new();
	if (!obj) {
		error("Failed to create so_DiagnosticIndividualParams object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_DiagnosticIndividualParams_copy(SEXP self)
{
	so_DiagnosticIndividualParams *obj = so_DiagnosticIndividualParams_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_DiagnosticIndividualParams object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_DiagnosticIndividualParams_free(SEXP self)
{
	so_DiagnosticIndividualParams_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_DiagnosticIndividualParams_ref(SEXP self)
{
	so_DiagnosticIndividualParams_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_DiagnosticIndividualParams_unref(SEXP self)
{
	so_DiagnosticIndividualParams_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_DiagnosticIndividualParams_get_RandomEffects(SEXP self)
{
	so_Table *child = so_DiagnosticIndividualParams_get_RandomEffects(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_DiagnosticIndividualParams_set_RandomEffects(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_DiagnosticIndividualParams_set_RandomEffects(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_DiagnosticIndividualParams_create_RandomEffects(SEXP self)
{
	so_Table *child = so_DiagnosticIndividualParams_create_RandomEffects(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_DiagnosticIndividualParams_get_IndivParamsCovariates(SEXP self)
{
	so_Table *child = so_DiagnosticIndividualParams_get_IndivParamsCovariates(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_DiagnosticIndividualParams_set_IndivParamsCovariates(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_DiagnosticIndividualParams_set_IndivParamsCovariates(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_DiagnosticIndividualParams_create_IndivParamsCovariates(SEXP self)
{
	so_Table *child = so_DiagnosticIndividualParams_create_IndivParamsCovariates(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_DiagnosticIndividualParams_get_DistributionIndivParams(SEXP self)
{
	so_Table *child = so_DiagnosticIndividualParams_get_DistributionIndivParams(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_DiagnosticIndividualParams_set_DistributionIndivParams(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_DiagnosticIndividualParams_set_DistributionIndivParams(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_DiagnosticIndividualParams_create_DistributionIndivParams(SEXP self)
{
	so_Table *child = so_DiagnosticIndividualParams_create_DistributionIndivParams(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

