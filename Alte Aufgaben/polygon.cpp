#include <iomanip>
#include <iostream>
#include <math.h>
#include <vector>

const double pi = M_PI;

struct Point {
  double x;
  double y;
};

struct Polygon {
  std::vector<Point> polygon;
};

void print_poly(Polygon p) {
  for (unsigned int i = 0; i < p.polygon.size(); ++i) {
    std::cout << "(" << p.polygon[i].x;
    std::cout << "|" << p.polygon[i].y << ")";
    std::cout << std::endl;
  }
}

Polygon construct(std::vector<double> &x, std::vector<double> &y) {
  if (x.size() != y.size()) {
    std::cout << "Ungültige Eingabe erkannnt!" << std::endl;
    std::cout << "Keine Eindeutige Zuordnung von x <-> y moeglich!"
              << std::endl;
    unsigned int pop_back_counter = 0;
    if (x.size() < y.size()) {
      while (x.size() < y.size()) {
        y.pop_back();
        pop_back_counter++;
      }
      std::cout
          << "Es wurden " << pop_back_counter
          << " Elemente aus y entfernt da für sie kein x wert vorhanden war!"
          << std::endl;
    } else if (y.size() < x.size()) {
      while (y.size() < x.size()) {
        x.pop_back();
        pop_back_counter++;
      }
      std::cout
          << "Es wurden " << pop_back_counter
          << " Elemente aus x entfernt da für sie kein y wert vorhanden war!"
          << std::endl;
    }
  }
  Polygon poly;

  for (unsigned int i = 0; i < x.size(); ++i) {
    Point p;
    p.x = x[i];
    p.y = y[i];
    poly.polygon.push_back(p);
  }
  return poly;
}

double volume(const Polygon &polygon) {
  if (polygon.polygon.size() < 3)
    return 0.0;
  int n = polygon.polygon.size();
  double sum = 0;
  double a = 0;
  for (int i = 0; i < n; ++i) {
    sum += ((polygon.polygon[i].x * polygon.polygon[(i + 1)].y) -
            (polygon.polygon[i].y * polygon.polygon[(i + 1)].x));
    // std::cout << i << ": "<< sum << std::endl;
  }
  a = (sum / 2);
  return a;
}

Polygon generate(int n) {
  std::vector<double> x;
  std::vector<double> y;
  for (int i = 0; i <= n; i++) {
    x.push_back(std::cos((i * 2 * pi) / n));
    y.push_back(std::sin((i * 2 * pi) / n));
  }
  Polygon p = construct(x, y);
  return p;
}

int main(int argc, char const *argv[]) {
  std::cout << std::fixed;
  std::cout << std::setprecision(3);

  std::vector<double> x = {{0, 2, 2, 0}};
  std::vector<double> y = {{1, 0, 2, 2}};
  std::vector<double> x1 = {{0, 2, 2, 0}};
  std::vector<double> y1 = {{2, 2, 0, 0}};
  Polygon p = construct(x, y);
  Polygon p1 = construct(x1, y1);
  Polygon p2 = generate(4);

  std::cout << "A(p)  = " << volume(p) << std::endl;
  std::cout << "A(p1) = " << volume(p1) << std::endl;

  for (int i = 0; i <= 10; ++i) {
    std::cout << "A eines " << i << "-Ecks = " << volume(generate(i))
              << std::endl;
  }

  return 0;
}