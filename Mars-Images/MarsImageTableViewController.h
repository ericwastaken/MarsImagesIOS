//
//  MarsImageTableViewController.h
//  Mars-Images
//
//  Created by Mark Powell on 12/12/13.
//  Copyright (c) 2013 Powellware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MarsImageTableViewController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate>

@property (strong, nonatomic) IBOutlet UISearchBar* searchBar;
@property (weak, nonatomic) IBOutlet UIButton *titleButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *refreshButton;

- (void) notesLoaded: (NSNotification*) notification;
- (void) imageSelected: (NSNotification*) notification;
- (void) updateNotes;
- (void) defaultsChanged:(id)sender;
- (void) enteredForegroundAfterLongSleep:(id)sender;
- (void) selectAndScrollToRow:(int)imageIndex;
- (IBAction) showMissionMenu;
- (IBAction) titleButtonPressed;
- (IBAction)refreshImages;
- (IBAction) activateSearchBar;
@end
