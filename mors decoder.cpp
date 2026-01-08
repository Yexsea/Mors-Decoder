#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "turkish");
	
	cout<<"mors kodunu girin (harf harf) (iþleminiz bittiðinde sonuç alýp çýkmak için '+' tuþuna basýn): "<<endl;
	string a,b;
	
	
	while(true){
		cin>>a;
		
			
			if (a==".-"){
				a="A";
				
			}
			else if (a=="-..."){
				a="B";
				
			}
			else if (a=="-.-."){
				a="C";
			
			}
			else if (a=="-.."){
				a="D";
			
			}
			else if (a=="."){
				a="E";
				
			}
			else if (a=="..-."){
				a="F";
				
			}
			else if (a=="--."){
				a="G";
				
			}
			else if (a=="...."){
				a="H";
				
			}
			else if (a==".."){
				a="I";
		
			}
			else if (a==".---"){
				a="J";
				
			}
			else if (a=="-.-"){
				a="K";
				
			}
			else if (a==".-.."){
				a="L";
				
			}
			else if (a=="--"){
				a="M";
				
			}
			else if (a=="-."){
				a="N";
				
			}
			else if (a=="---"){
				a="O";
				
			}
			else if (a==".--."){
				a="P";
				
			}
			else if (a=="--.-"){
				a="Q";
				
			}
			else if (a==".-."){
				a="R";
				
			}
			else if (a=="..."){
				a="S";
				
			}
			else if (a=="-"){
				a="T";
				
			}
			else if (a=="..-"){
				a="U";
				
			}
			else if (a=="...-"){
				a="V";
				
			}
			else if (a==".--"){
				a="W";
				
			}
			else if (a=="-..-"){
				a="X";
				
			}
			else if (a=="-.--"){
				a="Y";
				
			}
			else if (a=="--.."){
				a="Z";
				
			}
			else if (a=="---."){
				a="Ö";
				
			}
			else if (a=="..--"){
				a="Ü";
				
			}
			else if (a=="-.-.."){
				a="Ç";
				
			}
			else if (a==".--.."){
				a="Þ";
				
			}
			else if (a=="--.-."){
				a="Ð";
				
			}
			else if (a=="+"){
				a="help";
				
			}
			else{
				a=" ";
				
			}
		
		
		if (a=="help"){
			cout<<endl<<b<<endl;
			break;
		}
		
		
		cout<<a<<endl;
		
		b=b+a;
		
		
	}
	

	system("pause");
	return 0;
}
