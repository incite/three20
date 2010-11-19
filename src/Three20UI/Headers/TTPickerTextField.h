//
// Copyright 2009-2010 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// UI
#import "Three20UI/TTSearchTextField.h"

@class TTPickerViewCell;

@interface TTPickerTextField : TTSearchTextField {
  NSMutableArray*   _cellViews;
  TTPickerViewCell* _selectedCell;
  int               _lineCount;
  CGPoint           _cursorOrigin;
}

@property (nonatomic, readonly) NSArray*          cellViews;
@property (nonatomic, readonly) NSArray*          cells;
@property (nonatomic, assign)   TTPickerViewCell* selectedCell;
@property (nonatomic, readonly) int               lineCount;

- (void)addCellWithObject:(id)object;

- (void)removeCellWithObject:(id)object;

- (void)removeAllCells;

- (void)removeSelectedCell;

- (void)scrollToVisibleLine:(BOOL)animated;

- (void)scrollToEditingLine:(BOOL)animated;

- (CGFloat)heightWithLines:(int)lines;

@end
