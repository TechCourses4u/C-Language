 #include<stdio.h>
 #include<conio.h>
 main()
 {
      int a,b,c,d,e,f;
      clrscr();

      printf("Enter the value of A :");
      scanf("%d",&a);
      printf("Enter the value of B :");
      scanf("%d",&b);
      printf("Enter the value of C :");
      scanf("%d",&c);
      printf("Enter the value of D :");
      scanf("%d",&d);
      printf("Enter the value of E :");
      scanf("%d",&e);
      printf("Enter the value of F :");
      scanf("%d",&f);

      if(a>b)
      {
	   if(a>c)
	   {
		if(a>d)
		{
		     if(a>e)
		     {
			 if(a>f)
			 {
			     printf("A is Largest Number.. ");
			 }
			 else
			 {
			      printf("F is Largest Number..");
			 }
		     }
		     else
		     {
			 if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }
		     }
		}
		else
		{
		    if(d>e)
		    {
			 if(d>f)
			 {
			     printf("D is Largest Number..");
			 }
			 else
			 {
			      printf("F is Largest Number..");
			 }
		    }
		    else
		    {
			 if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }
		    }
		}
	   }
	   else
	   {
		 if(c>d)
		 {
		     if(c>e)
		     {
			  if(c>f)
			  {
			       printf("C is Largest Numeber..");
			  }
			  else
			  {
			       printf("F is Largest Number..");
			  }
		     }
		     else
		     {
			 if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }
		     }
		 }
		 else
		 {
			if(d>e)
		    {
			 if(d>f)
			 {
			     printf("D is Largest Number..");
			 }
			 else
			 {
			      printf("F is Largest Number..");
			 }
		    }
		    else
		    {
			 if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }
		    }
	     }
	   }
      }
      else
      {
	    if(b>c)
	    {
		 if(b>d)
		 {
		       if(b>e)
		       {
			  if(b>f)
			  {
			     printf("B is Largest Number..");
			  }
			  else
			  {
			     printf("F is Largest Number ..");
			  }
		       }
		       else
		       {
			    if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }
		       }
		 }
		 else
		 {
		    if(d>e)
		    {
			 if(d>f)
			 {
			     printf("D is Largest Number..");
			 }
			 else
			 {
			      printf("F is Largest Number..");
			 }
		    }
		    else
		    {
			 if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }
		    }
		 }
	    }
	    else
	    {
		   if(c>d)
		 {
		     if(c>e)
		     {
			  if(c>f)
			  {
			       printf("C is Largest Numeber..");
			  }
			  else
			  {
			       printf("F is Largest Number..");
			  }
		     }
		     else
		     {
			 if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }
		     }
		 }
		 else
		 {
		    if(d>e)
		    {
			 if(d>f)
			 {
			     printf("D is Largest Number..");
			 }
			 else
			 {
			      printf("F is Largest Number..");
			 }
		    }
		    else
		    {
			 if(e>f)
			 {
			     printf("E is Largest Number..");
			 }
			 else
			 {
			     printf("F is Largest Number..");
			 }


		}
      }

	      }
      }

   getch();
}
