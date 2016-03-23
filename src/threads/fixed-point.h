#include <stddef.h>

#define fixed_f 16384

typedef long fixed_point;

static int round_down(fixed_point fp)
{
  return fp/fixed_f;
}

static int round_nearest(fixed_point fp)
{
  if(fp>=0)
    {
      return (fp + fixed_f/2)/fixed_f;
    }
  else
    {
      return (fp - fixed_f/2)/fixed_f;
    }
}

static fixed_point to_fp(int i)
{
  return (i * fixed_f);
}

static fixed_point divide(int num, int denom)
{
  return ((long) num) * fixed_f / denom;
}

static fixed_point multiply(fixed_point fp1, fixed_point fp2)
{
  return ((long) fp1) * fp2 / fixed_f;
}
