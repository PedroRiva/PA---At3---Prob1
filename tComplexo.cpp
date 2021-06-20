#include <iostream>
#include <cmath>

using namespace std;

struct tComplexo {
		
		float pr1, pr2,p_i1, somareal, somaimag,prod;
		float partei2;
		void soma (float pr1, float p_i1, float pr2, float partei2)
		{
			float somareal, somaimag;
			somareal= (pr1+pr2);
			somaimag = (p_i1+partei2);
			if (somaimag>0)
			{
				cout<<"A soma eh: "<<somareal <<"+" <<somaimag<<"j"<<endl;
			}
			else {
			cout<<"A soma eh: "<<somareal <<somaimag<<"j"<<endl;	
			}
			
		}
		
		void diff(float pr1, float p_i1, float pr2, float partei2)
		{
			float diffreal,diffimag;
			diffreal = (pr1-pr2);
			diffimag = (p_i1-partei2);
			if(diffimag>0)
			{
				cout<<"A diferenca eh: "<<diffreal<<"+"<<diffimag<<"j"<<endl;
				
			}
			else {
				cout<<"A diferenca eh: "<<diffreal <<diffimag<<"j"<<endl;
			}
		}
		
		void produto (float pr1, float p_i1, float pr2, float partei2)
		{
			float prodreal,prodimag;
			prodreal = ((pr1*pr2)-(p_i1*partei2));
			prodimag = ((pr1*partei2)+(p_i1*pr2));
			if (prodimag>0)
			{
				cout<<"O produto eh: "<<prodreal <<"+" <<prodimag<<"j"<<endl;
			}
			else
			{
				cout<<"O produto eh: "<<prodreal <<prodimag<<"j"<<endl;
			}
			
		}
		
		void divisao (float pr1, float p_i1, float pr2, float partei2)
		{
			
			float mod1,mod2,alpha1,alpha2,modres,alphares,conver1,conver2;
			mod1 = sqrt(((pr1*pr1)+(p_i1*p_i1)));
			mod2 = sqrt(((pr2*pr2)+(partei2*partei2)));
			alpha1 = atan (p_i1/pr1);
			alpha2 = atan (partei2/pr2);
			modres = mod1/mod2;
			alphares = alpha1-alpha2;
			conver1 = modres*cos(alphares);
			conver2 = modres*sin(alphares);
			if (conver2 >0)
			{
				cout<<"O quociente eh: "<<conver1 <<"+" <<conver2 <<"j" <<endl;
			}else{
			
			cout<< "O quociente eh: "<<conver1 <<conver2<<"j"<<endl;
		}
		}
		
		
		void modulo (float pr1, float p_i1, float pr2, float partei2)
		{
			float modulo1, modulo2;
			modulo1 = sqrt(((pr1*pr1)+(p_i1*p_i1)));
			modulo2 = sqrt(((pr2*pr2)+(partei2*partei2)));
			cout<<"Modulo 1 eh: "<<modulo1<<endl;
			cout<<"Modulo 2 eh: "<<modulo2<<endl;
		}
	};