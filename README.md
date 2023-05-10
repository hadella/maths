# maths

See the [Documentaton](https://hadella.github.io/maths/)

## Build Requirements

In order to build the *maths* library, test code, examples, and documentation, a number of packages
are required.

```
sudo apt update
sudo apt install cmake doxygen
```

Doxygen documentation is fine, but we can spruce up the styling using sphinx and breathe!

```
pip install sphinx_rtd_theme
pip install breathe
```

The `tests` folder uses the [criterion](https://github.com/Snaipe/Criterion) unit testing
framework.

```
sudo apt update
sudo apt install libcriterion-dev
```

## Building

Once we've installed all the build requirements, the actual building is easy. In this case, we
make a `build` folder and perform an out-of-source build. The build script will automatically
update any documentation in the `docs` folder if the documentation changes.

```
mkdir build
cd build
cmake ..
make
```

## Unit Tests

Running the unit tests is simple.

```
ctest
```

## Errata

See the [criterion docs](https://criterion.readthedocs.io/en/master/index.html).

> This project demonstrates how to automatically generate nice looking C documentation using:
> Doxygen, Sphinx, and Breathe.