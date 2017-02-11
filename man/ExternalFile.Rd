\name{so_ExternalFile}
\alias{so_ExternalFile}
\title{so_ExternalFile reference class}
\description{
	Reference Class for the ExternalFile element of a PharmML-SO data structure
}
\section{Methods}{
so_ExternalFile$new() - Create a new empty so_ExternalFile object\cr
so_ExternalFile$add_MissingData(object) - Add a MissingData\cr
so_ExternalFile$remove_MissingData(object, i) - Remove the MissingData having index i\cr
}
\section{Fields}{
$Description - A character string\cr
$path - A character string\cr
$format - A character string\cr
$delimiter - A character string\cr
$MissingData - A list of \link{so_MissingData} objects\cr
$oid - A character string attribute\cr
}
\keyword{so_ExternalFile}
