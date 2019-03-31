
convolve <- function(a, b) {
    .Call("convolve2", a, b, package="pkgWithoutRcpp")
}
