/*
  textbookAppDelegate.h
  
  This file is part of ximera.

  ximera is free software: you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  ximera is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with ximera.  If not, see <http://www.gnu.org/licenses/>.
*/

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@class JFSectionViewController;
@class JFNavigatorViewController;
@class JFBookSpine;
@class JFPagingViewController;

@interface textbookAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UIBarButtonItem *left;
	UIBarButtonItem *right;
    Boolean night;
    //reference to be able to find this
    JFPagingViewController* pagingViewController;
	
	IBOutlet JFSectionViewController *sectionViewController;
	IBOutlet JFNavigatorViewController *navigatorViewController;
	IBOutlet JFBookSpine *bookSpine;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *left;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *right;
@property (nonatomic, readwrite) Boolean night;

@property (nonatomic, retain) IBOutlet JFSectionViewController *sectionViewController;
@property (nonatomic, retain) IBOutlet JFNavigatorViewController *navigatorViewController;
@property (nonatomic, retain) IBOutlet JFBookSpine *bookSpine;

- (int)sectionCount;

- (void)registerPaigingViewController: (JFPagingViewController *) pagingController;
- (JFPagingViewController *) getPagingViewController;
- (IBAction)dayNightPressed:(id)sender;

@end
