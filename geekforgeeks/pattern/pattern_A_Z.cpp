#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>

using namespace std ;
int i , j , k ;
void draw_a(int n , int font  )
{
	if(n==font||n==0)
		{
			for(i = 0 ; i < 2*font;i++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(i = 0 ; i < 2*font;i++)
			{
				if(i==0||i==2*font-1)
				cout<<"*";
			else
				cout<<" ";
			}
		}

}

void draw_b(int n , int font  )
{
	if(n==font||n==0||n==2*font-1)
		{
			for(i = 0 ; i < 2*font;i++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(i = 0 ; i < 2*font;i++)
			{
				if(i==0||i==2*font-1)
				cout<<"*";
			else
				cout<<" ";
			}
		}

}
void draw_c(int n , int font  )
{
		if(n==0||n==2*font-1)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			if(i!=0)
			cout<<" ";
		else cout<<"*"; 
		}

}
void draw_d(int n , int font  )
{
	if(n==0||n==2*font-1)
		{
			for(i = 0 ; i < 2*font;i++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(i = 0 ; i < 2*font;i++)
			{
				if(i==font/2||i==2*font-1)
				cout<<"*";
			else
				cout<<" ";
			}
		}
}

void draw_e(int n , int font  )
{

	if(n==0||n==2*font-1||n==font)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			if(i!=0)
			cout<<" ";
		else cout<<"*"; 
		}


		
}
void draw_f(int n , int font  )
{
	
	if(n==0||n==font)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			if(i!=0)
			cout<<" ";
		else cout<<"*"; 
		}
	
}
void draw_g(int n , int font  )
{
	if(n==0)
	for(i = 0 ; i< 2*font ;  i ++)
	{
		cout<<"*";	

	}
	else if (n==font)
	for(i = 0 ; i< 2*font ;  i ++)
	{
		if(i>=font||i==0)
		cout<<"*";
		else
		cout<<" ";	

	}
	else if (n==2*font-1)
	{for(i = 0 ; i< 2*font ;  i ++)
		if(i<=font||i==2*font-1)
		cout<<"*";
		else
		cout<<" ";	

	}
	else if(n<font)
	{
		for(i = 0 ; i< 2*font ;  i ++)
			if(i==0)
				cout<<"*";
			else
				cout<<" ";
	}
	else
		for(i = 0 ; i< 2*font ;  i ++)
			if(i==2*font-1||i==0||i==font)
				cout<<"*";
			else
				cout<<" ";


}

void draw_h(int n , int font  )
{
	if(n==font)
	{
		for(i = 0 ; i < 2*font;i++)
		{
			cout<<"*";
		}
	}
	else
	{
		for(i = 0 ; i < 2*font;i++)
		{
			if(i==0||i==2*font-1)
			cout<<"*";
		else
			cout<<" ";
		}
	}



}
void draw_i(int n , int font  )
{
	
	 
	for(j = 0 ; j <2*font ; j++)
		{
			if(j!=font)
			cout<<" ";
		else 
			cout<<"*";
		}			

}
void draw_j(int n , int font  )
{
	if(n==0)
		for(i= 0 ; i < 2*font;i++)
			cout<<"*";
	else if(n==2*font - 1)
	{
		for(j = 0 ; j <2*font ; j++)
		{
			if(j<=font)
				cout<<"*";
			else
				cout<<" ";
		}
	}	
	else 
	for(j = 0 ; j <2*font ; j++)
		{
			if(j!=font)
			cout<<" ";
		else 
			cout<<"*";
		}	

}

void draw_k(int n , int font  )
{
	for(i = 0;i < 2*font ; i ++)
	{
		if(n==font-i||n==font+i||i==0)
			cout<<"*";
		else
			cout<<" ";
	}
}
void draw_l(int n , int font  )
{
		if(n==2*font-1)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			if(i!=0)
			cout<<" ";
		else cout<<"*"; 
		}

}
void draw_m(int n , int font  )
{
	for (int i = 0; i < font*2; ++i)
		{
			if((i==0||i==2*font-1||i==n||i==2*font-n)&&n<font)
				cout<<"*";
			else if (i==0||i==2*font-1)
				cout<<"*";
			else
				cout<<" ";
		}	
}

void draw_n(int n , int font  )
{

	if(n==0||n==2*font-1)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<" ";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			if((i==0||i==2*font-1))
			cout<<"*";
		
		else 
			{
				if(i==n)
					cout<<"*";
				else
					cout<<" ";
			}
		}
}
void draw_o(int n , int font  )
{
	if(n==0||n==2*font-1)
		{
			for(i = 0 ; i < 2*font;i++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(i = 0 ; i < 2*font;i++)
			{
				if(i==0||i==2*font-1)
				cout<<"*";
			else
				cout<<" ";
			}
		}
}
void draw_p(int n , int font  )
{
	if(n==0||n==font)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			if((i==0||i==2*font-1)&&n<font)
			cout<<"*";
		else if (i==0) cout<<"*";
		else cout<<" "; 
		}
}

