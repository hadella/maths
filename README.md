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

The `tests/` folder uses the [criterion](https://github.com/Snaipe/Criterion) unit testing
framework.

```
sudo apt update
sudo apt install libcriterion-dev
```

See the [criterion docs](https://criterion.readthedocs.io/en/master/index.html).