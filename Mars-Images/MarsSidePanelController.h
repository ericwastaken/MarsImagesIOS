//
//  MarsViewDeck.h
//  Mars-Images
//
//  Created by Mark Powell on 12/16/13.
//  Copyright (c) 2013 Powellware. All rights reserved.
//
//
//#import "IIViewDeckController.h"
//#import "IISideController.h"

#define IMAGE_SELECTED @"imageSelected"
#define IMAGE_INDEX @"imageIndex"
#define SENDER @"sender"

@interface MarsSidePanelController : NSObject // : IIViewDeckController<IIViewDeckControllerDelegate>

@property int imageIndex;
//@property (strong, nonatomic) IISideController* leftSideController;

- (void) imageSelected:(int)index from:(id)sender;
//- (void) configureLeftPanel: (UIInterfaceOrientation) interfaceOrientation;

@end
