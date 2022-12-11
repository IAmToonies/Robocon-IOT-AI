- Down and add Libraries of Eagle

# Setup Frame:
- Step 1: Create new schematic --> Rename file: Test10122022.sch  [Testday.sch]
- Step 2: Click `Add Part` (On the left) --> Search: frame --> A3L-LOC
- Step 3: Grid (Left above) --> Size: 2.54/1.57 mm & Alt: 1 mm --> Line --> On 

# Add Part (Thêm linh kiện):
- Step 1: `Add Part` --> Search: R0603
- Step 2: Change value: Click `Value` (Below `Add Part`) --> click center R0603 --> Change: 2K2 (Value)
- Step 3: Choose Led0603 --> Value: P_5V
- Step 4: Connect two part: 'Net' (Left Above `Value`)
- Step 5: Click `Generate/switch to board` (Above near `print`)


# Generate/switch to board
- Step 1: Grid --> Size: 10(board) mm & Alt: 0.127 mm --> On
- Step 2: Change Size Board: 5x5 block
- Step 3: Lỗ bắt ốc: `via` --> lỗ 3ly: Drill 3 & viền 5: Diameter 5
- Drill --> Size: 0.15875 để đi layout linh kiện dán / 2.54 ~ Rào cái
- Xoay linh kiện --> Chuột phải. Chuyển lớp linh kiện dán phía sau --> click con lăn
- Yellow line --> We need to place them so that the yellow lines **dont overlap**
- Vẽ dây: Route Airwire --> Width [0.25 - 1] mm // Dây công suất => **1** mm // Dây tín hiệu => **0.25** mm // Để kết kết nối 2 mặt  --> click con lăn --> Chọn vòng tròn
- Text --> To put Name --> Font: Vector // Ratio: 15
