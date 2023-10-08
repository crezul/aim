#pragma once

// No thread-safe
template <typename T> class Singleton {
public:
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

  static T &Instance() {
    static T instance; // (1)
    return instance;
  }

protected:
  Singleton() = default;
  ~Singleton() = default;
};
