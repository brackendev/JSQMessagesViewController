//
//  Created by Jesse Squires
//  http://www.hexedbits.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSMessagesViewController
//
//
//  The MIT License
//  Copyright (c) 2014 Jesse Squires
//  http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>

#import "JSQMessagesLabel.h"


FOUNDATION_EXPORT const CGFloat kJSQMessagesCollectionSupplementaryViewHeightDefault;

FOUNDATION_EXPORT NSString * const kJSQMessagesCollectionSupplementaryViewKindRowHeader;


@interface JSQMessagesCollectionSupplementaryView : UICollectionReusableView

@property (weak, nonatomic, readonly) JSQMessagesLabel *label;

#pragma mark - Class methods

+ (UINib *)nib;

+ (NSString *)supplementaryViewReuseIdentifier;

@end
