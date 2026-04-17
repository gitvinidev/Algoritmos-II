#include <stdio.h>

int
main ()
{
  float Dinheiro; 
  int s = 0, ms = 0, v = 0, t = 0, f = 0, w = 0, o = 0, mo = 0, msc = 0, tc = 0, fc = 0, oc = 0;

  scanf ("%f", &Dinheiro);


  if (Dinheiro > 100)
    {
      while (Dinheiro >= 100)
	{
	  Dinheiro = Dinheiro - 100;
	  s++;

	}
      printf ("%d nota(s) de 100 reais\n", s);
    }

  if (Dinheiro > 50)
    {
      while (Dinheiro >= 50)
	{
	  Dinheiro = Dinheiro - 50;
	  ms++;
	}
      printf ("%d nota(s) de 50 reais\n", ms);
    }

  if (Dinheiro > 20)
    {
      while (Dinheiro >= 20)
	{
	  Dinheiro = Dinheiro - 20;
	  v++;
	}
      printf ("%d nota(s) de 20 reais\n", v);
    }

  if (Dinheiro > 10)
    {
      while (Dinheiro >= 10)
	{
	  Dinheiro = Dinheiro - 10;
	  t++;
	}
      printf ("%d nota(s) de 10 reais\n", t);
    }

  if (Dinheiro > 5)
    {
      while (Dinheiro >= 5)
	{
	  Dinheiro = Dinheiro - 5;
	  f++;
	}
      printf ("%d nota(s) de 5 reais\n", f);
    }

  if (Dinheiro > 2)
    {
      while (Dinheiro >= 2)
	{
	  Dinheiro = Dinheiro - 2;
	  w++;
	}
      printf ("%d nota(s) de 2 reais\n", w);
    }

  if (Dinheiro > 1)
    {
      while (Dinheiro >= 1)
	{
	  Dinheiro = Dinheiro - 1;
	  o++;
	}
      printf ("%d moeda(s) de 1 real\n", o);
    }


  if (Dinheiro > 0.5)
    {
      while (Dinheiro >= 0.5)
	{
	  Dinheiro = Dinheiro - 0.5;
	  mo++;
	}
      printf ("%d moeda(s) de 50 centavos\n", mo);
    }

  if (Dinheiro > 0.25)
    {
      while (Dinheiro >= 0.25)
	{
	  Dinheiro = Dinheiro - 0.25;
	  msc++;
	}
      printf ("%d moeda(s) de 25 centavos\n", msc);
    }

  if (Dinheiro > 0.10)
    {
      while (Dinheiro >= 0.10)
	{
	  Dinheiro = Dinheiro - 0.10;
	  tc++;
	}
      printf ("%d moeda(s) de 10 centavos\n", tc);
    }

  if (Dinheiro > 0.05)
    {
      while (Dinheiro >= 0.05)
	{
	  Dinheiro = Dinheiro - 0.05;
	  fc++;
	}
      printf ("%d moeda(s) de 5 centavos\n", fc);
    }

  if (Dinheiro > 0.001)
    {
      while (Dinheiro >= 0.001)
	{	
	  Dinheiro = Dinheiro - 0.01;
	  oc++;
	}
		  switch (oc)
	  {
	  case 4:
	  printf ("4 moeda(s) de 1 centavo\n");
	  break;
	  
	  case 3:
	  printf ("3 moeda(s) de 1 centavo\n");
	  break;
	  
	  case 2:
	  printf ("%d moeda(s) de 1 centavo\n", oc);
	  break;
	  
	  case 1:
	  printf ("1 moeda(s) de 1 centavo\n");
	  break;
	  }
    }
    

	  
      
    



  return 0;
}


