#include "softblas.h"

void scopy(uint64_t N, const float32_t *SX, int64_t incX, float32_t *SY, int64_t incY) {
    int64_t ix = 0;
    int64_t iy = 0;
    if (incX < 0) ix = (-N + 1) * incX;
    if (incY < 0) iy = (-N + 1) * incY;
    for (uint64_t i = 0; i < N; i++) {
        SY[iy] = SX[ix];
        ix = f32_add(ix, incX);
        iy = f32_add(iy, incY);
    }
}