void draw_q(int n , int font  )
{
	if(n==0||n==2*font-1)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			if((i==0||i==2*font-1))
			cout<<"*";
		
		else 
			{
				if(i==n)
					cout<<"*";
				else
					cout<<" ";
			}
		}
}
void draw_r(int n , int font  )
{
	if(n==0||n==font)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else if(n<font)
		{for(i = 0 ; i < font*2 ; i ++)
			if((i==0||i==2*font-1))
			cout<<"*";
			else cout<<" ";
		//else if (i==0) cout<<"*";

		}
		else 
			{for(i = 0 ; i < font*2 ; i ++)
				if(i==n||i==0)
					cout<<"*";
				else
					cout<<" ";
			}

}
void draw_s(int n , int font  )
{
	if(n==font||n==0||n==2*font-1)
		{
			for(i = 0 ; i < 2*font;i++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(i = 0 ; i < 2*font;i++)
			{
				if(i==0&&n<font)
					cout<<"*";
				else if(i==2*font-1&&n>font)
					cout<<"*";
				
				else
				cout<<" ";
			}
		}
}

void draw_t(int n , int font )
{
	if(n==0)
		for(i= 0 ; i < 2*font;i++)
			cout<<"*";
	else 
	for(j = 0 ; j <2*font ; j++)
		{
			if(j!=font)
			cout<<" ";
		else 
			cout<<"*";
		}			


}
void draw_u(int n , int font  )
{
	
	if(n==font*2-1)
		{
			for(i = 0 ; i < 2*font;i++)
			{
				cout<<"*";
			}
		}
		else
		{
			for(i = 0 ; i < 2*font;i++)
			{
				if(i==0||i==2*font-1)
				cout<<"*";
			else
				cout<<" ";
			}
		}

}
void draw_v(int n , int font  )
{
	for(i = 0 ; i < 2*font ; i ++)
	{
		if(n==i||(2*font-i==n))
			cout<<"*";
		else
			cout<<" ";
	}
}

void draw_w(int n , int font  )
{
	for (int i = 0; i < 2*font; ++i)
	{
		if(i==0||i==2*font-1)
			cout<<"*";
		else
			cout<<" ";
	}

}
void draw_x(int n , int font  )
{
	for(i = 0 ; i <=2*font ; i ++)
	{
		if(i==n||(2*font-i==n))
			cout<<"*";
		else
			cout<<" ";
	}
}
void draw_y(int n , int font  )
{
	if(n<=font)
	{
		for(i = 0 ; i <=2*font ; i ++)
		{
			if(i==n||(2*font-i==n))
				cout<<"*";
			else
				cout<<" ";
		}
	}
	else
	{
		for(j = 0 ; j <2*font ; j++)
		{
			if(j!=font)
			cout<<" ";
		else 
			cout<<"*";
		}	
	}
}

void draw_z(int n , int font  )
{
	if(n==0||n==2*font-1)
		for(i = 0 ; i < font*2 ; i ++)
			cout<<"*";
		else 
		{for(i = 0 ; i < font*2 ; i ++)
			
			{
				if(i==2*font-n)
					cout<<"*";
				else
					cout<<" ";
			}
		}

}
void draw_space(int n , int font)
{
	for(int i = 0 ; i < font/2 ;i ++)
		cout<<" ";
}

int main()
{
	int n , font ;
	cin>>font ;
	// if(font%2==0)
	// font = font/2;
	// else

	// font = font/2+1;

	
	string str;

	cin>>str;
	int length = str.length();
	
	
	cout<<str;
	for(int n=0 ; n <2*font ; n++)
	
	{
		cout<<"\n";
		for(int i  = 0 ; i < length ; i ++)
		{
		char temp = str[i];
		cout<<" ";
		switch(temp)
		{
			case 'a':	draw_a(n,font);
						break;
			case 'b':	draw_b(n,font);
						break;
			case 'c':	draw_c(n,font);
						break;	
			case 'd':	draw_d(n,font);
						break;	
			case 'e':	draw_e(n,font);
						break;	
			case 'f':	draw_f(n,font);
						break;	
			case 'g':	draw_g(n,font);
						break;	
			case 'h':	draw_h(n,font);
						break;	
			case 'i':	draw_i(n,font);
						break;	
			case 'j':	draw_j(n,font);
						break;	
			case 'k':	draw_k(n,font);
						break;	
			case 'l':	draw_l(n,font);
						break;	
			case 'm':	draw_m(n,font);
						break;	
			case 'n':	draw_n(n,font);
						break;	
			case 'o':	draw_o(n,font);
						break;	
			case 'p':	draw_p(n,font);
						break;	
			case 'q':	draw_q(n,font);
						break;	
			case 'r':	draw_r(n,font);
						break;	
			case 's':	draw_s(n,font);
						break;	
			case 't':	draw_t(n,font);
						break;	
			case 'u':	draw_u(n,font);
						break;	
			case 'v':	draw_v(n,font);
						break;	
			case 'w':	draw_w(n,font);
						break;	
			case 'x':	draw_x(n,font);
						break;	
			case 'y':	draw_y(n,font);
						break;	
			case 'z':	draw_z(n,font);
						break;
			default :   draw_space(n,font);
						break;				
					
		}
		}
	}

}