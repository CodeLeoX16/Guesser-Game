 #include<iostream>
 using namespace std;
 class Gusser{
 	int guessednum;
 	public:
 		int takegusserinput(){
 			int x;
 			cout<<"Give The Number For The GUsserP:"<<endl;
 			cin>>x;
 			guessednum=x;
 			return guessednum;
 			
		 }
 	
 };
 
 class Player{
 	int playernum;
 	public:
 		int takeplayersinput(int pnum){
 			int p;
 			cout<<"Give The Number For Player "<<pnum<<":"<<endl;
 			//cout<<"Give The Number For The  player:"<<endl;
 			cin>>p;
 			playernum=p;
 			return  playernum;
		 }
 };
 class Umpire{
 	public:
        int g;
 	    int p1num;
 	    int p2num;
 	    int p3num;
 	    
 		void GetTheNumberFromGusser(){
 			Gusser g1;
 			g=g1.takegusserinput();
 			//cout<<"Number Gussed By The Gusser:"<<g<<endl;
 		 }
		void GetTheNumberFromPlayers(){
	    Player p1;
 	    Player p2;
 	    Player p3;
 	    //cout<<"Give The Number For Player 1:"<<endl;
 	    p1num=p1.takeplayersinput(1);
 	    //cout<<"Give The Number For Player 2:"<<endl;
 	    p2num=p2.takeplayersinput(2);
 	    //cout<<"Give The Number For Player 3:"<<endl;
 	    p3num=p3.takeplayersinput(3);
			
		}
		void PrintResult(){
			//g p1num,p2num,p3num;
			if(g==p1num){
				if(g==p2num){
					if(g==p3num){
						cout<<"All The Player Won The Game!!!!!"<<endl;
					}
					else{
						cout<<"The Players 1 and 2 has won!!"<<endl;
					}
				}
				else{
					if(g==p3num){
						cout<<"The Players 1 and 3 has won!!"<<endl;
					}
					else{
						cout<<"The Players 1 has won!!"<<endl;
						
					}
				}
			}
			else if(g==p2num){
				//p1 is not won p2 has won?test forp3?
				if(p3num==g){
					cout<<"The Players 2 and 3 has won!!"<<endl;
				}
				else{
					cout<<"THE PLAYER 2 HAS WON THEGAME!!!"<<endl;
				}
				 	
			}
			else if(g==p3num){
				cout<<"THE PLAYER 3 HAS WON THEGAME!!!"<<endl;
			}
			else{
				cout<<"ALL THE PLAYER LOST THE GAME"<<endl;
			}
			
			
		}
 	
 };

 int main(){
 	cout<<".......Let's Start The Game......."<<endl;
 	//create a Umpire object;
 	Umpire u;
 	u.GetTheNumberFromGusser();
 	u.GetTheNumberFromPlayers();
 	u.PrintResult();
 	cout<<".......Let's End The Game........."<<endl;
 	return 0;
 }
