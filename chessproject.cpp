

// Emmanuel Ogunrinu

#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;
struct Board
{
    char array[8][8];
    int rows;
    int col;
};
char BlackRook,BlackPawn,BlackBishop,BlackHorse,BlackQueen,BlackKing,WhiteRook,WhitePawn,
WhiteBishop,WhiteHorse,WhiteKing,WhiteQueen;
void FillBoard(Board&);
void PrintBoard(Board&);


int main()
{
    int userrow = 0,usercol = 0,piecerow = 0,piececol = 0;
    int Wkingx = 0;
    int Wkingy = 0;
    int Bkingx = 0;
    int Bkingy = 0;
    int Selection;
    bool Player = 0;
    // uppercase letters are the black side and the lower case letters are the white side.
     Board Chess;
    Chess.rows = 8;
    Chess.col = 8;
     BlackRook = 'R';
     BlackPawn = 'P';
     BlackBishop = 'B';
     BlackHorse = 'H';
     BlackQueen = 'Q';
     BlackKing = 'K';
       
     WhiteRook = 'r';
     WhitePawn = 'p';
    
     WhiteBishop ='b';
     WhiteHorse = 'h';
     WhiteKing = 'k';
     WhiteQueen = 'q';
    FillBoard(Chess);
    cout << " Welcome to chess please make a selection. " << endl;
    do
    {
    cout << " 1. See instructions " << endl;
    cout << " 2. Play " << endl;
    cout << " 3. Quit " << endl;
    cin >> Selection;
    switch (Selection)
    {
        case 1:
            cout <<  " In this game the goal is to capture the King, you cant go" << endl;
            cout <<  " into places that are already occupied. Each player takes"  << endl;
            cout <<  " a trun. First thing you do to move a piece is to enter" << endl;
            cout <<  " the current location of the piece and then the" << endl;
            cout <<  " destination of where you want to move the piece." << endl;
            break;
        case 2:
            break;
        case 3:
            cout << " Thank you" << endl;
            return 0;
            break;
            
            
    }
    }
    while( Selection != 2);
    while (BlackKing != ' ' && WhiteKing != ' ' )
    {
        PrintBoard(Chess);
      cout << "Welcome to our chess game!" << endl;
      if(Player)
      {
          cout << " Player 2 turn. " << endl;
          Player = false;
      }
        else if (!Player)
        {
            cout << " Player 1 turn. " << endl;
            Player = true;
        }
        do
        {
      cout << "Enter the piece you want to select" << endl;
        cin>>piecerow;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(10000,'\n');
                cout << "Invalid input please enter number" << endl;
                cin >> piecerow;
            }
        cin>>piececol;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(10000,'\n');
                cout << "Invalid input please enter number" << endl;
                cin >> piececol;
            }
        cin>>userrow;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore(10000,'\n');
                cout << "Invalid input please enter number" << endl;
                cin >> userrow;
            }
        cin>>usercol;
            while(cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Invalid input please enter number" << endl;
                cin >> usercol;
            }
            if( piecerow<0 || piecerow > 7 || piececol < 0 || piececol > 7 || userrow < 0 || userrow > 7 || usercol < 0 || usercol > 7)
            {
                cout << "Input location outside of board" << endl;
    
            }
        }
        while(piecerow<0 || piecerow > 7 || piececol < 0 || piececol > 7 ||
              userrow < 0 || userrow > 7 || usercol < 0 || usercol > 7);
       if((( Chess.array[userrow][usercol] == WhitePawn || Chess.array[userrow][usercol] == WhiteRook || Chess.array[userrow][usercol] == WhiteKing || Chess.array[userrow][usercol] == WhiteHorse || Chess.array[userrow][usercol] == WhiteBishop || Chess.array[userrow][usercol] == WhiteQueen)))
       {
           while ((( Chess.array[piecerow][piececol] == WhitePawn || Chess.array[piecerow][piececol] == WhiteRook || Chess.array[piecerow][piececol] == WhiteKing || Chess.array[piecerow][piececol] == WhiteHorse || Chess.array[piecerow][piececol] == WhiteBishop || Chess.array[piecerow][piececol] == WhiteQueen)))
            
           {
               cout << "Space is already occupied. Select different destination" << endl;
                         cin>>userrow>>usercol;
           }
        }
        else if(Chess.array[userrow][usercol] == BlackPawn || Chess.array[userrow][usercol] == BlackRook || Chess.array[userrow][usercol] == BlackKing || Chess.array[userrow][usercol] == BlackHorse || Chess.array[userrow][usercol] == BlackBishop || Chess.array[userrow][usercol] == BlackQueen)
        {
           while(((((Chess.array[piecerow][piececol] == BlackPawn || Chess.array[piecerow][piececol] == BlackRook || Chess.array[piecerow][piececol] == BlackKing || Chess.array[piecerow][piececol] == BlackHorse || Chess.array[piecerow][piececol] == BlackBishop || Chess.array[piecerow][piececol] == BlackQueen)))))
           {
               cout << "Space is already occupied. Select different destination" << endl;
                                       cin>>userrow>>usercol;
           }
        }
            
          //  cout << " Already occupied " << endl;
        
        if (BlackPawn == Chess.array[piecerow][piececol])
        {
            while (piecerow > userrow || piecerow +1 < userrow || piececol < usercol || piececol -1 > usercol)
            {
                cout << "Not possible to move there. Reenter destination" << endl;
                cin>>userrow>>usercol;
            }
            
          //  if (piecerow +1 > userrow)
                
    
        {
        if(Chess.array[userrow][usercol] == BlackKing )
          {
            // black king is getting squished, end the game
            BlackKing = ' ';
          }
        if (Chess.array[userrow][usercol] == WhiteKing )
        {
            WhiteKing = ' ';
        }
        // int temp=Chess.array[piecerow][piececol];
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
        Chess.array[piecerow][piececol]=' ';
        }
        }
        if ( WhitePawn == Chess.array[piecerow][piececol])
        {
            while (piecerow < userrow || piecerow -1 > userrow || piececol < usercol || piececol -1 > usercol)
              {
                  cout << "Not possible to move there. Reenter destination" << endl;
                  
                   cin>>userrow>>usercol;
              }
              
          
                  
              
        
    
        {
           if(Chess.array[userrow][usercol] == BlackKing )
           {
               // black king is getting squished, end the game
               BlackKing = ' ';
            }
           if (Chess.array[userrow][usercol] == WhiteKing )
           {
              WhiteKing = ' ';
            }
        // int temp=Chess.array[piecerow][piececol];
         //Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
         //Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
        }
        }
        if ( BlackPawn == Chess.array[piecerow][piececol])
        {
                //int temp=Chess.array[piecerow][piececol];
             //   Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
       // Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
    
        }
        if ( WhitePawn == Chess.array[piecerow][piececol])
        {
                    //int temp=Chess.array[piecerow][piececol];
                 //   Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
           // Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
        
        }
        if ( BlackRook == Chess.array[piecerow][piececol])
        {
                    //int temp=Chess.array[piecerow][piececol];
                 //   Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
           // Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
        
        }
        if ( BlackHorse == Chess.array[piecerow][piececol])
        {
                    //int temp=Chess.array[piecerow][piececol];
                 //   Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
           // Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
        
        }
        if ( WhiteHorse == Chess.array[piecerow][piececol])
        {
                    //int temp=Chess.array[piecerow][piececol];
                 //   Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
           // Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
        
        }
        if ( WhiteRook == Chess.array[piecerow][piececol])
        {
           
         //   int temp=Chess.array[piecerow][piececol];
        //    Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
        //    Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
              
        }
        
        if ( BlackKing == Chess.array[piecerow][piececol])
        {
            if ( piecerow +1 < userrow )
                {
                    cout << "Not possible to move there" << endl;
                }
            
                    
        else
        {
         if(Chess.array[userrow][usercol] == BlackKing )
          {
            // black king is getting squished, end the game
            BlackKing = ' ';
          }
        if (Chess.array[userrow][usercol] == WhiteKing )
          {
            WhiteKing = ' ';
          }
      //  int temp=Chess.array[piecerow][piececol];
     //   Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
     //    Chess.array[userrow][usercol]=temp;
            Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
            Chess.array[piecerow][piececol]=' ';
        }
        
        }
        if ( WhiteKing == Chess.array[piecerow][piececol])
        {
           if ( piecerow -1 > userrow )
               {
                   cout << "Not possible to move there" << endl;
               }
           
                   
               else
               {
         if(Chess.array[userrow][usercol] == BlackKing )
        {
            // black king is getting squished, end the game
            BlackKing = ' ';
        }
        if (Chess.array[userrow][usercol] == WhiteKing )
        {
            WhiteKing = ' ';
        }

        //  int temp=Chess.array[piecerow][piececol];
        //  Chess.array[piecerow][piececol]=Chess.array[userrow][usercol];
        //  Chess.array[userrow][usercol]=temp;
                   Chess.array[userrow][usercol]=Chess.array[piecerow][piececol];
                   Chess.array[piecerow][piececol]=' ';
         }
        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(WhiteKing == Chess.array[i][j])
                {
                    Wkingx = i;
                    Wkingy = j;
                }
                if(BlackKing ==  Chess.array[i][j])
                {
                    Bkingx =i;
                    Bkingy =j;
                }
            }
        }

    }
   // cout << " Game Over. You Won " << endl;

    cout << " Game Over. You Won " << endl;
    PrintBoard(Chess);
    return 0;
}
void PrintBoard(Board& Chess)
{
    for (int i = 0; i<Chess.rows; i++)
       {
           if (i==0)
           cout << "  0  1  2  3  4  5  6  7 " << endl;
           for (int j = 0; j<Chess.col; j++)
           {
               if (j==0)
                   cout << i << " ";
               if (Chess.array[i][j] == ' ')
                   cout << " _ ";
               else
                   cout << Chess.array [i][j] << "  ";
               
           }
           cout << endl;
       }
}
void FillBoard(Board& Chess)
{
    Chess.array[0][0] = BlackRook;
    Chess.array[0][7] = BlackRook;
    Chess.array[1][0] = BlackPawn;
    Chess.array[1][1] = BlackPawn;
    Chess.array[1][2] = BlackPawn;
    Chess.array[1][3] = BlackPawn;
    Chess.array[1][4] = BlackPawn;
    Chess.array[1][5] = BlackPawn;
    Chess.array[1][6] = BlackPawn;
    Chess.array[1][7] = BlackPawn;
    Chess.array[0][2] = BlackBishop;
    Chess.array[0][5] = BlackBishop;
    Chess.array[0][1] = BlackHorse;
    Chess.array[0][6] = BlackHorse;
    Chess.array[0][4] = BlackKing;
    Chess.array[0][3] = BlackQueen;
    
    for (int i = 2; i<Chess.rows; i++)
    {
        for (int j = 0; j<Chess.col; j++)
        {
            Chess.array [i][j] = ' ';
        }
    }
    Chess.array[7][0] = WhiteRook;
    Chess.array[7][7] = WhiteRook;
    Chess.array[7][1] = WhiteHorse;
    Chess.array[7][6] = WhiteHorse;
    Chess.array[7][2] = WhiteBishop;
    Chess.array[7][5] = WhiteBishop;
    Chess.array[7][4] = WhiteQueen;
    Chess.array[7][3] = WhiteKing;
    
    Chess.array[6][0] = WhitePawn;
    Chess.array[6][1] = WhitePawn;
    Chess.array[6][2] = WhitePawn;
    Chess.array[6][3] = WhitePawn;
    Chess.array[6][4] = WhitePawn;
    Chess.array[6][5] = WhitePawn;
    Chess.array[6][6] = WhitePawn;
    Chess.array[6][7] = WhitePawn;
}


