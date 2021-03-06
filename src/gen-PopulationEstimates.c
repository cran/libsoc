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

SEXP r_so_PopulationEstimates_new()
{
	so_PopulationEstimates *obj = so_PopulationEstimates_new();
	if (!obj) {
		error("Failed to create so_PopulationEstimates object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_PopulationEstimates_copy(SEXP self)
{
	so_PopulationEstimates *obj = so_PopulationEstimates_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_PopulationEstimates object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_PopulationEstimates_free(SEXP self)
{
	so_PopulationEstimates_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_PopulationEstimates_ref(SEXP self)
{
	so_PopulationEstimates_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_PopulationEstimates_unref(SEXP self)
{
	so_PopulationEstimates_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_PopulationEstimates_get_MLE(SEXP self)
{
	so_Table *child = so_PopulationEstimates_get_MLE(R_ExternalPtrAddr(self));
	SEXP result = table2df(child);
	return result;
}

SEXP r_so_PopulationEstimates_set_MLE(SEXP self, SEXP child)
{
	so_Table *table = df2table(child);
	so_PopulationEstimates_set_MLE(R_ExternalPtrAddr(self), table);
	return R_NilValue;
}

SEXP r_so_PopulationEstimates_create_MLE(SEXP self)
{
	so_Table *child = so_PopulationEstimates_create_MLE(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_PopulationEstimates_get_Bayesian(SEXP self)
{
	so_Bayesian *child = so_PopulationEstimates_get_Bayesian(R_ExternalPtrAddr(self));
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_PopulationEstimates_set_Bayesian(SEXP self, SEXP child)
{
	so_PopulationEstimates_set_Bayesian(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	return R_NilValue;
}

SEXP r_so_PopulationEstimates_create_Bayesian(SEXP self)
{
	so_Bayesian *child = so_PopulationEstimates_create_Bayesian(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_PopulationEstimates_get_OtherMethod(SEXP self)
{
	so_OtherMethod *child = so_PopulationEstimates_get_OtherMethod(R_ExternalPtrAddr(self));
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_PopulationEstimates_set_OtherMethod(SEXP self, SEXP child)
{
	so_PopulationEstimates_set_OtherMethod(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	return R_NilValue;
}

SEXP r_so_PopulationEstimates_create_OtherMethod(SEXP self)
{
	so_OtherMethod *child = so_PopulationEstimates_create_OtherMethod(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

