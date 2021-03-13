#include<stdio.h>
enum name_tag {
  BLUEBERRY,
  BANANA,
  PINEAPPLE,
  WATERMELON
};
typedef enum name_tag name_t;

struct fruit_tag {
  name_t name;
  double size;
};
typedef struct fruit_tag fruit_t;

fruit_t getBigger(fruit_t f, double d) {
  f.size += d;
  return f;
}

int main(void) {

  double d = 4.669;
printf("My number is %.2f.",d);
  return 0;
}
