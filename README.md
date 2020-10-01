# Templ

An example/reference project that runs static analysis, unit tests, source distributions and debian packages.

## Requirements

On Ubuntu 20.04, you will need to install the packages in the command below:

```
$ sudo apt install libgtest-dev clang-format clang-tidy
```

## Build

```
$ mkdir build
$ cd build
$ cmake ..
$ make              # Build code
$ make analyze      # Run static analysis
$ make test         # Run unit tests
$ make dist         # Create source distribution
$ make deb          # Create deb package
```

## License

See the `LICENSE` file for details.

