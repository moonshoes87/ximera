//
//  JFNavigatorViewController.h
//  textbook
//
//  Created by Fowler, James on 1/27/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface JFNavigatorViewController : UIViewController {
    IBOutlet UIScrollView * scrollView;
    BOOL isDragging;
    CGFloat *yBoundaries;
}

@property (nonatomic, retain) IBOutlet UIScrollView * scrollView;

- (IBAction)tapped:(UITapGestureRecognizer *)sender;

@end
