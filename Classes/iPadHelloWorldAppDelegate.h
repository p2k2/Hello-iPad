//
//  iPadHelloWorldAppDelegate.h
//  iPadHelloWorld
//
//  Created by Brandon Trebitowski on 2/1/10.
//  Copyright RightSprite 2010. All rights reserved.
//

#import <UIKit/UIKit.h>


@class MasterViewController;
@class DetailViewController;

@interface iPadHelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    
    UISplitViewController *splitViewController;
    
    MasterViewController *masterViewController;
    DetailViewController *detailViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic,retain) IBOutlet UISplitViewController *splitViewController;
@property (nonatomic,retain) IBOutlet MasterViewController *masterViewController;
@property (nonatomic,retain) IBOutlet DetailViewController *detailViewController;

@end
