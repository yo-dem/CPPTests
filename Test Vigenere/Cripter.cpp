#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CripterUtility
{
	private:
		string message;
		string ch = " 0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&\'()*+,-./:;<=>?@[\\]^_`{|}~";

	public:
		string criptMessage(string m, string p)
		{
			cout<<"Cripting..."<<endl;
			
			// Se la lunghezza della password è inferiore al messaggio
			// allora la password verrà allungata
			while(p.length()<m.length())
				p = p+p;
				
			string output;
			for(int i=0; i<m.length();i++)
			{
				int p1 = ch.find(m[i]);
				int p2 = ch.find(p[i]);
				
				output += ch[p1+p2];
			}
			return output;
		}
		
		string decriptMessage(string m, string p)
		{
			cout<<"Decripting..."<<endl;
			
			// Se la lunghezza della password è inferiore al messaggio
			// allora la password verrà allungata
			while(p.length()<m.length())
				p = p+p;
			
			string output;
			for(int i=0; i<m.length();i++)
			{
				int p1 = ch.find(m[i]);
				int p2 = ch.find(p[i]);
				output += ch[p1-p2];
			}
			return output;
		}
};

int main(int argc, char **argv)
{
	CripterUtility cu;
	
	string command; 
	string message; 
	string password;
	
	if(argc<3)
	{
		cout<<"Wrong parameters!"<<endl;
		cout<<"Use this template:"<<endl;
		cout<<"Cripter -c 'message' 'password'"<<endl;
		cout<<"Cripter -d 'message' 'password'"<<endl;
		return 1;
	}
	
	command = string(argv[1]);
	message = string(argv[2]);
	password = string(argv[3]);
	
	if(command.compare("-c")==0)
	{
		string message = argv[2];
		string cripted = cu.criptMessage(message,"psw");
		cout<<cripted<<endl;
	}
	if(command.compare("-d")==0)
	{
		string cripted = argv[2];
		string decripted = cu.decriptMessage(cripted,"psw");
		cout<<decripted<<endl;
	}
	
	return 0;
}
