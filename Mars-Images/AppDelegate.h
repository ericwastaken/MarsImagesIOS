//
//  AppDelegate.h
//  Mars-Images
//
//  Created by Mark Powell on 11/17/12.
//  Copyright (c) 2012 Jet Propulsion Laboratory/California Institute of Technology. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMDrawerController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) NSDate *lastSleepTime;
@property int imageIndex;
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,strong) MMDrawerController* drawerController;

- (void) imageSelected:(int)index from:(id)sender;

@end
