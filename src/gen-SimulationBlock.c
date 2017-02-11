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

SEXP r_so_SimulationBlock_new()
{
	so_SimulationBlock *obj = so_SimulationBlock_new();
	if (!obj) {
		error("Failed to create so_SimulationBlock object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_copy(SEXP self)
{
	so_SimulationBlock *obj = so_SimulationBlock_copy(R_ExternalPtrAddr(self));
	if (!obj) {
		error("Failed to copy so_SimulationBlock object");
	}
	return R_MakeExternalPtr(obj, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_free(SEXP self)
{
	so_SimulationBlock_free(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_SimulationBlock_ref(SEXP self)
{
	so_SimulationBlock_ref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_SimulationBlock_unref(SEXP self)
{
	so_SimulationBlock_unref(R_ExternalPtrAddr(self));
	return R_NilValue;
}

SEXP r_so_SimulationBlock_get_SimulatedProfiles(SEXP self, SEXP index)
{
	so_SimulationSubType *child = so_SimulationBlock_get_SimulatedProfiles(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_get_number_of_SimulatedProfiles(SEXP self)
{
	int number = so_SimulationBlock_get_number_of_SimulatedProfiles(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_SimulationBlock_add_SimulatedProfiles(SEXP self, SEXP child)
{
	int fail = so_SimulationBlock_add_SimulatedProfiles(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add SimulatedProfiles to SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_remove_SimulatedProfiles(SEXP self, SEXP index)
{
	int fail = so_SimulationBlock_remove_SimulatedProfiles(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove SimulatedProfiles from SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_create_SimulatedProfiles(SEXP self)
{
	so_SimulationSubType *child = so_SimulationBlock_create_SimulatedProfiles(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_IndivParameters(SEXP self, SEXP index)
{
	so_SimulationSubType *child = so_SimulationBlock_get_IndivParameters(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_get_number_of_IndivParameters(SEXP self)
{
	int number = so_SimulationBlock_get_number_of_IndivParameters(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_SimulationBlock_add_IndivParameters(SEXP self, SEXP child)
{
	int fail = so_SimulationBlock_add_IndivParameters(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add IndivParameters to SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_remove_IndivParameters(SEXP self, SEXP index)
{
	int fail = so_SimulationBlock_remove_IndivParameters(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove IndivParameters from SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_create_IndivParameters(SEXP self)
{
	so_SimulationSubType *child = so_SimulationBlock_create_IndivParameters(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_RandomEffects(SEXP self, SEXP index)
{
	so_SimulationSubType *child = so_SimulationBlock_get_RandomEffects(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_get_number_of_RandomEffects(SEXP self)
{
	int number = so_SimulationBlock_get_number_of_RandomEffects(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_SimulationBlock_add_RandomEffects(SEXP self, SEXP child)
{
	int fail = so_SimulationBlock_add_RandomEffects(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add RandomEffects to SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_remove_RandomEffects(SEXP self, SEXP index)
{
	int fail = so_SimulationBlock_remove_RandomEffects(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove RandomEffects from SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_create_RandomEffects(SEXP self)
{
	so_SimulationSubType *child = so_SimulationBlock_create_RandomEffects(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_Covariates(SEXP self, SEXP index)
{
	so_SimulationSubType *child = so_SimulationBlock_get_Covariates(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_get_number_of_Covariates(SEXP self)
{
	int number = so_SimulationBlock_get_number_of_Covariates(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_SimulationBlock_add_Covariates(SEXP self, SEXP child)
{
	int fail = so_SimulationBlock_add_Covariates(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add Covariates to SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_remove_Covariates(SEXP self, SEXP index)
{
	int fail = so_SimulationBlock_remove_Covariates(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove Covariates from SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_create_Covariates(SEXP self)
{
	so_SimulationSubType *child = so_SimulationBlock_create_Covariates(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_Regressors(SEXP self, SEXP index)
{
	so_SimulationSubType *child = so_SimulationBlock_get_Regressors(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_get_number_of_Regressors(SEXP self)
{
	int number = so_SimulationBlock_get_number_of_Regressors(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_SimulationBlock_add_Regressors(SEXP self, SEXP child)
{
	int fail = so_SimulationBlock_add_Regressors(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add Regressors to SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_remove_Regressors(SEXP self, SEXP index)
{
	int fail = so_SimulationBlock_remove_Regressors(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove Regressors from SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_create_Regressors(SEXP self)
{
	so_SimulationSubType *child = so_SimulationBlock_create_Regressors(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_PopulationParameters(SEXP self, SEXP index)
{
	so_SimulationSubType *child = so_SimulationBlock_get_PopulationParameters(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_get_number_of_PopulationParameters(SEXP self)
{
	int number = so_SimulationBlock_get_number_of_PopulationParameters(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_SimulationBlock_add_PopulationParameters(SEXP self, SEXP child)
{
	int fail = so_SimulationBlock_add_PopulationParameters(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add PopulationParameters to SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_remove_PopulationParameters(SEXP self, SEXP index)
{
	int fail = so_SimulationBlock_remove_PopulationParameters(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove PopulationParameters from SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_create_PopulationParameters(SEXP self)
{
	so_SimulationSubType *child = so_SimulationBlock_create_PopulationParameters(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_Dosing(SEXP self, SEXP index)
{
	so_SimulationSubType *child = so_SimulationBlock_get_Dosing(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_get_number_of_Dosing(SEXP self)
{
	int number = so_SimulationBlock_get_number_of_Dosing(R_ExternalPtrAddr(self));
	SEXP r_int = PROTECT(NEW_INTEGER(1));
	INTEGER(r_int)[0] = number;
	UNPROTECT(1);
	return r_int;
}
SEXP r_so_SimulationBlock_add_Dosing(SEXP self, SEXP child)
{
	int fail = so_SimulationBlock_add_Dosing(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	if (fail) {
		error("Failed to add Dosing to SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_remove_Dosing(SEXP self, SEXP index)
{
	int fail = so_SimulationBlock_remove_Dosing(R_ExternalPtrAddr(self), INTEGER(index)[0]);
	if (fail) {
		error("Failed to remove Dosing from SimulationBlock");
	}
	return(R_NilValue);
}
SEXP r_so_SimulationBlock_create_Dosing(SEXP self)
{
	so_SimulationSubType *child = so_SimulationBlock_create_Dosing(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_RawResultsFile(SEXP self)
{
	so_ExternalFile *child = so_SimulationBlock_get_RawResultsFile(R_ExternalPtrAddr(self));
	SEXP result = R_MakeExternalPtr(child, R_NilValue, R_NilValue);
	return result;
}

SEXP r_so_SimulationBlock_set_RawResultsFile(SEXP self, SEXP child)
{
	so_SimulationBlock_set_RawResultsFile(R_ExternalPtrAddr(self), R_ExternalPtrAddr(child));
	return R_NilValue;
}

SEXP r_so_SimulationBlock_create_RawResultsFile(SEXP self)
{
	so_ExternalFile *child = so_SimulationBlock_create_RawResultsFile(R_ExternalPtrAddr(self));
	return R_MakeExternalPtr(child, R_NilValue, R_NilValue);
}

SEXP r_so_SimulationBlock_get_replicate(SEXP self)
{
	int *value = so_SimulationBlock_get_replicate(R_ExternalPtrAddr(self));

	SEXP result;

	if (value) {
		result = PROTECT(NEW_INTEGER(1));
		INTEGER(result)[0] = *value;

		UNPROTECT(1);
	} else {
		result = R_NilValue;
	}
	return result;
}

SEXP r_so_SimulationBlock_set_replicate(SEXP self, SEXP string)
{
	so_SimulationBlock_set_replicate(R_ExternalPtrAddr(self), INTEGER(string));

	return R_NilValue;
}
