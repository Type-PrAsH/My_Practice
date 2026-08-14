import sys

chess_board={'h1': 'bK', 'c6': 'wQ', 'g2': 'bB', 'h5': 'bQ', 'e3': 'wK'}

valid_squares=['a1','a2','a3','a4','a5','a6','a7','a8',
               'b1','b2','b3','b4','b5','b6','b7','b8',
               'c1','c2','c3','c4','c5','c6','c7','c8',
               'd1','d2','d3','d4','d5','d6','d7','d8',
               'e1','e2','e3','e4','e5','e6','e7','e8',
               'f1','f2','f3','f4','f5','f6','f7','f8',
               'g1','g2','g3','g4','g5','g6','g7','g8',
               'h1','h2','h3','h4','h5','h6','h7','h8',]

chess_board1={'h1': 'bK', 'c6': 'wQ', 'g2': 'bB', 'h5': 'bQ', 'e3': 'wK'}

def isValidChess(board):
    twoKing = False
    sixteenPieces = False
    valid_square=False
    WorB = False

    for value in board.values():
        if(value=='bK'):
            for value in board.values():
                if(value=='wK'):
                    twoKing = True
                    break
            break
        

    if(len(board)<16):
        sixteenPieces=True
    else:
        print('Invalid, more than 16 pieces')

    for key in board.keys():
        if(key in valid_squares):
            valid_square=True
        else:
            print('Invalid, not valid square')
            sys.exit()

    for pieces in board.values():
        if(pieces[0]=='w' or pieces[0]=='b'):
            WorB=True
        else:
            WorB=False
            print("Invalid, no white/black")
            sys.exit()

    if(twoKing and sixteenPieces and valid_square and WorB):
        print("Valid")
    else:
        print('invalid')

isValidChess(chess_board1)
