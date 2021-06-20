#include<iostream>
#include "tComplexo.cpp"

using namespace std;

int main ()
{
  tComplexo Comp;
	
	
	cout<<"Digite parte real 1"<<endl;
	cin>>Comp.pr1;
	cout<<"Digite parte imaginaria 1"<<endl;
	cin>>Comp.p_i1;
	cout<<"Digite parte real 2"<<endl;
	cin>>Comp.pr2;
	cout<<"Digite parte imaginaria 2"<<endl;
	cin>>Comp.partei2;
	
	 Comp.soma (Comp.pr1, Comp.p_i1, Comp.pr2, Comp.partei2);
	 Comp.diff(Comp.pr1, Comp.p_i1, Comp.pr2, Comp.partei2);
	 Comp.produto(Comp.pr1, Comp.p_i1, Comp.pr2, Comp.partei2);
	 Comp.divisao(Comp.pr1, Comp.p_i1, Comp.pr2, Comp.partei2);
	 Comp.modulo(Comp.pr1, Comp.p_i1, Comp.pr2, Comp.partei2);
}