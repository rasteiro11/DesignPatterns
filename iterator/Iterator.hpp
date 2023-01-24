#pragma once

template <typename T> class Iterator {
public:
  virtual bool has_next() = 0;
  virtual T next() = 0;
};
