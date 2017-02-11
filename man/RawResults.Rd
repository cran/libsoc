\name{so_RawResults}
\alias{so_RawResults}
\title{so_RawResults reference class}
\description{
	Reference Class for the SO/SOBlock/RawResults element of a PharmML-SO data structure
}
\section{Methods}{
so_RawResults$new() - Create a new empty so_RawResults object\cr
so_RawResults$add_DataFile(object) - Add a DataFile\cr
so_RawResults$remove_DataFile(object, i) - Remove the DataFile having index i\cr
so_RawResults$add_GraphicsFile(object) - Add a GraphicsFile\cr
so_RawResults$remove_GraphicsFile(object, i) - Remove the GraphicsFile having index i\cr
}
\section{Fields}{
$DataFile - A list of data.frames\cr
$GraphicsFile - A list of \link{so_ExternalFile} objects\cr
}
\keyword{so_RawResults}
