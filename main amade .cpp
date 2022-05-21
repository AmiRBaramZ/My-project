    #include <iostream>
    #include <string>
    #include <windows.h>
    using namespace std;
   
    string name1(string a){
    cout<<"       enter player 1 name: ";
	getline(cin,a);	
	return a;
	}
	string name2(string b){
		cout<<"       enter player 2 name: ";
	getline(cin,b);	
	return b;
	}
	string setare(string s){
	cout<<"                  ****************************************"<<endl;
	return s;	
	}
	string setare2(string s2){
	cout<<"                  ****************************************"<<endl;
	return s2;
}
    int main()
    {
    	 system("color 74");
		 Beep(500,1000);   	
    	  string a;
    	  string c=name1(a);
  //balaii call tabe 1 ast  
  Beep(500,1000);	  
		  string b;
    	  string d=name2(b);
  //balaii call tabe 2 ast  	     
    	  char doz[10] = {'0','1','2','3','4','5','6','7','8','9'};
    	  int player = 1;
    	  int choice;
    	  int win = 1;
    	Beep(500,100);
		
		do{
    
    	

    	cout<<endl<<"\tTic Toc Toe Game"<<endl<<endl;
    	cout<<" "<<c<<": (X)"<<"   Vs   "<<d<<": (O)"<<endl;
    	
    		cout << endl;
       // call tabe 3om
        string s;
        string q=setare(s);
    	cout <<"                  *           "  "     |     |     " <<                                            "          *"<<endl;
    	cout <<"                  *           "  "  " << doz[7] << "  |  " << doz[8] << "  |  " <<doz[9]<<"            *"<<endl;
    	cout <<"                  *           "  "_____|_____|_____" <<                                            "          *"<<endl;
    	cout <<"                  *           "  "     |     |     " <<                                            "          *"<<endl;
    	cout <<"                  *           "  "  " << doz[4] << "  |  " << doz[5] << "  |  " <<doz[6]<<"            *"<<endl;
    	cout <<"                  *           "  "_____|_____|_____" <<                                            "          *"<<endl;
    	cout <<"                  *           "  "     |     |     " <<                                            "          *"<<endl;
    	cout <<"                  *           " "  " << doz[1] << "  |  " << doz[2] << "  |  " << doz[3]<<"            *"<<endl;
    	cout <<"                  *           "  "     |     |     " <<                                            "          *"<<endl;
        // call tabe 4om
        string s2;
        string q2=setare2(s2);
    	cout<<"(Player "<<player<<") Enter a number: ";
    	cin>>choice;
     	Beep(600,100);
    	if(player == 1){
    	
    		switch(choice)
    		{
    			case 1: 
    			if(doz[1]=='X'||doz[1]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[1] = 'X';
    			  player = 2;	
    			}
    			break;
    			
    			case 2: 
    			if(doz[2]=='X'||doz[2]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[2] = 'X';
    			  player = 2;	
    			}
    			break;
    			
    			case 3: 
    			if(doz[3]=='X'||doz[3]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[3] = 'X';
    			  player = 2;	
    			}
    			break;
    			case 4: 
    			if(doz[4]=='X'||doz[4]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[4] = 'X';
    			  player = 2;	
    			}
    			break;
    			case 5: 
    			if(doz[5]=='X'||doz[5]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[5] = 'X';	
    			  player = 2;
    			}
    			break;
    			case 6: 
    			if(doz[6]=='X'||doz[6]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[6] = 'X';
    			  player = 2;	
    			}
    			break;
    			case 7: 
    			if(doz[7]=='X'||doz[7]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[7] = 'X';
    			  player = 2;	
    			}
    			break;
    			case 8: 
    			if(doz[8]=='X'||doz[8]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[8] = 'X';	
    			  player = 2;
    			}
    			break;
    			case 9: 
    			if(doz[9]=='X'||doz[9]=='O')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[9] = 'X';
    			  player = 2;	
    			}
    			break;
    			
    			default:cout<<"Invalid Move"<<endl;
    			system("pause");
    			break;
    		}
    	}
    	else
    	{
    		switch(choice)
    		{
    			case 1: 
    			if(doz[1]=='O'||doz[1]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[1] = 'O';
    			  player = 1;	
    			}
    			break;
    			
    			case 2: 
    			if(doz[2]=='O'||doz[2]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[2] = 'O';	
    			  player = 1;	
    			}
    			break;
    			
    			case 3: 
    			if(doz[3]=='O'||doz[3]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[3] = 'O';	
    			  player = 1;	
    			}
    			break;
    			case 4: 
    			if(doz[4]=='O'||doz[4]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			 doz[4] = 'O';	
    			  player = 1;	
    			}
    			break;
    			case 5: 
    			if(doz[5]=='O'||doz[5]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[5] = 'O';
    			  player = 1;		
    			}
    			break;
    			case 6: 
    			if(doz[6]=='O'||doz[6]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[6] = 'O';
    			  player = 1;		
    			}
    			break;
    			case 7: 
    			if(doz[7]=='O'||doz[7]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[7] = 'O';	
    			  player = 1;	
    			}
    			break;
    			case 8: 
    			if(doz[8]=='O'||doz[8]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[8] = 'O';	
    			  player = 1;	
    			}
    			break;
    			case 9: 
    			if(doz[9]=='O'||doz[9]=='X')
    			{
    				cout<<"Invalid Move"<<endl;
    				system("pause");
    			}
    			else
    			{
    			  doz[9] = 'O';	
    			  player = 1;	
    			}
    			break;
    			
    			default:cout<<"Invalid Move"<<endl;
    			system("pause");
    			break;
    		}
    	}
    	
    	
    	
    	
    	
    	if (doz[1] == doz[2] && doz[2] == doz[3])
    		win = 1;
    	else if (doz[4] == doz[5] && doz[5] == doz[6])
    		win = 1;
    	else if (doz[7] == doz[8] && doz[8] == doz[9])
    		win = 1;
    	else if (doz[1] == doz[4] && doz[4] == doz[7])
    		win = 1;
    	else if (doz[2] == doz[5] && doz[5] == doz[8])
    		win = 1;
    	else if (doz[3] == doz[6] && doz[6] == doz[9])
    		win = 1;
    	else if (doz[1] == doz[5] && doz[5] == doz[9])
    		win = 1;
    	else if (doz[3] == doz[5] && doz[5] == doz[7])
    		win = 1;
    	else if (doz[1] != '1' && doz[2] != '2' && doz[3] != '3' && doz[4] != '4' &&
        doz[5] != '5' && doz[6] != '6' && doz[7] != '7' && doz[8] != '8' && doz[9] != '9')
    		win = 0;
    	else
    		win = -1;
    	
    	
    	system("cls");
    	}
    	while(win == -1);
    	
    		cout<<"\tTic Toc Toe Game"<<endl<<endl;
    	cout<<c<<": (X)"<<"  Vs  "<<d<<": (O)"<<endl;
    //agar jadval paiin hazf beshe dar paian jadval pak mishe	
    			cout << endl;
    	cout << "     |     |     " << endl;
    	cout << "  " << doz[1] << "  |  " << doz[2] << "  |  " << doz[3] << endl;
    	cout << "_____|_____|_____" << endl;
    	cout << "     |     |     " << endl;
    	cout << "  " << doz[4] << "  |  " << doz[5] << "  |  " <<doz[6] << endl;
    	cout << "_____|_____|_____" << endl;
    	cout << "     |     |     " << endl;
    	cout << "  " << doz[7] << "  |  " << doz[8] << "  |  " << doz[9] << endl;
    	cout << "     |     |     " << endl << endl;
    	
    	if(win==1){
    	
    		if(player == 1){
    		
    		cout<<"\aplayer "<<d<<" win "<<endl;
    			
    		}
    		else if(player == 2){
    		
    		cout<<"\aplayer  "<<c<<" win "<<endl;
    		
    		}
    	
    	}
    	else
    
    		cout<<c<<"   and   "<<d<<"  players win"<<endl;
    	
   	    
    }
