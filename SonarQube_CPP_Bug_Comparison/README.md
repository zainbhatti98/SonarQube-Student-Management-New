# SonarQube C++ Bug Comparison

This small project contains two versions of the same C++ example:

- `Before_Bug.cpp`: contains a null-pointer dereference.
- `After_Bug.cpp`: fixes the issue by using a valid initialized variable.

## Compile

With a C++ compiler such as g++:

```bash
g++ Before_Bug.cpp -o before_bug
g++ After_Bug.cpp -o after_bug
```

Run only the fixed version normally:

```bash
./after_bug
```

The buggy version may crash because it dereferences a null pointer.

Note: SonarQube's ability to analyze C++ depends on the installed edition,
analyzer, and configured build-analysis workflow. This is a small code
comparison example, not a complete Student Management application.
