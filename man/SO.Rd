\name{so_SO}
\alias{so_SO}
\title{so_SO reference class}
\description{
	Reference Class for the SO element of a PharmML-SO data structure
}
\section{Methods}{
so_SO$new() - Create a new empty so_SO object\cr
so_SO$write(filename, pretty=TRUE) - Write an SO to file. Set pretty to FALSE to not get pretty printed xml\cr
so_SO$add_SOBlock(object) - Add a SOBlock\cr
so_SO$remove_SOBlock(object, i) - Remove the SOBlock having index i\cr
}
\section{Fields}{
$Description - A character string\cr
$PharmMLRef - A \link{so_PharmMLRef} object\cr
$SOBlock - A list of \link{so_SOBlock} objects\cr
$id - A character string attribute\cr
$metadataFile - A character string attribute\cr
}
\keyword{so_SO}
