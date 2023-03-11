// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 0) {
    return 1;
  } else {
    return pown(value, n - 1) * value;
  }
}

uint64_t fact(uint16_t n) {
  if (n == 1 || n == 0) {
    return 1;
  } else {
    return fact(n - 1) * n;
  }
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double exponent = 0;
  for (int i = 0; i < count; i++) {
    exponent += calcItem(x, i);
  }
  return exponent;
}

double sinn(double x, uint16_t count) {
  double sinnn = 0;
  while (count > 0) {
    sinnn = sinnn + (pown(-1, count - 1)) * calcItem(x, (2 * count - 1));
    count--;
  }
  return sinnn;
}

double cosn(double x, uint16_t count) {
  double cosnn = 0;
  while (count > 0) {
    cosnn = cosnn + (pown(-1, count - 1)) * calcItem(x, (2 * count - 2));
    count--;
  }
  return cosnn;
}
