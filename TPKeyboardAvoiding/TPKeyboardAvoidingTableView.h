//
//  TPKeyboardAvoidingTableView.h
//  TPKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+TPKeyboardAvoidingAdditions.h"

@interface TPKeyboardAvoidingTableView : UITableView <UITextFieldDelegate, UITextViewDelegate>
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
/**
 Table views sometimes interact negatively with keeping the cursor visible while typing.
 This method allows clients to disable that functionality.
 
 @param keepCursorVisible 'YES' - keeps the cursor visible while typing
                          'NO'  - doesn't keep cursor visible while typing
 */
- (void)keepCursorVisibleWhileTyping:(BOOL)keepCursorVisible;
@end
