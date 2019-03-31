
convolve <- function(a, b) {
    .Call("convolve7", a, b, package="badpkgWithoutRcpp")
}
