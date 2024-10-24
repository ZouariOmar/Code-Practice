def knight_vs_bishop(knight, bishop):
    # Convert letters to numbers to represent the column (A -> 1, B -> 2, ..., H -> 8)
    knight_row, knight_col = knight[0], ord(knight[1].upper()) - ord('A') + 1
    bishop_row, bishop_col = bishop[0], ord(bishop[1].upper()) - ord('A') + 1

    # Check if knight can capture the bishop
    knight_moves = [
        (knight_row + 2, knight_col + 1), (knight_row + 2, knight_col - 1),
        (knight_row - 2, knight_col + 1), (knight_row - 2, knight_col - 1),
        (knight_row + 1, knight_col + 2), (knight_row + 1, knight_col - 2),
        (knight_row - 1, knight_col + 2), (knight_row - 1, knight_col - 2)
    ]
    if (bishop_row, bishop_col) in knight_moves: return "Knight"

    # Check if bishop can capture the knight (bishop moves diagonally), Otherwise, neither piece can capture the other
    return "Bishop" if abs(bishop_row - knight_row) == abs(bishop_col - knight_col) else "None"

#! Testing part
knight_pos = [4, "C"]
bishop_pos = [6, "D"]
print(knight_vs_bishop(knight_pos, bishop_pos))
